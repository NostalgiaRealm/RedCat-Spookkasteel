/*
 * FUN_0042c680 at 0042c680
 * undefined FUN_0042c680(void)
 * Address ranges: 0042c680-0042c8e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0042c680(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iStack_114;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined1 local_d6;
  int local_d0;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623367;
  local_c = ExceptionList;
  local_f4 = (undefined1 *)&iStack_114;
  ExceptionList = &local_c;
  iStack_114 = param_1;
  FUN_004042e0(&iStack_114);
  FUN_00565c30();
  iStack_114 = param_2;
  local_4 = 0;
  local_dc = 1;
  local_db = 1;
  local_da = 1;
  local_d9 = 0;
  local_d8 = 1;
  local_d7 = 0;
  local_d6 = 0;
  FUN_005663d0();
  piVar5 = (int *)**(int **)(param_1 + 0x18);
  if (piVar5 != *(int **)(param_1 + 0x18)) {
    do {
      iStack_114 = piVar5[2];
      FUN_005663d0();
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x18));
  }
  iStack_114 = param_2;
  puVar2 = (undefined4 *)FUN_0042c620(local_18);
  local_100 = *puVar2;
  local_fc = puVar2[1];
  iStack_114 = param_4;
  local_f8 = puVar2[2];
  cVar1 = FUN_00565e10(&local_100);
  if (cVar1 == '\0') {
LAB_0042c80c:
    iStack_114 = local_20;
    local_4 = 3;
    FUN_00587d50(local_24);
    iStack_114 = local_24;
    FUN_005fe5f0();
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    iStack_114 = local_30;
    local_4._0_1_ = 2;
    FUN_00587d50(local_34);
    iStack_114 = local_34;
    FUN_005fe5f0();
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    iStack_114 = 0x42c8b2;
    FUN_0057d310();
    local_4 = 0xffffffff;
    iStack_114 = 0x42c8c6;
    FUN_005ab4d0();
    uVar4 = 1;
  }
  else {
    iStack_114 = 0x42c75e;
    iVar3 = FUN_00566370();
    if (iVar3 != 0) {
      iStack_114 = 0x42c76b;
      iVar3 = FUN_00566370();
      if (iVar3 == param_3) goto LAB_0042c80c;
    }
    iStack_114 = local_20;
    local_4 = 6;
    FUN_00587d50(local_24);
    iStack_114 = local_24;
    FUN_005fe5f0();
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_4._0_1_ = 5;
    iStack_114 = 0x42c7d8;
    FUN_00514430();
    local_4 = CONCAT31(local_4._1_3_,4);
    if (local_d0 != 0) {
      iStack_114 = 0x42c7ed;
      FUN_004098d0();
      local_d0 = 0;
    }
    local_4 = 0xffffffff;
    iStack_114 = 0x42c805;
    FUN_005ab4d0();
    uVar4 = 0;
  }
  ExceptionList = local_c;
  return uVar4;
}

