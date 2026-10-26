/*
 * FUN_00506bdc at 00506bdc
 * undefined __register FUN_00506bdc(int param_1, undefined4 * param_2)
 * Address ranges: 00506bdc-00506c02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00506bdc(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x280);
  *param_2 = *(undefined4 *)(iVar1 + 0x18);
  param_2[1] = *(undefined4 *)(iVar1 + 0x1c);
  return;
}

