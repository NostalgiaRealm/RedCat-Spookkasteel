/*
 * FUN_004975d8 at 004975d8
 * undefined __register FUN_004975d8(int * param_1, byte * param_2)
 * Address ranges: 004975d8-004976d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004975d8(int *param_1,byte *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  uint *local_30;
  uint *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  byte *local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_2c = (uint *)0x0;
  local_30 = (uint *)0x0;
  puStack_38 = &LAB_004976da;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_10 = 0;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_00497724((int)param_1);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_24 = uVar3 + 1;
    local_20 = 0;
    do {
      local_14 = FUN_00497868(local_8,local_20);
      iVar2 = FUN_004905c0(local_14);
      uVar3 = iVar2 - 1;
      if (SBORROW4(iVar2,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (-1 < (int)uVar3) {
        local_28 = uVar3 + 1;
        local_1c = 0;
        do {
          local_18 = FUN_00490590(local_14,local_1c);
          uVar4 = local_18 == 0;
          if ((bool)uVar4) {
            FUN_00403d94("Assertion failure");
          }
          FUN_00409690(*(byte **)(local_18 + 0x3c),(int *)&local_2c);
          puVar1 = local_2c;
          FUN_00409690(local_c,(int *)&local_30);
          FUN_00404140(puVar1,local_30);
          if ((bool)uVar4) {
            local_10 = local_18;
            break;
          }
          local_1c = local_1c + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
      }
      local_20 = local_20 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004976e1;
  puStack_38 = (undefined1 *)0x4976d9;
  FUN_00403dd4((int *)&local_30,2);
  return;
}

