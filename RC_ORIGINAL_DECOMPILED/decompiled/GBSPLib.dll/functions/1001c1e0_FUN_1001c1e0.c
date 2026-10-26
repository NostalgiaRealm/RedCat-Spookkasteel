/*
 * FUN_1001c1e0 at 1001c1e0
 * undefined FUN_1001c1e0(void)
 * Address ranges: 1001c1e0-1001c230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1001c1e0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1[2] != 0) {
    FUN_10014360(piVar1[2]);
    piVar1[2] = 0;
    _DAT_1003fde8 = 0;
  }
  if (*piVar1 != 0) {
    FUN_1001bb60();
  }
  FUN_10014360(*param_1);
  _DAT_1003fde8 = 0;
  *param_1 = 0;
  return;
}

