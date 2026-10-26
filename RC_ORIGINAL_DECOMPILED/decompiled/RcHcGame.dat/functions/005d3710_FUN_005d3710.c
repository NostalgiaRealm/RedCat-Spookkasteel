/*
 * FUN_005d3710 at 005d3710
 * undefined FUN_005d3710(void)
 * Address ranges: 005d3710-005d372f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3710(int param_1,int *param_2)

{
  int *piVar1;
  
  if (*param_2 != 0) {
    *param_2 = 0;
    piVar1 = (int *)(*(int *)(param_1 + 0x3b0) + 0xa64);
    *piVar1 = *piVar1 + -1;
  }
  return;
}

