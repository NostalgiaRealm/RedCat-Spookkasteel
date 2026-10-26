/*
 * FUN_00543934 at 00543934
 * undefined __register FUN_00543934(int param_1, undefined4 * param_2)
 * Address ranges: 00543934-0054395a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543934(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

