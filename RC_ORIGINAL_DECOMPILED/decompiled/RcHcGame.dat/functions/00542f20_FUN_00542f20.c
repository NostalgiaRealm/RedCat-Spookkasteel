/*
 * FUN_00542f20 at 00542f20
 * undefined FUN_00542f20(void)
 * Address ranges: 00542f20-005431df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00542f20(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_stack_00000028;
  int in_stack_0000002c;
  int local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063cb10;
  local_c = ExceptionList;
  local_4 = 0;
  local_38 = 0;
  ExceptionList = &local_c;
  do {
    if (in_stack_00000028 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = in_stack_0000002c - in_stack_00000028 >> 3;
    }
    if (iVar2 <= local_38) {
      local_4 = 7;
      FUN_00514430();
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_00548ca0();
      FUN_005fe5f0();
      local_4 = 0xffffffff;
      FUN_004040a0();
      ExceptionList = local_c;
      return 0;
    }
    if ((local_38 < 0) || (iVar2 = FUN_00548d10(), iVar2 <= local_38)) {
      FUN_004040a0();
      iVar2 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 1;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
    if ((local_38 < 0) || (iVar2 = FUN_00548d10(), iVar2 <= local_38)) {
      FUN_004040a0();
      iVar2 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0();
      (*pcVar3)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0();
    }
    FUN_005494c0();
    FUN_00548f50();
    FUN_00548a70();
    local_4._0_1_ = 3;
    uVar4 = FUN_00549060();
    FUN_00548a70(uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    cVar1 = FUN_00542ca0();
    if (cVar1 != '\0') {
      FUN_005494c0();
      FUN_00548f50();
      FUN_00548a70();
      cVar1 = FUN_00544440();
      if (cVar1 != '\0') {
        local_4 = 5;
        FUN_00514430();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_00548ca0();
        FUN_005fe5f0();
        if (param_2 != 0) {
          cVar1 = *(char *)(param_2 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)(param_2 + -1) = cVar1 + -1;
            ExceptionList = local_c;
            return 1;
          }
          FUN_005fe5f0();
        }
        ExceptionList = local_c;
        return 1;
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}

