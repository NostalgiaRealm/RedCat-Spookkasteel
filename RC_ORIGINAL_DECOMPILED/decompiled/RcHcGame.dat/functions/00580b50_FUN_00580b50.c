/*
 * FUN_00580b50 at 00580b50
 * undefined FUN_00580b50(void)
 * Address ranges: 00580b50-00580ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00580b50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar3 = param_2 + -8;
    puVar4 = param_3 + -2;
    *puVar4 = *(undefined4 *)(param_2 + -8);
    iVar1 = param_3[-1];
    if (iVar1 != *(int *)(param_2 + -4)) {
      if ((iVar1 != 0) &&
         (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
        FUN_005abfc0(0);
      }
      iVar1 = *(int *)(param_2 + -4);
      param_3[-1] = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      }
    }
    param_2 = iVar3;
    param_3 = puVar4;
  } while (iVar3 != param_1);
  return puVar4;
}

