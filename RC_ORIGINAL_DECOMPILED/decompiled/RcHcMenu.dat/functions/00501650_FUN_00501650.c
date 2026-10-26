/*
 * FUN_00501650 at 00501650
 * undefined __register FUN_00501650(int * param_1)
 * Address ranges: 00501650-0050178c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501650(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_22c;
  undefined1 *puStack_228;
  undefined1 *puStack_224;
  int local_220;
  int local_21c;
  BYTE local_218 [16];
  undefined1 local_208;
  undefined1 local_1f3;
  BYTE local_118 [256];
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int *local_8;
  
  puStack_224 = &stack0xfffffffc;
  local_220 = 0;
  local_21c = 0;
  puStack_228 = &LAB_0050178d;
  uStack_22c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_22c;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 0x245) != '\0') {
    FUN_005017d8((int)param_1,&local_21c);
    local_c = FUN_00404030(local_21c);
    FUN_00501610(local_8);
    FUN_005017d8((int)local_8,&local_220);
    iVar1 = FUN_00404030(local_220);
    local_10 = iVar1 - local_c;
    if (SBORROW4(iVar1,local_c)) {
      local_10 = thunk_FUN_00402874(local_10);
    }
    if (SCARRY4(local_c,local_10)) {
      thunk_FUN_00402874(local_10);
    }
    (**(code **)(*local_8 + 200))();
    GetKeyboardState(local_118);
    FUN_00402cfc((undefined4 *)local_218,0x100,0);
    local_208 = 0x81;
    local_1f3 = 0x81;
    SetKeyboardState(local_218);
    if (0 < (int)local_10) {
      local_18 = local_10;
      local_14 = 1;
      do {
        FUN_00433700((int)local_8,0x100,0x25,1);
        FUN_00433700((int)local_8,0x101,0x25,1);
        local_14 = local_14 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
    }
    SetKeyboardState(local_118);
  }
  *in_FS_OFFSET = uStack_22c;
  puStack_224 = &LAB_00501794;
  puStack_228 = (undefined1 *)0x50178c;
  FUN_00403dd4(&local_220,2);
  return;
}

