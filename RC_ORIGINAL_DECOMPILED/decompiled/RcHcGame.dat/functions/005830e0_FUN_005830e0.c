/*
 * FUN_005830e0 at 005830e0
 * undefined FUN_005830e0(void)
 * Address ranges: 005830e0-005831bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005830e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_006426e8;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *(int *)(param_1 + 0x17c)) {
    piVar2 = (int *)(param_1 + 0xfc);
    ExceptionList = &local_c;
    do {
      if (*piVar2 != 0) {
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        }
        local_4._0_1_ = 2;
        FUN_00449760(&param_2);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00582fe0();
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x17c));
  }
  local_4 = local_4 & 0xffffff00;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x14) + -1;
    *(int *)(param_2 + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_005abfc0();
    }
    param_2 = 0;
  }
  local_4 = 0xffffffff;
  if ((iVar1 != 0) &&
     (iVar3 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

