/*
 * FUN_1001b611 at 1001b611
 * undefined FUN_1001b611(void)
 * Address ranges: 1001b611-1001b6b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b611(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1001b6b6();
  if (DAT_10025d58 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10025d54 = 1;
  DAT_10025d50 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1020fd50 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1020fd4c - 4), DAT_1020fd50 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1020fd50 <= puVar1);
    }
    FUN_1001b6c8(&DAT_10021018,&DAT_10021020);
  }
  FUN_1001b6c8(&DAT_10021024,&DAT_10021028);
  if (param_3 == 0) {
    DAT_10025d58 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1001b6bf();
  return;
}

