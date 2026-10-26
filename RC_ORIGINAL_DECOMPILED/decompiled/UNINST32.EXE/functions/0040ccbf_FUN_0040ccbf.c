/*
 * FUN_0040ccbf at 0040ccbf
 * undefined __cdecl FUN_0040ccbf(UINT param_1, int param_2, int param_3)
 * Address ranges: 0040ccbf-0040cd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0040ccbf(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_0041352c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00413528 = 1;
  DAT_00413524 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00413f10 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00413f0c - 4), DAT_00413f10 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00413f10 <= puVar1);
    }
    FUN_0040cd58((undefined4 *)&DAT_00412014,(undefined4 *)&DAT_00412018);
  }
  FUN_0040cd58((undefined4 *)&DAT_0041201c,(undefined4 *)&DAT_00412020);
  if (param_3 != 0) {
    return;
  }
  DAT_0041352c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

