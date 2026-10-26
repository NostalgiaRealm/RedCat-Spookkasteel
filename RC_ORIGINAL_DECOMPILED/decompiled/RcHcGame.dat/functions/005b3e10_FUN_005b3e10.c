/*
 * FUN_005b3e10 at 005b3e10
 * undefined FUN_005b3e10(void)
 * Address ranges: 005b3e10-005b3eaa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005b3e10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (0 < *piVar1) {
    *piVar1 = *piVar1 + -1;
    DAT_006cadd8 = DAT_006cadd8 + -1;
    return;
  }
  FUN_005b3d60();
  if (piVar1[1] != 0) {
    FUN_005cd7b0();
    piVar1[1] = 0;
  }
  if (piVar1[2] != 0) {
    FUN_005cf750();
    piVar1[2] = 0;
  }
  if (piVar1[5] != 0) {
    FUN_005bd500();
    piVar1[5] = 0;
  }
  FUN_005cf400(*param_1);
  *param_1 = 0;
  DAT_006cadd4 = DAT_006cadd4 + -1;
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

