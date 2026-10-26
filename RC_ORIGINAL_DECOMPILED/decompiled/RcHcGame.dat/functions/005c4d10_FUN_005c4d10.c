/*
 * FUN_005c4d10 at 005c4d10
 * undefined FUN_005c4d10(void)
 * Address ranges: 005c4d10-005c4d76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005c4d10(int *param_1)

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
        FUN_005cf400(piVar1[7]);
        piVar1[7] = 0;
        _DAT_007203c0 = 0;
      }
      if (piVar1[9] != 0) {
        (**(code **)(piVar1[8] + 0x38))();
        piVar1[9] = 0;
      }
      FUN_005cf400(piVar1);
      _DAT_007203c0 = 0;
    }
  }
  *param_1 = 0;
  return 1;
}

