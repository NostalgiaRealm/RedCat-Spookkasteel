/*
 * FUN_10002a50 at 10002a50
 * undefined FUN_10002a50(void)
 * Address ranges: 10002a50-10002ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002a50(float *param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  pfVar1 = param_1;
  while( true ) {
    if (ABS(*pfVar1 - 1.0) < 1e-05) {
      FUN_100145f0();
      param_1[iVar2] = 1.0;
      return;
    }
    if (ABS(*pfVar1 - -1.0) < 1e-05) break;
    iVar2 = iVar2 + 1;
    pfVar1 = pfVar1 + 1;
    if (2 < iVar2) {
      return;
    }
  }
  FUN_100145f0();
  param_1[iVar2] = -1.0;
  return;
}

