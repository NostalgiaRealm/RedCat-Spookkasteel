/*
 * FUN_004ffe40 at 004ffe40
 * undefined __register FUN_004ffe40(int param_1, undefined4 * param_2)
 * Address ranges: 004ffe40-004ffe66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ffe40(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x220);
  *param_2 = *(undefined4 *)(iVar1 + 0x38);
  param_2[1] = *(undefined4 *)(iVar1 + 0x3c);
  return;
}

