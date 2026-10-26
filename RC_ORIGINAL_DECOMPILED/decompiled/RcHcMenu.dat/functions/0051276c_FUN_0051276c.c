/*
 * FUN_0051276c at 0051276c
 * undefined __register FUN_0051276c(int param_1, undefined4 * param_2)
 * Address ranges: 0051276c-00512792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051276c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

