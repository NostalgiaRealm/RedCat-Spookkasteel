/*
 * FUN_005cd7b0 at 005cd7b0
 * undefined FUN_005cd7b0(void)
 * Address ranges: 005cd7b0-005cd8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005cd7b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  if (*(int *)(*param_1 + 4) != 0) {
    FUN_005dfe70();
    *(undefined4 *)(*param_1 + 4) = 0;
  }
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0xc) != 0) {
    local_4 = 0;
    if (0 < *(int *)(iVar1 + 8)) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(iVar1 + 0xc) + iVar2;
        if (*(int *)(iVar3 + 0xc) != 0) {
          FUN_005ba5d0(*(undefined4 *)(iVar1 + 0x60),*(undefined4 *)(iVar3 + 0x10));
          FUN_005c02b0();
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
        iVar1 = *param_1;
        local_4 = local_4 + 1;
        iVar2 = iVar2 + 0x1c;
      } while (local_4 < *(int *)(iVar1 + 8));
    }
    FUN_005cf400(*(undefined4 *)(*param_1 + 0xc));
    *(undefined4 *)(*param_1 + 0xc) = 0;
    _DAT_007203c0 = *(undefined4 *)(*param_1 + 0xc);
    *(undefined4 *)(*param_1 + 4) = 0;
  }
  if (*(int *)(*param_1 + 0x50) != 0) {
    FUN_005c02b0();
    *(undefined4 *)(*param_1 + 0x50) = 0;
  }
  FUN_005cf400(*param_1);
  _DAT_007203c0 = 0;
  *param_1 = 0;
  DAT_006cc5e8 = DAT_006cc5e8 + -1;
  if (DAT_006cc5e8 == 0) {
    if (DAT_006cc5e0 != 0) {
      FUN_005cf400(DAT_006cc5e0);
      _DAT_007203c0 = 0;
    }
    DAT_006cc5e0 = 0;
    DAT_006cc5e4 = 0;
  }
  return;
}

