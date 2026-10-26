/*
 * FUN_00469ec0 at 00469ec0
 * undefined FUN_00469ec0(void)
 * Address ranges: 00469ec0-00469fa6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00469ec0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00627b60;
  local_c = ExceptionList;
  local_4._1_3_ = 0;
  piVar4 = (int *)(param_1 + 0xafc);
  iVar5 = 5;
  ExceptionList = &local_c;
  do {
    if ((param_3 != 0) && (iVar2 = *piVar4, iVar2 != 0)) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      local_4._0_1_ = 1;
      FUN_00421430();
      cVar3 = FUN_004fbca0();
      if (cVar3 == '\0') {
        if (*piVar4 != 0) {
          piVar1 = (int *)(*piVar4 + 0x14);
          *piVar1 = *piVar1 + 1;
        }
        local_4._0_1_ = 1;
        FUN_00421430();
        FUN_004fb310();
      }
    }
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_2 != 0) &&
     (iVar5 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar5 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

