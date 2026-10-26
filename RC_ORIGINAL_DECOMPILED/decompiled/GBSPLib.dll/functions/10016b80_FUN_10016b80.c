/*
 * FUN_10016b80 at 10016b80
 * undefined FUN_10016b80(void)
 * Address ranges: 10016b80-10016c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10016b80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_10016140();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_10016c20(param_1 + 4,param_3,iVar1 + 4);
  FUN_10016c20(param_1 + 0x80,param_3,iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(int *)(iVar1 + 0x70) = param_1;
  FUN_100161e0();
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_2;
  return iVar1;
}

