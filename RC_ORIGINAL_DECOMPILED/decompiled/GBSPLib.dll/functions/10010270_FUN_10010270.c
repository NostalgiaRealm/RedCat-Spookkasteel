/*
 * FUN_10010270 at 10010270
 * undefined FUN_10010270(void)
 * Address ranges: 10010270-100102a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10010270(int param_1)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = 0;
  pfVar2 = (float *)(param_1 + 0x60);
  do {
    if (*pfVar2 < 0.0) {
      (*DAT_1014e358)(s_CheckPatch__Bad_final_radiosity_C_10039774);
      return 0;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
  } while (iVar1 < 3);
  return 1;
}

