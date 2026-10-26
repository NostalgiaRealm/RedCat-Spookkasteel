/*
 * FUN_00550c78 at 00550c78
 * undefined __register FUN_00550c78(int param_1, byte * param_2)
 * Address ranges: 00550c78-00550d44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00550c78(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar4;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  uint *local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  byte *local_c;
  int local_8;
  
  local_24 = (uint *)0x0;
  local_1c = (uint *)0x0;
  puStack_28 = (undefined1 *)0x550c94;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_2c = &LAB_00550d45;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_10 = 0;
  puStack_28 = &stack0xfffffffc;
  FUN_00409690(local_c,(int *)&local_1c);
  iVar1 = FUN_0045ba40(*(int *)(local_8 + 4));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_20 = uVar2 + 1;
    uVar4 = local_20 == 0;
    local_14 = 0;
    do {
      piVar3 = (int *)(**(code **)**(undefined4 **)(local_8 + 4))
                                (*(undefined4 **)(local_8 + 4),local_14);
      local_18 = FUN_00403224(piVar3,(int)&DAT_005505b8);
      FUN_00409690(*(byte **)(local_18 + 8),(int *)&local_24);
      FUN_00404140(local_24,local_1c);
      if ((bool)uVar4) {
        local_10 = *(undefined4 *)(local_18 + 4);
        break;
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
      uVar4 = local_20 == 0;
    } while (!(bool)uVar4);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00550d4c;
  puStack_2c = (undefined1 *)0x550d34;
  FUN_00403db0((int *)&local_24);
  puStack_2c = (undefined1 *)0x550d3c;
  FUN_00403db0((int *)&local_1c);
  puStack_2c = (undefined1 *)0x550d44;
  FUN_00403db0((int *)&local_c);
  return;
}

