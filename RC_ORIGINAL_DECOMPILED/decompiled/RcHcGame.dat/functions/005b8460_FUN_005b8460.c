/*
 * FUN_005b8460 at 005b8460
 * undefined FUN_005b8460(void)
 * Address ranges: 005b8460-005b860c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b8460(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = *(int *)(param_1 + 0xc50) + -1;
  *(int *)(param_1 + 0xc50) = iVar2;
  if (iVar2 < 1) {
    if (*(int *)(param_1 + 0x18) != 0) {
      if (0 < *(int *)(param_1 + 0x3b8)) {
        iVar2 = 0;
        if (0 < *(int *)(param_1 + 0x3b8)) {
          do {
            FUN_005b3e10();
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(param_1 + 0x3b8));
        }
        *(undefined4 *)(param_1 + 0x3b8) = 0;
      }
      if (*(int *)(param_1 + 0x3bc) != 0) {
        FUN_005cf400(*(int *)(param_1 + 0x3bc));
        _DAT_007203c0 = 0;
        *(undefined4 *)(param_1 + 0x3bc) = 0;
      }
      FUN_005d1f90(param_1);
      FUN_005cc1f0(param_1);
      FUN_005d5430(param_1);
      FUN_005d4820(param_1);
      FUN_005b60c0(param_1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x1c8);
      if (iVar2 != 0) {
        FUN_005d4070(iVar2);
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c8) = 0;
      }
      iVar2 = *(int *)(param_1 + 0xbe4);
      while (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0x38);
        iVar1 = FUN_005b7c80(iVar2);
        if (iVar1 != 0) {
          FUN_005cf400(iVar1);
          _DAT_007203c0 = 0;
        }
        FUN_005b7c60(iVar2,0);
        FUN_005b7bb0(iVar2);
        iVar2 = iVar3;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0xd5cc);
      if (iVar2 != 0) {
        iVar3 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x174)) {
          piVar4 = (int *)(iVar2 + 8);
          do {
            if (*piVar4 != 0) {
              FUN_005b6280(param_1,*piVar4);
              *piVar4 = 0;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 3;
          } while (iVar3 < *(int *)(*(int *)(param_1 + 0x18) + 0x174));
        }
        FUN_005cf400(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd5cc));
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd5cc) = 0;
        _DAT_007203c0 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd5cc);
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xd5cc) = 0;
      }
      FUN_005d67d0(*(int *)(param_1 + 0x18) + 200);
      FUN_005cf400(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = 0;
      _DAT_007203c0 = 0;
      FUN_005ba530(param_1);
    }
    FUN_005cf400(param_1);
    _DAT_007203c0 = 0;
    FUN_005d5d30();
  }
  return;
}

