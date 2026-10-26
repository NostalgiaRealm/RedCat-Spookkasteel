/*
 * FUN_10004b10 at 10004b10
 * undefined4 __cdecl FUN_10004b10(int param_1, LPCSTR param_2, int param_3)
 * Address ranges: 10004b10-10004c70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10004b10(int param_1,LPCSTR param_2,int param_3)

{
  FILE *pFVar1;
  int iVar2;
  char *pcVar3;
  _SYSTEMTIME local_10;
  
  if (param_3 == 0) {
    pcVar3 = &DAT_100152c4;
  }
  else {
    pcVar3 = &DAT_10014038;
  }
  pFVar1 = (FILE *)FUN_10007d46(param_2,pcVar3);
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  GetSystemTime(&local_10);
  FUN_10007cd9((int *)pFVar1,(byte *)s__________________________________10015288);
  FUN_10007cd9((int *)pFVar1,(byte *)s_Date___i__i__i__Time___i__i_10015268);
  FUN_10007cd9((int *)pFVar1,(byte *)s_Cache_Name___s_10015258);
  FUN_10005460(*(int *)(param_1 + 0x108));
  FUN_10007cd9((int *)pFVar1,(byte *)s_Total_Mem___5i_10015248);
  FUN_10005470(*(int *)(param_1 + 0x108));
  FUN_10007cd9((int *)pFVar1,(byte *)s_Free_Mem___5i_10015238);
  FUN_10007cd9((int *)pFVar1,(byte *)s_____Slots_____10015228);
  iVar2 = param_1 + 0x11c;
  param_2 = (LPCSTR)0x80;
  do {
    if (*(int *)(iVar2 + 8) != 0) {
      FUN_10007cd9((int *)pFVar1,(byte *)s_Width___3i__Height__3i__Mips___2_100151e4);
    }
    iVar2 = iVar2 + 0xa4;
    param_2 = param_2 + -1;
  } while (param_2 != (LPCSTR)0x0);
  FUN_10007cd9((int *)pFVar1,(byte *)s_Total_Ref___4i__Total_Used___4i_100151c0);
  FUN_10007c5c(pFVar1);
  return 1;
}

