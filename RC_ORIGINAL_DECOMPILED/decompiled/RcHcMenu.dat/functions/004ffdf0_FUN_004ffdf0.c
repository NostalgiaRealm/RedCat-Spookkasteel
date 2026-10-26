/*
 * FUN_004ffdf0 at 004ffdf0
 * undefined __register FUN_004ffdf0(int param_1, undefined4 * param_2)
 * Address ranges: 004ffdf0-004ffe16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffdf0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

