/*
 * FUN_00487dc0 at 00487dc0
 * undefined FUN_00487dc0(void)
 * Address ranges: 00487dc0-00487ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00487dc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int local_20;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_1;
  puStack_8 = &LAB_0062a0b0;
  local_c = ExceptionList;
  local_20 = *param_1;
  if (local_20 != 0) {
    local_10 = (undefined1 *)&local_20;
    ExceptionList = &local_c;
    *(int *)(local_20 + 0x14) = *(int *)(local_20 + 0x14) + 1;
    local_4 = 0;
    FUN_0052b470(&param_1);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_00421430();
    cVar3 = FUN_004fbca0();
    local_4 = 0xffffffff;
    if ((param_1 != (int *)0x0) && (iVar1 = param_1[5], param_1[5] = iVar1 + -1, iVar1 + -1 == 0)) {
      local_20 = 0;
      FUN_005abfc0();
    }
    if (cVar3 == '\0') {
      local_20 = *piVar2;
      param_1 = &local_20;
      if (local_20 != 0) {
        *(int *)(local_20 + 0x14) = *(int *)(local_20 + 0x14) + 1;
      }
      local_4 = 3;
      FUN_0052b470(&local_10);
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_00421430();
      FUN_004fb310();
      local_4 = 0xffffffff;
      if ((local_10 != (undefined1 *)0x0) &&
         (iVar1 = *(int *)(local_10 + 0x14), *(int *)(local_10 + 0x14) = iVar1 + -1, iVar1 + -1 == 0
         )) {
        local_20 = 0;
        FUN_005abfc0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

