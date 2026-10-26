/*
 * FUN_00543f60 at 00543f60
 * undefined FUN_00543f60(void)
 * Address ranges: 00543f60-005440f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00543f60(undefined1 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar6;
  char local_29;
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063ccf0;
  local_c = ExceptionList;
  local_4 = 0;
  local_29 = '\0';
  ExceptionList = &local_c;
  FUN_0040cc00(&param_1,0,0xffffffff);
  FUN_00543870(local_1c);
  local_4._0_1_ = 1;
  local_28 = 0;
  while( true ) {
    cVar1 = local_29;
    if (local_18 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_14 - local_18 >> 4;
    }
    if (iVar3 <= local_28) break;
    iVar3 = FUN_00548f50();
    if (*(int *)(iVar3 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 2;
    }
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    pvVar5 = operator_new(iVar4 << 2);
    iVar4 = *(int *)(iVar3 + 8);
    for (iVar3 = *(int *)(iVar3 + 4); iVar3 != iVar4; iVar3 = iVar3 + 4) {
      FUN_005f0760(pvVar5,iVar3);
      pvVar5 = (void *)((int)pvVar5 + 4);
    }
    cVar2 = FUN_005448b0();
    if ((cVar2 != '\0') || (local_29 = '\0', cVar1 != '\0')) {
      local_29 = '\x01';
    }
    local_28 = local_28 + 1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  for (iVar3 = local_18; iVar3 != local_14; iVar3 = iVar3 + 0x10) {
    FUN_005497f0();
  }
  FUN_005fe5f0();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  uVar6 = extraout_var;
  if (param_2 != 0) {
    cVar1 = *(char *)(param_2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
      uVar6 = extraout_var_00;
    }
    else {
      *(char *)(param_2 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar6,local_29);
}

