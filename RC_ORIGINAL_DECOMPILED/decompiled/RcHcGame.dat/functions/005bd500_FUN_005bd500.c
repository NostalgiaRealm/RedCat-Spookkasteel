/*
 * FUN_005bd500 at 005bd500
 * undefined FUN_005bd500(void)
 * Address ranges: 005bd500-005bd624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005bd500(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (0 < piVar1[1]) {
    piVar1[1] = piVar1[1] + -1;
    return;
  }
  if (*piVar1 != 0) {
    FUN_005cf400(*piVar1);
    _DAT_007203c0 = 0;
    *piVar1 = 0;
  }
  if (piVar1[3] == 1) {
    iVar2 = 0;
    if (0 < piVar1[4]) {
      iVar3 = 0;
      do {
        FUN_005bd500();
        *(undefined4 *)(piVar1[6] + 0x40 + iVar3) = 0;
        if (*(int *)(piVar1[6] + 8 + iVar3) != 0) {
          FUN_005c54f0();
          *(undefined4 *)(piVar1[6] + 8 + iVar3) = 0;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar2 < piVar1[4]);
    }
    if (piVar1[6] != 0) {
      FUN_005cf400(piVar1[6]);
      _DAT_007203c0 = 0;
      piVar1[6] = 0;
    }
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  else if (piVar1[3] == 2) {
    if (piVar1[2] == 1) {
      FUN_005bd490();
    }
    iVar2 = 0;
    if (0 < piVar1[4]) {
      do {
        iVar3 = iVar2 * 4;
        FUN_005c54f0();
        iVar2 = iVar2 + 1;
        *(undefined4 *)(piVar1[8] + iVar3) = 0;
      } while (iVar2 < piVar1[4]);
    }
    if (piVar1[8] != 0) {
      FUN_005cf400(piVar1[8]);
      _DAT_007203c0 = 0;
      piVar1[8] = 0;
    }
    piVar1[4] = 0;
    if (piVar1[6] != 0) {
      FUN_005d6ef0();
    }
  }
  piVar1[3] = 0;
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

