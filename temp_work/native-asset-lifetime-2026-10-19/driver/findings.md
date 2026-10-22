# Original D3D driver: texture lifetime and video-memory cache

Research date: 19 October 2026. Read-only native analysis. No target application execution, port changes, tests or builds were performed for this supporting investigation. Offline inspection tools/disassemblers were executed. The original files were not changed. Generated disassembly, PE metadata, retained source hashes and this note reside in this directory.

## Scope and interpretation

The original game distinguishes keeping an asset in CPU/system memory from giving its pixels a currently useful video-memory cache slot. A camera turn can change which textures are requested by submitted polygons, but this is not evidence that the corresponding asset file or level sector was unloaded from CPU memory. The inspected driver uses **draw-demand, per-mip least-recently-used texture caching**, with separate main texture and lightmap caches. Its inspected cache routines contain no camera position, radius, world section, distance or time-in-seconds input.

These conclusions apply directly to the installed **D3DDrv.dll** path. The installed D3DDrvRGB.dll was inventoried and has similar cache-related strings, but its complete cache controller was not recovered here, and the current running game's selected driver was not established. Do not generalize exact offsets, slot tables, cache percentages or all detailed branches to the RGB driver, other renderers or operating-system compatibility layers.

## Artifact identity

| Artifact | Bytes | SHA-256 |
| --- | ---: | --- |
| `D3DDrv.dll` | 106496 | `73fccccd3d75382875578a81722dc1b3555ad4f082e13dd2ccadeb175e2d7017` |
| `D3DDrvRGB.dll` | 118784 | `83e873a997bc184cb26c19d4200f1f86afc429b60619e6e687c24f6a95024c6d` |

Installed directory: `/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel/`.

D3DDrv.dll preferred image base: `0x10000000`; exported `DriverHook` at VA `0x10005300`, RVA `0x5300`. Addresses below are preferred VAs, not observed runtime addresses. Exported driver callback structure at `0x10015398` supplies `THandle_Create = 0x10007560`, `THandle_Destroy = 0x10007670` and `BeginScene = 0x10006d50`. Table bytes are retained in `binary-constants.json`.

## Retained REA evidence

Root investigator generated these same-binary REA reports in this directory:

| Entry | Interpreted role | Evidence ID |
| --- | --- | --- |
| `0x10005a80` | SetupTexture | `ev_fbf72a2d2ae7ddbbe3d75e9092c6a33d5e29e0383b28bed282d8a8d13baa32f0` |
| `0x10005830` | SetupMipData | `ev_f73146e98a70dac7e43203d7ca12f911e424642845c4512b4f2b32be2da0b861` |
| `0x10004f70` | TypeFindSlot | `ev_b7c976b4e6118fbf8c1b880cb9b20d0cddcf185b096052897a8977c806c525d4` |
| `0x10007a50` | THandle_CheckCache | `ev_5f3eece87fe06fd81100ca51fdef3d16707918fdba1bb700955f55131721a4ee` |
| `0x100078d0` | Create system surfaces | `ev_82f93bb6e3bede12a931094799d9f0be03209bcfe342c9da36cdb38b62a912d8` |
| `0x10004e70` | Setup video slot | `ev_c73f1532c320d8e032ce524b52633da14ceac39520a230186ffae0c258502531` |
| `0x10007670` | THandle_Destroy | `ev_6561293827710535e2815ee83627866a7564d9f693539047c065b51968b7b240` |

The REA decompiler preview of SetupTexture inverted the cache-miss/dirty condition. **Raw assembly wins**: `0x10005a9d test eax,eax; 0x10005a9f jne 0x10005ab4` skips the miss path on nonzero return from SetupMipData. Zero return sets the dirty bit and increments misses. Do not copy the inverted pseudocode into an implementation or use it to infer repeated uploads of cache hits.

## Verified call chain and structures

Per-mip driver data has at least these fields (observed stride `0x14`):

