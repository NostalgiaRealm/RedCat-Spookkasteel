/*
 * FUN_005a05c0 at 005a05c0
 * undefined FUN_005a05c0(void)
 * Address ranges: 005a05c0-005a06fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005a05c0(void)

{
  char cVar1;
  int iVar2;
  undefined1 in_stack_00000010;
  undefined1 local_54 [16];
  undefined **local_44;
  int local_40;
  undefined1 local_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644d50;
  pvStack_c = ExceptionList;
  local_54[0] = in_stack_00000010;
  ExceptionList = &pvStack_c;
  FUN_004040a0();
  local_4 = 0;
  FUN_005ae390(&local_44,s_DaviAssertion_fails___s___d____s_006a77a0);
  local_4._0_1_ = 1;
  FUN_0040cc00();
  local_4._0_1_ = 0;
  if (local_40 != 0) {
    cVar1 = *(char *)(local_40 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_40 + -1) = cVar1 + -1;
    }
  }
  FUN_005aff20();
  FUN_0040cc00(local_54,0,0xffffffff);
  iVar2 = FUN_004bf8f0();
  local_4._0_1_ = 2;
  FUN_0060b3a2();
  local_38 = *(undefined1 *)(iVar2 + 0xc);
  local_4._0_1_ = 3;
  FUN_004040a0();
  FUN_0040cc00();
  local_44 = &PTR_FUN_0064ee2c;
  local_4 = CONCAT31(local_4._1_3_,2);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8();
}

