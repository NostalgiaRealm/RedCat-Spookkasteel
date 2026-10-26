/*
 * FUN_004015a1 at 004015a1
 * undefined __cdecl FUN_004015a1(UINT param_1, int param_2, int param_3)
 * Address ranges: 004015a1-00401639
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004015a1(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_00407fac == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_00407fa8 = 1;
  DAT_00407fa4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_00409494 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_00409490 - 4), DAT_00409494 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_00409494 <= puVar1);
    }
    FUN_0040163a((undefined4 *)&DAT_00407018,(undefined4 *)&DAT_00407020);
  }
  FUN_0040163a((undefined4 *)&DAT_00407024,(undefined4 *)&DAT_00407028);
  if (param_3 != 0) {
    return;
  }
  DAT_00407fac = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

