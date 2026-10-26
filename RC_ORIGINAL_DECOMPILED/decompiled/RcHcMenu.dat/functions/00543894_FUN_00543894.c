/*
 * FUN_00543894 at 00543894
 * undefined __register FUN_00543894(int param_1, undefined4 * param_2)
 * Address ranges: 00543894-005438ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543894(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

