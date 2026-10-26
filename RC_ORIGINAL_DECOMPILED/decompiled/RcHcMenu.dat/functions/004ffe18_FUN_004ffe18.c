/*
 * FUN_004ffe18 at 004ffe18
 * undefined __register FUN_004ffe18(int param_1, undefined4 * param_2)
 * Address ranges: 004ffe18-004ffe3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffe18(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