| Offset | Meaning established by use |
| --- | --- |
| `+0x00` | retained source/system DirectDraw surface |
| `+0x04` | matching cache type |
| `+0x08` | selected cache slot; may be stale after replacement |
| `+0x0c` | texture interface or related surface data |
| `+0x10` byte | flags, including update/dirty `0x02` |

Cache slot data has stride `0x18`, with surface at `+0x08`, texture interface at `+0x0c`, LRU at `+0x10`, and owner/user data at `+0x14`. These are partial structural interpretations, not a complete type recovery.

### 1. System copy and cache-class registration

The installed Create3DTHandle branch prepares each requested mip, creates its source surface, and records a cache type for its size/format/stage. The driver can therefore later re-upload without reopening an actor or world texture file. A texture handle's creation/destruction sets the global cache-needs-update flag (`0x101271e0`).

Supporting original callback and routines: `THandle_Create 0x10007560`, `Create3DTHandle 0x10007290`, `THandle_Destroy 0x10007670`, `THandle_CreateSurfaces 0x100078d0`. The REA surface report confirms DDSCAPS `0x1800 = SYSTEMMEMORY | TEXTURE` at `0x1000792a`, while the separate cache-slot allocator writes `0x10005000 = LOCALVIDMEM | VIDEOMEMORY | TEXTURE` at `0x10004ee6`. These are separate source and cache surfaces. The REA destruction report confirms release of cache-class references, `CacheNeedsUpdate=1`, release of retained source surfaces through `0x10007a20`, freeing the mip array and clearing the handle. Names are interpreted with the retained reference source and these binary operations.

The driver texture cache is **not equivalent to source file streaming**. A stale slot doesn't destroy its source mip's system surface. The system surface is released when the THandle itself is destroyed. Camera motion never appears as an argument to THandle_Destroy in the driver interface.

### 2. Cache slot allocation and cache rebuild

`THandle_CheckCache 0x10007a50` immediately succeeds when `CacheNeedsUpdate` is zero. When the flag is set, it logs `THandle_CheckCache: Resetting texture cache...`, chooses per-size slot caps, calls `D3DCache_AdjustSlots` for the lightmap cache and then the main cache, and clears every mip's old slot pointer across the handle table before clearing the flag.

The loop at `0x10007bb5` uses `0x4e20 = 20000` handle records, each `0x20` bytes, and clears the slot pointer of every recorded mip. This is a cache-layout/resource registration change, not a camera-distance change.

Slot adjustment allocates compatible video surfaces by cache type. The retained reference source has the same function structure: free old slots, reset partition accounting, round-robin cache types while referenced, stop at reference count, per-size cap, or allocation limit, and ensure every referenced type gets at least a slot. Native error strings and call sites corroborate this structure in the installed binary. Full exact branch recovery of every allocation failure is outside this note.

The installed driver initializes its main-texture partition to **75% of reported available video memory**, leaving the remainder for lightmaps: at `0x100071a4` it multiplies available memory by the float `0.75` at `0x10011198` (bytes `00 00 40 3f`). The named main/lightmap caches are then created at `0x10007209` and `0x10007233`. This is binary-specific: the retained reference source currently says **70%**, so it must not be treated as an exact build source.

### 3. Lookup when a polygon needs a texture

`SetupMipData 0x10005830` takes the mip record and:

1. Reads its selected slot at `+0x08`.
2. A null slot or slot whose owner is not this mip is a miss.
3. On a miss, calls `TypeFindSlot 0x10004f70`, writes the new slot back into the mip, and sets slot owner to the mip through `0x10004fb0`.
4. Returns zero for the newly assigned/missing upload, or one if ownership still matches.

Ownership matters because multiple source mips of a size/format can share fewer video slots. A mip can retain a pointer to a slot that has since been reused for another texture; the owner check detects that without freeing the original CPU resource.

### 4. Replacement is least recently used within the compatible type

