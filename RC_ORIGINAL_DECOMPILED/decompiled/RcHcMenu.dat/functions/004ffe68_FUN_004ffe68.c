/*
 * FUN_004ffe68 at 004ffe68
 * undefined __register FUN_004ffe68(int param_1, undefined4 * param_2)
 * Address ranges: 004ffe68-004ffe8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffe68(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

