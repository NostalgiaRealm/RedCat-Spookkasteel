/*
 * FUN_005d4750 at 005d4750
 * undefined FUN_005d4750(void)
 * Address ranges: 005d4750-005d481e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d4750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0x1c4) != 0) {
    FUN_005cf400(*(int *)(iVar1 + 0x1c4));
    *(undefined4 *)(iVar1 + 0x1c4) = 0;
    _DAT_007203c0 = 0;
  }
  if (*(int *)(iVar1 + 0x1c0) != 0) {
    FUN_005cf400(*(int *)(iVar1 + 0x1c0));
    *(undefined4 *)(iVar1 + 0x1c0) = 0;
    _DAT_007203c0 = 0;
  }
  uVar2 = FUN_005cf3b0(*(int *)(iVar1 + 0x198) * 0x18);
  *(undefined4 *)(iVar1 + 0x1c4) = uVar2;
  uVar2 = FUN_005cf3b0(*(int *)(iVar1 + 0x188) * 0x88);
  *(undefined4 *)(iVar1 + 0x1c0) = uVar2;
  iVar3 = FUN_005d4900(iVar1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_005d4a00(iVar1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_005d1fd0(param_1);
  FUN_005d2000(iVar1);
  iVar3 = FUN_005d4ec0(iVar1);
  if (iVar3 == 0) {
    return 0;
  }
  FUN_005d4f50(iVar1);
  return 1;
}

