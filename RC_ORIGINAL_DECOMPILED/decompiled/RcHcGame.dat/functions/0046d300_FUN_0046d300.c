/*
 * FUN_0046d300 at 0046d300
 * undefined FUN_0046d300(void)
 * Address ranges: 0046d300-0046d3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046d300(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00627f70;
  local_c = ExceptionList;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  if ((param_3 != 0) && (iVar3 = *(int *)(param_1 + 0xf8), ExceptionList = &local_c, iVar3 != 0)) {
    ExceptionList = &local_c;
    *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    FUN_00421430();
    cVar2 = FUN_004fbca0();
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0xf8) != 0) {
        piVar1 = (int *)(*(int *)(param_1 + 0xf8) + 0x14);
        *piVar1 = *piVar1 + 1;
      }
      local_4._0_1_ = 1;
      FUN_00421430();
      FUN_004fb310();
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_2 != 0) &&
     (iVar3 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

