/*
 * FUN_00535a28 at 00535a28
 * undefined __register FUN_00535a28(int param_1, undefined4 * param_2)
 * Address ranges: 00535a28-00535a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535a28(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x30);
  param_2[1] = *(undefined4 *)(iVar1 + 0x34);
  return;
}

