/*
 * FUN_1002e8dc at 1002e8dc
 * undefined FUN_1002e8dc(void)
 * Address ranges: 1002e8dc-1002e97e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e8dc(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1002e981();
  if (DAT_1052a4a0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1052a49c = 1;
  DAT_1052a498 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1052a994 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1052a990 - 4), DAT_1052a994 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1052a994 <= puVar1);
    }
    FUN_1002e993(&DAT_10036018,&DAT_10036020);
  }
  FUN_1002e993(&DAT_10036024,&DAT_10036028);
  if (param_3 == 0) {
    DAT_1052a4a0 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1002e98a();
  return;
}

