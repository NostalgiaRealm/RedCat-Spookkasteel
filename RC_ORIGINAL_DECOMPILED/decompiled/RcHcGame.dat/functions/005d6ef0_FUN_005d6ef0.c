/*
 * FUN_005d6ef0 at 005d6ef0
 * undefined FUN_005d6ef0(void)
 * Address ranges: 005d6ef0-005d6f40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005d6ef0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1[2] != 0) {
    FUN_005cf400(piVar1[2]);
    piVar1[2] = 0;
    _DAT_007203c0 = 0;
  }
  if (*piVar1 != 0) {
    FUN_005c8f80();
  }
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

