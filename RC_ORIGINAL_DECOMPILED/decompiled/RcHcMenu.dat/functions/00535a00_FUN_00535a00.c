/*
 * FUN_00535a00 at 00535a00
 * undefined __register FUN_00535a00(int param_1, undefined4 * param_2)
 * Address ranges: 00535a00-00535a26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00535a00(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2fc);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

