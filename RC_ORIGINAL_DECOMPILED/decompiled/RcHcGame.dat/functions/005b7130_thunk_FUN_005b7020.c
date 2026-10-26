/*
 * thunk_FUN_005b7020 at 005b7130
 * undefined thunk_FUN_005b7020(void)
 * Address ranges: 005b7130-005b7134
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_005b7020
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_005b7020(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  *(undefined4 *)(iVar4 + 100) = 0;
  if (*(int *)(iVar4 + 0x1c) != 0) {
    FUN_005cf400(*(int *)(iVar4 + 0x1c));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar4 + 0x1c) = 0;
  }
  if (*(int *)(iVar4 + 0x24) != 0) {
    FUN_005cf400(*(int *)(iVar4 + 0x24));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
  }
  if (*(int *)(iVar4 + 0x30) != 0) {
    FUN_005c8f80();
    *(undefined4 *)(iVar4 + 0x30) = 0;
  }
  if (*(int *)(iVar4 + 0x2c) != 0) {
    FUN_005cf400(*(int *)(iVar4 + 0x2c));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar4 + 0x2c) = 0;
  }
  if (*(int *)(iVar4 + 0x38) != 0) {
    iVar1 = 0;
    if (0 < *(short *)(iVar4 + 0x34)) {
      iVar3 = 0;
      do {
        if (1 < *(uint *)(iVar3 + *(int *)(iVar4 + 0x38))) {
          FUN_005c02b0();
        }
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar3 + *(int *)(iVar4 + 0x38)) = 0;
        iVar3 = iVar3 + 0x10;
      } while (iVar1 < *(short *)(iVar4 + 0x34));
    }
    FUN_005cf400(*(undefined4 *)(iVar4 + 0x38));
    _DAT_007203c0 = 0;
    *(undefined4 *)(iVar4 + 0x38) = 0;
  }
  if (*(int *)(iVar4 + 0x3c) != 0) {
    FUN_005c8f80();
    *(undefined4 *)(iVar4 + 0x3c) = 0;
  }
  piVar2 = (int *)(iVar4 + 0x48);
  iVar4 = 4;
  do {
    if (*piVar2 != 0) {
      FUN_005cf400(*piVar2);
      _DAT_007203c0 = 0;
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  return;
}