`TypeFindSlot 0x10004f70` obtains the selected cache type's slot array and count, walks the array in `0x18` byte steps, compares unsigned LRU counters, chooses the smallest, and clears its LRU and owner. There is no distance calculation. Equal-LRU ties keep the first selected slot.

The function does not release/reallocate the slot's video surface on ordinary replacement: the surface is reused and later overwritten. Therefore “eviction” here means loss of a texture's ownership/content residency, not necessarily release of a GPU allocation or CPU asset.

### 5. Upload only on miss or dirty data

`SetupTexture 0x10005a80` selects the requested mip and calls SetupMipData. A miss marks its `0x02` dirty bit and increments the texture-miss counter. Dirty mips copy from their retained system surface to the slot's video surface via DirectDraw `BltFast` at `0x10005ad3`, with `DDBLTFAST_WAIT = 0x10`.

After success it clears the dirty bit, stamps the slot with `CurrentLRU` through `0x10004fd0`, fetches the selected texture interface and binds it for the requested stage through `0x10001870`. A cache hit with clean pixels skips the upload but still stamps/binds.

A camera turn affects this indirectly: visible submitted polygons use particular mips. Newly needed mips absent from the cache cause uploads. Recently drawn mips retain newer LRU values. Previously visible mips remain valid until some later demand replaces them. There is no explicit “camera moved away, unload after N units/seconds” branch in these inspected routines.

### 6. Frame stamp rather than wall-clock expiry

`BeginScene 0x10006d50` increments `CurrentLRU` at global `0x101271d0`, clears counters, then checks/rebuilds the cache. Thus recency is tracked by scene/frame submission generations. There is no timer that destroys a texture solely because it has not appeared for a fixed number of seconds.

This does not mean every polygon frame gets a unique texture LRU: every use during a scene shares CurrentLRU. Nor does it prove a particular game's engine always calls BeginScene exactly once per displayed frame. Static analysis establishes the counter's location/order, not a runtime call frequency.

### 7. Lightmaps share the same demand-residency principle

`SetupLMap 0x10005880` uses the same SetupMipData ownership test and slot LRU stamping. On a miss it sets the dirty bit and increments lightmap misses. Dirty data is generated/copied through a reusable size-specific staging/system-to-video surface before `BltFast` into the video cache. A dynamic flag keeps the lightmap dirty for another frame; static clean lightmaps skip regeneration/upload.

The same diagnostic `SetupTexture: System to Video cache Blt failed` is also used by the lightmap branch. Finding that string alone does not distinguish the texture and lightmap paths.

### 8. Surface loss is distinct from ordinary LRU replacement

Both texture and lightmap upload branches compare HRESULT against `0x887601c2 = DDERR_SURFACELOST` and call `RestoreAllSurfaces 0x10001b50`. That routine restores display/surfaces, then calls `D3DCache_EvictAllSurfaces 0x10004830` for each existing cache. The latter invalidates slot owners so subsequent draws are misses and rebuild pixel contents from retained source data.

The retained reference source explicitly implements that invalidation without freeing every underlying surface. Original binary control flow to `0x10004830` agrees. This is a display/context recovery path, not a camera-distance unload policy.

## Actual slot caps in this installed driver

Recovered from stack writes in THandle_CheckCache, **not** copied from the newer source:

| Square size | Main texture cap, ordinary cards | Lightmap cap, ordinary cards | Main texture cap, vendor 4634/3dfx | Lightmap cap, vendor 4634/3dfx |
| --- | ---: | ---: | ---: | ---: |
| 1 | 32 | 128 | 24 | 128 |
| 2 | 32 | 128 | 24 | 128 |
| 4 | 32 | 256 | 24 | 256 |
| 8 | 32 | 1024 | 24 | 256 |
| 16 | 32 | 1024 | 24 | 256 |
| 32 | 32 | 512 | 128 | 128 |
| 64 | 128 | 256 | 128 | 128 |
| 128 | 128 | 256 | 128 | 128 |
| 256 | 128 | 256 | 128 | 128 |

