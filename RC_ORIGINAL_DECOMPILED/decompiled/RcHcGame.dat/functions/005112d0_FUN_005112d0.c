/*
 * FUN_005112d0 at 005112d0
 * undefined FUN_005112d0(void)
 * Address ranges: 005112d0-0051131b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005112d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  for (piVar2 = *(int **)(param_1 + 4); piVar2 != piVar1; piVar2 = piVar2 + 9) {
    if (*piVar2 != 0) {
      FUN_004098d0();
      *piVar2 = 0;
    }
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

