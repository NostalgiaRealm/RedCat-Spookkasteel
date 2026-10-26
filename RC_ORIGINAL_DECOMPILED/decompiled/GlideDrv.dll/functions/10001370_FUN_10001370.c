/*
 * FUN_10001370 at 10001370
 * undefined4 __cdecl FUN_10001370(int param_1, LPCSTR param_2, int param_3)
 * Address ranges: 10001370-100014c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10001370(int param_1,LPCSTR param_2,int param_3)

{
  FILE *pFVar1;
  int *piVar2;
  char *pcVar3;
  _SYSTEMTIME local_10;
  
  if (param_3 == 0) {
    pcVar3 = &DAT_1000e184;
  }
  else {
    pcVar3 = &DAT_1000e188;
  }
  pFVar1 = (FILE *)FUN_10003f39(param_2,pcVar3);
  if (pFVar1 == (FILE *)0x0) {
    return 0;
  }
  GetSystemTime(&local_10);
  FUN_1000416f((int *)pFVar1,(byte *)s__________________________________1000e148);
  FUN_1000416f((int *)pFVar1,(byte *)s_Date___i__i__i__Time___i__i_1000e128);
  FUN_1000416f((int *)pFVar1,(byte *)s_Cache_Name___s_1000e118);
  FUN_10001fa0(*(int *)(param_1 + 0x100));
  FUN_1000416f((int *)pFVar1,(byte *)s_Total_Memory_for_Cache___6i_1000e0f8);
  FUN_10001fb0(*(int *)(param_1 + 0x100));
  FUN_1000416f((int *)pFVar1,(byte *)s_Free_Memory_for_Cache___6i_1000e0dc);
  FUN_1000416f((int *)pFVar1,(byte *)s_____Slots_____1000e0cc);
  piVar2 = (int *)(param_1 + 0x138);
  param_2 = (LPCSTR)0x80;
  do {
    if (*piVar2 != 0) {
      FUN_1000416f((int *)pFVar1,(byte *)s_Width___3i__Height__3i__Mips___2_1000e094);
    }
    piVar2 = piVar2 + 0xf;
    param_2 = param_2 + -1;
  } while (param_2 != (LPCSTR)0x0);
  FUN_1000416f((int *)pFVar1,(byte *)s_Total_Ref___4i__Total_Used___4i_1000e070);
  FUN_10003d52(pFVar1);
  return 1;
}

