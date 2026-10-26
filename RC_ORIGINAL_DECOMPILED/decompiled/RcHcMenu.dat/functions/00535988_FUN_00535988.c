/*
 * FUN_00535988 at 00535988
 * undefined __register FUN_00535988(int param_1, undefined4 * param_2)
 * Address ranges: 00535988-005359ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535988(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x20);
  param_2[1] = *(undefined4 *)(iVar1 + 0x24);
  return;
}

