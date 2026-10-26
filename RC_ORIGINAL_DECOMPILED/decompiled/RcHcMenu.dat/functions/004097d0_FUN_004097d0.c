/*
 * FUN_004097d0 at 004097d0
 * undefined __register FUN_004097d0(undefined * param_1, int * param_2)
 * Address ranges: 004097d0-00409802
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004097d0(undefined *param_1,int *param_2)

{
  uint cchLength;
  undefined4 *puVar1;
  
  cchLength = FUN_00404030((int)param_1);
  puVar1 = (undefined4 *)FUN_004041f4(param_1);
  FUN_00403e98(param_2,puVar1,cchLength);
  if (0 < (int)cchLength) {
    CharUpperBuffA((LPSTR)*param_2,cchLength);
  }
  return;
}

