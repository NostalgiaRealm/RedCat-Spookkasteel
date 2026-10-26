/*
 * FUN_005b3d60 at 005b3d60
 * undefined FUN_005b3d60(void)
 * Address ranges: 005b3d60-005b3e04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005b3d60(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_1;
  iVar3 = 0;
  if (piVar2[4] < 1) {
    if (*piVar2 != 0) {
      thunk_FUN_005b7020();
      *piVar2 = 0;
    }
    if (piVar2[3] != 0) {
      if (0 < piVar2[2]) {
        do {
          iVar1 = iVar3 * 4;
          FUN_005bd500();
          iVar3 = iVar3 + 1;
          *(undefined4 *)(piVar2[3] + iVar1) = 0;
        } while (iVar3 < piVar2[2]);
      }
      FUN_005cf400(piVar2[3]);
      _DAT_007203c0 = 0;
      piVar2[3] = 0;
    }
    piVar2[2] = 0;
    FUN_005cf400(*param_1);
    _DAT_007203c0 = 0;
    *param_1 = 0;
    DAT_006caddc = DAT_006caddc + -1;
    return 1;
  }
  piVar2[4] = piVar2[4] + -1;
  DAT_006cade0 = DAT_006cade0 + -1;
  return 0;
}

