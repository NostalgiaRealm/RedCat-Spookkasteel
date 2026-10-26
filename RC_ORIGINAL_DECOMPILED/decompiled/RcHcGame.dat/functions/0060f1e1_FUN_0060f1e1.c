/*
 * FUN_0060f1e1 at 0060f1e1
 * undefined FUN_0060f1e1(void)
 * Address ranges: 0060f1e1-0060f279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060f1e1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_0070ffe0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0070ffdc = 1;
  DAT_0070ffd8 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00747eb0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00747eac - 4), DAT_00747eb0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00747eb0 <= puVar1);
    }
    FUN_0060f27a(&DAT_0068d130,&DAT_0068d13c);
  }
  FUN_0060f27a(&DAT_0068d140,&DAT_0068d148);
  if (param_3 != 0) {
    return;
  }
  DAT_0070ffe0 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

