/*
 * FUN_005153c0 at 005153c0
 * undefined __register FUN_005153c0(int param_1, undefined4 * param_2)
 * Address ranges: 005153c0-005153e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005153c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

