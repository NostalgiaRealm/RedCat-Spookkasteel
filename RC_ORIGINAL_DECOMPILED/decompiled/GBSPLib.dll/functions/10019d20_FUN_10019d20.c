/*
 * FUN_10019d20 at 10019d20
 * undefined FUN_10019d20(void)
 * Address ranges: 10019d20-10019d86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10019d20(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      return 0;
    }
    iVar2 = piVar1[1];
    piVar1[1] = iVar2 + -1;
    if (iVar2 + -1 < 1) {
      if (piVar1[7] != 0) {
        FUN_10014360(piVar1[7]);
        piVar1[7] = 0;
        _DAT_1003fde8 = 0;
      }
      if (piVar1[9] != 0) {
        (**(code **)(piVar1[8] + 0x38))();
        piVar1[9] = 0;
      }
      FUN_10014360(piVar1);
      _DAT_1003fde8 = 0;
    }
  }
  *param_1 = 0;
  return 1;
}

