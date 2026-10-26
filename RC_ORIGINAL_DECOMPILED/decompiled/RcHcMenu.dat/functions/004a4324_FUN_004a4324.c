/*
 * FUN_004a4324 at 004a4324
 * undefined __register FUN_004a4324(int param_1, undefined1 param_2, int param_3)
 * Address ranges: 004a4324-004a444c;004a445f-004a4479
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4324(int param_1,undefined1 param_2,int param_3)

{
  DWORD DVar1;
  undefined *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_228;
  undefined1 *puStackY_224;
  undefined4 uStack_21c;
  undefined1 *puStack_218;
  undefined1 *puStack_214;
  uint local_204;
  undefined1 local_200;
  undefined1 local_1fc;
  undefined1 local_1f8;
  undefined4 local_1f4;
  undefined1 local_1f0;
  int local_1ec;
  undefined1 local_1e8;
  undefined4 local_1e4 [115];
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 local_9;
  int local_8;
  
  local_14 = (undefined1 *)0x0;
  puStack_214 = (undefined1 *)0x4a4346;
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  FUN_004041e4(param_3);
  puStack_218 = &LAB_004a447a;
  uStack_21c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_21c;
  puStack_214 = &stack0xfffffffc;
  if (local_8 == 0) {
    puStack_214 = &stack0xfffffffc;
    FUN_00403d94(" Self = nil: WriteString (aStr : string)");
  }
  if (*(char *)(local_8 + 0xc) != '\0') {
    DVar1 = GetTickCount();
    local_204 = DVar1 - *(int *)(local_8 + 0x14);
    if (SBORROW4(DVar1,*(int *)(local_8 + 0x14))) {
      local_204 = thunk_FUN_00402874(local_204);
    }
    local_200 = 0;
    local_1fc = local_9;
    local_1f8 = 2;
    local_1f4 = *(undefined4 *)(local_8 + 0x10);
    local_1f0 = 0;
    local_1ec = local_10;
    local_1e8 = 0xb;
    puStackY_224 = (undefined1 *)0x4a43ec;
    local_18 = local_204;
    FUN_0040a894((byte *)"%8d %s %2d %s",&local_204,3,(int *)&local_14);
    puStackY_224 = &LAB_004a444d;
    uStackY_228 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_228;
    FUN_00406dc2(local_1e4,*(char **)(local_8 + 4));
    FUN_0040704a((undefined *)local_1e4);
    FUN_004028b8();
    puVar2 = (undefined *)FUN_004043c8((undefined *)local_1e4,local_14);
    FUN_00407123(puVar2);
    FUN_004028b8();
    FUN_00406e64((undefined *)local_1e4);
    FUN_004028b8();
    *in_FS_OFFSET = uStackY_228;
  }
  *in_FS_OFFSET = uStack_21c;
  puStack_214 = &LAB_004a4481;
  puStack_218 = (undefined1 *)0x4a4479;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

