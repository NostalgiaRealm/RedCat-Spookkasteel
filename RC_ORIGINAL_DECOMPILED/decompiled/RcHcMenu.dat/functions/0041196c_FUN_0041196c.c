/*
 * FUN_0041196c at 0041196c
 * undefined __register FUN_0041196c(undefined4 param_1, int param_2)
 * Address ranges: 0041196c-0041199f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041196c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  for (iVar1 = param_2; -1 < iVar1; iVar1 = iVar1 + -1) {
  }
  puVar2 = (undefined4 *)&stack0xfffffff4;
  if (-1 < param_2) {
    iVar1 = param_2 + 1;
    do {
      FUN_00411870((undefined **)*puVar2);
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

