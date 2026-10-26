/*
 * FUN_10002700 at 10002700
 * undefined __cdecl FUN_10002700(LPCSTR param_1)
 * Address ranges: 10002700-10002757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002700(LPCSTR param_1)

{
  FILE *pFVar1;
  CHAR local_400 [1024];
  
  wvsprintfA(local_400,param_1,&stack0x00000008);
  pFVar1 = (FILE *)FUN_10008898(s_D3DDrv_Log_10017058,&DAT_10017054);
  if (pFVar1 != (FILE *)0x0) {
    FUN_1000882b((int *)pFVar1,&DAT_10017064);
    FUN_100087ae(pFVar1);
  }
  return;
}

