/*
 * FUN_00535960 at 00535960
 * undefined __register FUN_00535960(int param_1, undefined4 * param_2)
 * Address ranges: 00535960-00535986
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535960(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

