/*
 * FUN_0041cd64 at 0041cd64
 * undefined __register FUN_0041cd64(int * param_1, undefined * param_2, LPSIZE param_3)
 * Address ranges: 0041cd64-0041cda0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cd64(int *param_1,undefined *param_2,LPSIZE param_3)

{
  int c;
  LPCSTR lpString;
  
  FUN_0041d040(param_1,3);
  param_3->cx = 0;
  param_3->cy = 0;
  c = FUN_00404030((int)param_2);
  lpString = FUN_004041f4(param_2);
  GetTextExtentPoint32A((HDC)param_1[1],lpString,c,param_3);
  return;
}

