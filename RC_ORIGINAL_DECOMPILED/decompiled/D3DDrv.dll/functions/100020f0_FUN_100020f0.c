/*
 * FUN_100020f0 at 100020f0
 * undefined __cdecl FUN_100020f0(LPCSTR param_1)
 * Address ranges: 100020f0-10002147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100020f0(LPCSTR param_1)

{
  FILE *pFVar1;
  CHAR local_800 [2048];
  
  wvsprintfA(local_800,param_1,&stack0x00000008);
  pFVar1 = (FILE *)FUN_10007d46(s_D3DDrv_Log_10013fe8,&DAT_10014038);
  if (pFVar1 != (FILE *)0x0) {
    FUN_10007cd9((int *)pFVar1,&DAT_10014034);
    FUN_10007c5c(pFVar1);
  }
  return;
}

