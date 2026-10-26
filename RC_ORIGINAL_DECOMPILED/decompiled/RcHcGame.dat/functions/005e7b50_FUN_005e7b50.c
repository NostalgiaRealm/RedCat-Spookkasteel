/*
 * FUN_005e7b50 at 005e7b50
 * undefined FUN_005e7b50(void)
 * Address ranges: 005e7b50-005e7e05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_005e7b50(undefined4 *param_1,void *param_2,int param_3,int param_4,undefined4 param_5,
            char param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  facet *pfVar5;
  int iVar6;
  undefined1 *puVar7;
  facet *local_30;
  void *local_2c;
  int iStack_28;
  char local_1c;
  undefined1 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646a93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005e7380(&local_30);
  local_4 = 1;
  uVar3 = FUN_005e7360();
  iVar4 = FUN_005feb94(uVar3,1);
  if (iVar4 == 0) {
    cVar2 = FUN_005febd3();
    if (cVar2 == '\0') {
      FUN_005e59a0(s_missing_locale_facet_006b0ef4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_2c,&DAT_00685cd8);
    }
    if (DAT_0070fafc == 0) {
      local_2c = operator_new(0x18);
      local_4._0_1_ = 2;
      if (local_2c == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005e8cb0(0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      DAT_0070fafc = FUN_005e9110(uVar3);
    }
  }
  local_4 = 0xffffffff;
  if ((local_30 != (facet *)0x0) &&
     (pfVar5 = std::locale::facet::_Decref(local_30), pfVar5 != (facet *)0x0)) {
    (*(code *)**(undefined4 **)pfVar5)(1);
  }
  local_1c = param_6;
  FUN_004040a0(0);
  local_4 = 3;
  if ((*(uint *)(param_4 + 0xc) & 0x4000) == 0) {
    if (-uStack_14 - 1 < 2) {
      FUN_005fe5fb();
    }
    iVar4 = uStack_14 + 1;
    cVar2 = FUN_00401940(iVar4,0);
    if (cVar2 != '\0') {
      puStack_18[uStack_14] = (param_6 != '\0') + '0';
      FUN_00404190(iVar4);
    }
  }
  else {
    if (param_6 == '\0') {
      uVar3 = FUN_005e8bf0(&local_2c);
      local_4._0_1_ = 5;
      FUN_0040cc00(uVar3,0,0xffffffff);
    }
    else {
      uVar3 = FUN_005e8c10(&local_2c);
      local_4._0_1_ = 4;
      FUN_0040cc00(uVar3,0,0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  uVar1 = *(uint *)(param_4 + 0x14);
  if (((int)uVar1 < 1) || (uVar1 <= uStack_14)) {
    iVar4 = 0;
  }
  else {
    iVar4 = uVar1 - uStack_14;
  }
  if ((*(uint *)(param_4 + 0xc) & 0x1c0) != 0x40) {
    for (; local_2c = param_2, iStack_28 = param_3, iVar4 != 0; iVar4 = iVar4 + -1) {
      FUN_005e8c30(param_5);
      param_2 = local_2c;
      param_3 = iStack_28;
    }
    iVar4 = 0;
  }
  uVar1 = uStack_14;
  puVar7 = puStack_18;
  if (puStack_18 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_005e8c30(*puVar7);
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  local_2c = param_2;
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if ((param_3 == 0) || (iVar6 = FUN_005e7e10(param_5), iVar6 == -1)) {
      local_2c = (void *)CONCAT31(local_2c._1_3_,1);
    }
  }
  *param_1 = local_2c;
  param_1[1] = param_3;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return param_1;
}

