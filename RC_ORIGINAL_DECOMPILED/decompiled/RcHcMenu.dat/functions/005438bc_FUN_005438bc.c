/*
 * FUN_005438bc at 005438bc
 * undefined __register FUN_005438bc(int param_1, undefined4 * param_2)
 * Address ranges: 005438bc-005438e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005438bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

