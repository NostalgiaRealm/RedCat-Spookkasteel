/*
 * FUN_005c0e50 at 005c0e50
 * undefined FUN_005c0e50(void)
 * Address ranges: 005c0e50-005c0eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c0e50(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_005c0170();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005c0ef0(param_1 + 4,param_3,iVar1 + 4);
  FUN_005c0ef0(param_1 + 0x80,param_3,iVar1 + 0x80);
  *(undefined4 *)(iVar1 + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0xa0) = 0;
  *(undefined4 *)(iVar1 + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(int *)(iVar1 + 0x70) = param_1;
  FUN_005c01c0();
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + param_2;
  return iVar1;
}

