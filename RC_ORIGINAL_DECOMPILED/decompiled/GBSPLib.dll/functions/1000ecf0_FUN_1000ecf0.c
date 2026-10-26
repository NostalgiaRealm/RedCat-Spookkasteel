/*
 * FUN_1000ecf0 at 1000ecf0
 * undefined FUN_1000ecf0(void)
 * Address ranges: 1000ecf0-1000ed3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ecf0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x34);
  while ((iVar2 != 0 && (iVar2 != param_1))) {
    piVar1 = (int *)(iVar2 + 0xc + (uint)(*(int *)(iVar2 + 8) == param_2) * 4);
    iVar2 = *piVar1;
  }
  uVar3 = (uint)(*(int *)(param_1 + 8) == param_2);
  *piVar1 = *(int *)(param_1 + 0xc + uVar3 * 4);
  *(undefined4 *)(param_1 + 4 + uVar3 * 4) = 0;
  return 1;
}

