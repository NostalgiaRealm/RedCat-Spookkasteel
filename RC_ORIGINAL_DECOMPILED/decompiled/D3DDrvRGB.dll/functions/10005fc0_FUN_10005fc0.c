/*
 * FUN_10005fc0 at 10005fc0
 * undefined __cdecl FUN_10005fc0(byte * param_1)
 * Address ranges: 10005fc0-10006014
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10005fc0(byte *param_1)

{
  FILE *pFVar1;
  byte local_320 [800];
  
  pFVar1 = (FILE *)FUN_10008898(s_zrender_log_10018960,&DAT_1001895c);
  if (pFVar1 != (FILE *)0x0) {
    FUN_10008cdd(local_320,param_1,(undefined4 *)&stack0x00000008);
    FUN_1000882b((int *)pFVar1,local_320);
    FUN_100087ae(pFVar1);
  }
  return;
}

