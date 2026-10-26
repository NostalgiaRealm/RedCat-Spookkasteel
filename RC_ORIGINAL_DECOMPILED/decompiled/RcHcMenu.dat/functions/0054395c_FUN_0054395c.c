/*
 * FUN_0054395c at 0054395c
 * undefined __register FUN_0054395c(int param_1, undefined4 * param_2)
 * Address ranges: 0054395c-00543982
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054395c(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

