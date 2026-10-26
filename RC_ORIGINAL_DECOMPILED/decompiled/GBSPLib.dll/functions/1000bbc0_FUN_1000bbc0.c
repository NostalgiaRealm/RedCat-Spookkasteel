/*
 * FUN_1000bbc0 at 1000bbc0
 * undefined FUN_1000bbc0(void)
 * Address ranges: 1000bbc0-1000bc72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000bbc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_10014e70();
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_1002770a(s_Gedit_Log_1003879c,&DAT_10036404);
  if (iVar1 == 0) {
    (*DAT_1014e358)(s_Could_not_open_gedit_log____10038744);
  }
  else {
    FUN_1002769d(iVar1,s___Error_Report___10038784);
    iVar2 = FUN_10015fa0();
    iVar4 = iVar2;
    if (0 < iVar2) {
      do {
        iVar4 = iVar4 + -1;
        iVar3 = FUN_10016100(iVar4,&param_1,&param_2);
        if (iVar3 != 0) {
          FUN_1002769d(iVar1,s_Error___3i__Code___3i__Info__s_10038764,iVar4,param_1,param_2);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_10027620(iVar1);
  }
  (*DAT_1014e358)(s_LoadMotion__Could_not_load_motio_1003871c);
  return 0;
}

