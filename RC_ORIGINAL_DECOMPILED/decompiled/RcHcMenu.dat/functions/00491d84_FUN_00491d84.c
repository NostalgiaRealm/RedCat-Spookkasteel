/*
 * FUN_00491d84 at 00491d84
 * int * __register FUN_00491d84(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491d84-00491e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00491d84(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  byte local_30 [28];
  int local_14;
  short local_10;
  short local_e;
  int *local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',param_3);
  iVar1 = FUN_0045da14(*(int *)(local_8 + 0x2c));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar2 = uVar2 + 0x8000;
  if (0xffff < uVar2) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (short)((short)uVar2 + -0x8000)) {
    local_10 = (short)uVar2 + -0x7fff;
    local_e = 0;
    do {
      local_14 = FUN_00496dfc(*(int **)(local_8 + 0x2c),(int)local_e);
      if ((*(byte *)(local_14 + 0x44) & 2) == 0) {
        FUN_0048e078((undefined4 *)local_30);
        FUN_0048e0c0((int)local_30,*(undefined4 *)(local_8 + 0x34));
        FUN_0048de00(local_30,local_e);
        (**(code **)(*local_c + 0xc))(local_c,local_30);
      }
      local_e = local_e + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return local_c;
}