Caps are per matching cache type (including pixel format/stage), not a single unique-texture count for the whole level. Actual allocations may be smaller because of reference counts, video-memory limits, or failure. The later Genesis reference source extends max-size arrays to 16384, while this installed binary only supplies the original nine power-of-two entries through256.

## Supporting historical runtime log, limited attribution

An existing installed `D3DCache.Log`, dated within its own text `10/9/2026, 19:0`, was retained as `historical-D3DCache.Log`, with its SHA-256 beside it. It is a prior log, **not a fresh observation produced by this investigation**. The exact level, selected driver and device state were not independently established.

Its final group records main texture `Total Ref:372, Total Used:315` and lightmap `Total Ref:5417, Total Used:2311`. Size32 main entries show refs50/used32 and refs55/used32, consistent with ordinary-card slot caps; lightmap8 has refs1118/used1024, and4 has refs2503/used256. The text's `Used` is allocated slot count here, not proof that these textures are all visible or all uploaded in a particular frame. Different same-size entries can have different pixel formats/stages.

Memory totals in the log are reported/virtualized on the current machine and should not be interpreted as original-year hardware requirements. The 75/25 split totals support the binary constant but do not show camera-movement-driven eviction.

## Retained Genesis source: reference only

Source directory: `temp_work/gargoyle-transparency-2026-09-29/genesis-reference/Engine/Drivers/D3DDrv/`. Hashes of the six inspected source files are retained in `reference-source-hashes.json`.

Useful readable cross-references:

- `THandle.cpp:226–285`: source surfaces per mip and cache-type registration.
- `THandle.cpp:425–510`: creation/destruction and CacheNeedsUpdate.
- `THandle.cpp:637–707`: SYSTEMMEMORY texture surfaces.
- `THandle.cpp:724–870`: cache reset/layout and invalidating handle-slot associations.
- `D3dcache.cpp:145–169`: EvictAllSurfaces invalidates owners.
- `D3dcache.cpp:433–545`: slot allocation/reference/cap/partition policy.
- `D3dcache.cpp:570–636`: video surface creation.
- `D3dcache.cpp:643–672`: least-recently-used slot selection.
- `Pcache.cpp:533–549`: SetupMipData ownership.
- `Pcache.cpp:554–682`: lightmap dirty/staging/upload.
- `Pcache.cpp:687–735`: texture miss, dirty upload, LRU and bind.
- `D3d_main.cpp:110–147`: surface restoration and cache owner invalidation.

Important divergence: source's `D3D_MANAGE_TEXTURES`, `USE_TPAGES` and other conditional branches are alternate compile configurations. The installed D3DDrv.dll actually contains/calls the manual cache/slot/BltFast branch, so the existence of a managed-texture branch in the reference does not establish that this binary delegates all residency to Direct3D. Source limit patches and cache percentage differ from this binary as described above.

## Bounded conclusions and open questions

**Answered with installed binary evidence:** draw-time cache ownership checks; per-mip dirty upload; compatible-type LRU; separate texture/lightmap cache roles; frame stamp; cache-layout invalidation; display-surface-loss recovery; 75% main-cache partition; original per-size caps.

**Answered by reference plus corroborating installed calls/strings, but not exhaustive decompilation here:** complete creation/allocation failure paths, every surface cap/format variant and destruction branch.

**Not established here:** which driver is selected in the user's current original-game session; actual video-memory contents during a walk; which individual mips are loaded at the starting viewpoint; operating system/Wine/translation layer's additional paging; all RGB driver's exact policies; all other renderers. No passive live trace was collected.

**No camera-distance asset streaming found within the inspected driver routines.** This is a bounded negative result and should be combined with the main binary's world/actor resource load and unload traces. It must not be inflated into proof that no other engine/game subsystem can lazily load any asset.
