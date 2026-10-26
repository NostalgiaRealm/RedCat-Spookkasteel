/*
 * FUN_10007180 at 10007180
 * undefined __cdecl FUN_10007180(UINT param_1, int param_2, int param_3)
 * Address ranges: 10007180-10007222
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10007180(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10007225();
  if (DAT_100e3b38 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100e3b34 = 1;
  DAT_100e3b30 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_101f5a90 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_101f5a8c - 4), DAT_101f5a90 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_101f5a90 <= puVar1);
    }
    FUN_10007237((undefined4 *)&DAT_1000e018,(undefined4 *)&DAT_1000e020);
  }
  FUN_10007237((undefined4 *)&DAT_1000e024,(undefined4 *)&DAT_1000e028);
  if (param_3 == 0) {
    DAT_100e3b38 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000722e();
  return;
}

