/*
 * FUN_10002840 at 10002840
 * undefined FUN_10002840(void)
 * Address ranges: 10002840-1000287d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002840(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 == 0) {
    piVar2 = piVar1 + 1;
    FUN_100024f0(piVar2);
  }
  else {
    piVar2 = piVar1 + 2;
    FUN_100012f0(piVar2);
  }
  *piVar2 = 0;
  FUN_10018dc8(piVar1);
  *param_1 = 0;
  return;
}

