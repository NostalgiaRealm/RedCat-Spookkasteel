# REA evidence index: Fleurifee ribbons

2026-10-14. Full records, including assembly and decompilation where supplied, are in `rea-evidence-bundle.json`.
Target SHA-256: `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

43 records. Static Hopper analysis of the original binary; no native execution or runtime capture.
Exploratory requests are intentionally retained even when a later request identified the relevant function or constant.
Some requests point inside a function; the first assembly address below identifies its resolved entry.

| Evidence ID | Operation/request | Resolved entry / result |
| --- | --- | --- |
| `ev_03f92af65232a6ec9b0e567679c0e66c1f49cae6f5a49e752df64f7059238e0e` | `analyze_function {"procedure": "0x502350"}` | 0x502350; 97 assembly lines |
| `ev_04391e3464d0ea103f5d5581541d8a2818a7ed2c10a8e972be562aed5bd7cbef` | `xrefs {"address": "0x47cdb0"}` | 1 entries |
| `ev_089d49dcff2ecf4b592590912fe478f79cf251a34ea8a67cdfff27a42439a202` | `analyze_function {"procedure": "0x586b40"}` | 0x586b40; 55 assembly lines |
| `ev_0cfca4d22aea437cba24d0e76c747039c63b5e304c86893d53341365bd166a33` | `xrefs {"address": "0x47cdd0"}` | 0 entries |
| `ev_0ebc10150629f379a0fd1ee854c108fc1b6fdedec8c67b5137674f6cdf25f215` | `read_bytes {"address": "0x64a414", "length": 4}` | Retained result in bundle |
| `ev_1ad0fea5142401816ab063538e939227bb26863fcab0bfacd82b73052f4b1505` | `read_bytes {"address": "0x64e294", "length": 128}` | Retained result in bundle |
| `ev_1f7847e7dd6f684263c84cd4c54991fedf24dd98b22bb9621195f1e5b5978fd8` | `analyze_function {"procedure": "0x586ed0"}` | 0x586ed0; 216 assembly lines |
| `ev_1fb00a362013ac6ffd6412aa8f8501e2c28aeddbd979195b9a54ea63dc7de5f2` | `read_bytes {"address": "0x6b87d8", "length": 16}` | Retained result in bundle |
| `ev_28cdde7959e672baad42085d83e9deb15bb040c8529a7ec5b2756bd85149aa08` | `analyze_function {"procedure": "0x479530"}` | 0x479510; 12 assembly lines |
| `ev_296cdc2b0da2498c68e892781544211e616c06ca6465a43287db5164a9c2455c` | `xrefs {"address": "0x6b8810"}` | 3 entries |
| `ev_30d0e3fe4e26cb8d2ee1d838da0be1f2673795aeadcbec84a1d23d2c25bd21d8` | `read_bytes {"address": "0x64a438", "length": 4}` | Retained result in bundle |
| `ev_3f10e53ed4e778bc3f60bc29658a6dcddfeb7fee360178f27ff28c8c27bffbfa` | `read_bytes {"address": "0x64a450", "length": 4}` | Retained result in bundle |
| `ev_45d001fe355e78a5c3c268d440b2fc194ea6ef2c616e47682d81efc8ddb74686` | `xrefs {"address": "0x587550"}` | 0 entries |
| `ev_4bb1abcfc0df41c4d6a8dbc7a8eee31a0736a1ec79bd25a71c4b4130b4725691` | `analyze_function {"procedure": "0x4781eb"}` | 0x4781c0; 17 assembly lines |
| `ev_4d7f0c82b16cfe35d87b8979a6553d3cf47929b83f65dd410e092a870f2c76b8` | `read_bytes {"address": "0x64fda8", "length": 32}` | Retained result in bundle |
| `ev_52c9d007061c60d1d134d5e1bcfb5eda0ab8d1d8127135f0e9e5ea69837b0888` | `analyze_function {"procedure": "0x479540"}` | 0x479540; 9 assembly lines |
| `ev_5b26c6924616589fa2dde9cc8dde0f8ce6cfe368776f9cbc87e38a0688bff744` | `analyze_function {"procedure": "0x47cf20"}` | 0x47cf20; 212 assembly lines |
| `ev_676d2380a564a74650dc154eac9177776f8e4afd12209cf59409ed74013db839` | `read_bytes {"address": "0x64a354", "length": 4}` | Retained result in bundle |
| `ev_6c524bbb65d55ba4ab92bc7f3538683b49e72f7cba8bb4bc5145d3d61cf2e08f` | `analyze_function {"procedure": "0x47e710"}` | 0x47e710; 29 assembly lines |
| `ev_708559cebd807669553f1d3eb030b7b6bff88832e323ff4517a3164af2bc4662` | `analyze_function {"procedure": "0x587100"}` | 0x587100; 41 assembly lines |
| `ev_7abea4960e547128fd9a148f2f9f283d9cc755172dc905a5bf08448401c63d7f` | `analyze_function {"procedure": "0x4797e0"}` | 0x4797e0; 50 assembly lines |
| `ev_80f72afe2ba2ef426ef8d253dba92ce0ad596cf6e8886eb71479cfc69d181437` | `analyze_function {"procedure": "0x478175"}` | 0x4780c0; 78 assembly lines |
| `ev_8ba10e9ddb2f6a1603c801a268607bce6a04ea3c7689f2396f6f1ea08c88a07f` | `read_bytes {"address": "0x64fdb8", "length": 4}` | Retained result in bundle |
| `ev_8bf9611c96a1aaa671151c8ab8ead36dfdf1a406022e8bc88059b3f2ae6e98db` | `analyze_function {"procedure": "0x479560"}` | 0x479560; 186 assembly lines |
| `ev_930fea0f25a2f9cae4cfd0cbec13a112dd0796da57d7821eb1d9ebea6368a95f` | `analyze_function {"procedure": "0x479520"}` | 0x479510; 12 assembly lines |
| `ev_9895cba9eb2aff69ec70dec03e59b4a7a2078668f6a79c67f03db49dcc73c476` | `analyze_function {"procedure": "0x478f18"}` | 0x478a00; 725 assembly lines |
| `ev_9bbb4428623b593e098158a665cbf03effe5e344aa2b2437016f639d1bafe823` | `analyze_function {"procedure": "0x586eb0"}` | 0x586eb0; 9 assembly lines |
| `ev_9e8833369f9174949c825afbbc271055a999216b56fa21aedc06af5821e51987` | `analyze_function {"procedure": "0x5871f0"}` | 0x5871f0; 183 assembly lines |
| `ev_a11c5fa79f747e85eba3c2ea820e7ab4d0d9812ad1a311926d1c74f92b904962` | `analyze_function {"procedure": "0x47c7c0"}` | 0x47c760; 299 assembly lines |
| `ev_a29bc43f90439bf7223bf4e9c3cdb4bb5f0d535b74e06a792eb1d415421cdbf6` | `analyze_function {"procedure": "0x587420"}` | 0x587420; 98 assembly lines |
| `ev_abab2cd319d426d0a948b079a2b02d7da76ef43adfe97ef26635f20bc78d4891` | `analyze_function {"procedure": "0x47a7b0"}` | 0x47a7b0; 264 assembly lines |
| `ev_aecf3b11f890803228d9c9f75a9cbf4daa748610ccd0a48787f36de8b556527f` | `analyze_function {"procedure": "0x47ea90"}` | 0x47ea90; 144 assembly lines |
| `ev_b0f4f1981c29fd1cbec3a92144cf19c5087f00382ece68f6fda76f43afdc29fe` | `analyze_function {"procedure": "0x47cdd0"}` | 0x47cdb0; 97 assembly lines |
| `ev_b91426b72c3cc499e8c91f658bb77b6a08072746ee62b085d28ef598b45b76d2` | `analyze_function {"procedure": "0x47b76f"}` | 0x47b160; 426 assembly lines |
| `ev_bc30cd41cf61124ef26b82978393a1b0a7216a5afac52a9dc7c4ab54878678ef` | `analyze_function {"procedure": "0x47c580"}` | 0x47c580; 121 assembly lines |
| `ev_cee4bbc012aafe7b3e2284a37968ed01518a1c0843a4d2302c845cbe13e66cb1` | `read_bytes {"address": "0x64cf7c", "length": 4}` | Retained result in bundle |
| `ev_d24dbf25e9cc08899b0ef407a7c5f914c925186f882fad847b7332de59938d14` | `analyze_function {"procedure": "0x587800"}` | 0x587550; 561 assembly lines |
| `ev_d662ee7ac79d7ab225b8228ac790089170f07cdab115f9187050914d362b7bb0` | `analyze_function {"procedure": "0x47df00"}` | 0x47dd60; 173 assembly lines |
| `ev_e09f34f8daf82b22f90d22291a7dad24529d1a7068c3fe1b35c21365a8625d91` | `read_bytes {"address": "0x64a4f8", "length": 4}` | Retained result in bundle |
| `ev_e62d9e2df50c72b6f1ce320d60e0ff0753ca74e06530da158bf15a943bebd504` | `read_bytes {"address": "0x64a21c", "length": 4}` | Retained result in bundle |
| `ev_e7f88bf98202a7e28e468a64ec30d80e4fb40d19cd1f3f87037fbca28dc5a65f` | `xrefs {"address": "0x6b87d8"}` | 3 entries |
| `ev_ef73017e6e216d535ad25224f6825e8ea1e71a11e7ae635416e2294a65981a40` | `analyze_function {"procedure": "0x47db60"}` | 0x47db60; 120 assembly lines |
| `ev_f990ef3d6db61f0c8422bffeb99d39d881082222dbd8dc7970c03b3256fbef74` | `analyze_function {"procedure": "0x587d50"}` | 0x587d50; 1 assembly lines |
