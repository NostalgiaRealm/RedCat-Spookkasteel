/*
 * FUN_1000aa66 at 1000aa66
 * undefined __cdecl FUN_1000aa66(UINT param_1, int param_2, int param_3)
 * Address ranges: 1000aa66-1000ab08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000aa66(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000ab0b();
  if (DAT_101c37c8 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_101c37c4 = 1;
  DAT_101c37c0 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_101c3dd0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_101c3dcc - 4), DAT_101c3dd0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_101c3dd0 <= puVar1);
    }
    FUN_1000ab1d((undefined4 *)&DAT_10012018,(undefined4 *)&DAT_10012020);
  }
  FUN_1000ab1d((undefined4 *)&DAT_10012024,(undefined4 *)&DAT_10012028);
  if (param_3 == 0) {
    DAT_101c37c8 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000ab14();
  return;
}

