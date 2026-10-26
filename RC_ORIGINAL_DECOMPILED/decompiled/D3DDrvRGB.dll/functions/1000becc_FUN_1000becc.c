/*
 * FUN_1000becc at 1000becc
 * undefined __cdecl FUN_1000becc(UINT param_1, int param_2, int param_3)
 * Address ranges: 1000becc-1000bf6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000becc(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000bf71();
  if (DAT_100ec208 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_100ec204 = 1;
  DAT_100ec200 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_100ec810 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_100ec80c - 4), DAT_100ec810 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_100ec810 <= puVar1);
    }
    FUN_1000bf83((undefined4 *)&DAT_10015030,(undefined4 *)&DAT_10015038);
  }
  FUN_1000bf83((undefined4 *)&DAT_1001503c,(undefined4 *)&DAT_10015044);
  if (param_3 == 0) {
    DAT_100ec208 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000bf7a();
  return;
}

