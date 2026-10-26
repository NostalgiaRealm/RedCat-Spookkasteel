/*
 * FUN_005438e4 at 005438e4
 * undefined __register FUN_005438e4(int param_1, undefined4 * param_2)
 * Address ranges: 005438e4-0054390a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005438e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  *param_2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

