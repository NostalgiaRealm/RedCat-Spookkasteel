/*
 * FUN_005e8750 at 005e8750
 * undefined FUN_005e8750(void)
 * Address ranges: 005e8750-005e8b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_005e8750(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            char *param_6,uint param_7)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  facet *pfVar7;
  int iVar8;
  undefined3 uVar10;
  undefined3 extraout_var;
  int iVar9;
  char *pcVar11;
  uint uVar12;
  int local_3c;
  int local_34;
  facet *local_2c;
  undefined4 local_28 [3];
  undefined1 local_1c [4];
  char *pcStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646af3;
  pvStack_c = ExceptionList;
  cVar2 = *param_6;
  if ((cVar2 == '+') || (cVar2 == '-')) {
    local_3c = 1;
  }
  else if ((cVar2 == '0') && ((param_6[1] == 'x' || (param_6[1] == 'X')))) {
    local_3c = 2;
  }
  else {
    local_3c = 0;
  }
  ExceptionList = &pvStack_c;
  FUN_005e7380(&local_2c);
  local_4 = 1;
  uVar4 = FUN_005e7360();
  piVar5 = (int *)FUN_005feb94(uVar4,1);
  if (piVar5 == (int *)0x0) {
    cVar2 = FUN_005febd3();
    if (cVar2 == '\0') {
      FUN_005e59a0(s_missing_locale_facet_006b0ef4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00685cd8);
    }
    piVar5 = DAT_0070fafc;
    if (DAT_0070fafc == (int *)0x0) {
      pvVar6 = operator_new(0x18);
      local_4._0_1_ = 2;
      if (pvVar6 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_005e8cb0(0);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar5 = (int *)FUN_005e9110(uVar4);
      DAT_0070fafc = piVar5;
    }
  }
  local_4 = 0xffffffff;
  if ((local_2c != (facet *)0x0) &&
     (pfVar7 = std::locale::facet::_Decref(local_2c), pfVar7 != (facet *)0x0)) {
    (*(code *)**(undefined4 **)pfVar7)(1);
  }
  FUN_005e8c90(local_1c);
  local_4 = 3;
  uVar3 = (**(code **)(*piVar5 + 8))();
  local_2c = (facet *)CONCAT31(local_2c._1_3_,uVar3);
  pcVar11 = "";
  if (pcStack_18 != (char *)0x0) {
    pcVar11 = pcStack_18;
  }
  bVar1 = false;
  if ('\0' < *pcVar11) {
    pcVar11 = pcStack_18;
    if (pcStack_18 == (char *)0x0) {
      pcVar11 = "";
    }
    bVar1 = false;
    cVar2 = *pcVar11;
    uVar12 = param_7;
    while (((cVar2 != '\x7f' && ('\0' < cVar2)) && ((uint)(int)cVar2 < uVar12 - local_3c))) {
      uVar12 = uVar12 - (int)cVar2;
      FUN_0060ab50(param_6 + uVar12 + 1,param_6 + uVar12,(param_7 - uVar12) + 1);
      param_6[uVar12] = ',';
      param_7 = param_7 + 1;
      if ('\0' < pcVar11[1]) {
        pcVar11 = pcVar11 + 1;
      }
      bVar1 = true;
      cVar2 = *pcVar11;
    }
  }
  uVar12 = *(uint *)(param_4 + 0x14);
  if (((int)uVar12 < 1) || (uVar12 <= param_7)) {
    iVar8 = 0;
  }
  else {
    iVar8 = uVar12 - param_7;
  }
  uVar12 = *(uint *)(param_4 + 0xc) & 0x1c0;
  local_34 = iVar8;
  if (uVar12 != 0x40) {
    if (uVar12 == 0x100) {
      local_28[0] = param_2;
      if (local_3c != 0) {
        param_2 = local_3c;
        pcVar11 = param_6;
        do {
          local_34 = CONCAT31(local_34._1_3_,*pcVar11);
          if ((param_3 == 0) || (iVar9 = FUN_005e7e10(local_34), iVar9 == -1)) {
            local_28[0] = CONCAT31(local_28[0]._1_3_,1);
          }
          pcVar11 = pcVar11 + 1;
          param_2 = param_2 + -1;
          uVar12 = 0;
        } while (param_2 != 0);
      }
      param_2 = local_28[0];
      param_6 = param_6 + local_3c;
      param_7 = param_7 - local_3c;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        uVar12 = FUN_005e8c30(param_5);
      }
      local_34 = 0;
    }
    else {
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        if ((param_3 == 0) ||
           (uVar12 = FUN_005e7e10(param_5), local_34 = param_2, uVar12 == 0xffffffff)) {
          local_34._1_3_ = (undefined3)((uint)param_2 >> 8);
          local_34 = CONCAT31(local_34._1_3_,1);
        }
        param_2 = local_34;
      }
      local_34 = 0;
    }
  }
  uVar10 = (undefined3)(uVar12 >> 8);
  if (bVar1) {
    while( true ) {
      iVar9 = FUN_0060e6e0(param_6,&DAT_006b0fb0);
      pcVar11 = param_6;
      for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
        FUN_005e8c30(*pcVar11);
        pcVar11 = pcVar11 + 1;
      }
      if (param_7 - iVar9 == 0) break;
      if ((char)local_2c != '\0') {
        FUN_005e8c30(local_2c);
      }
      param_6 = param_6 + iVar9 + 1;
      param_7 = (param_7 - iVar9) - 1;
    }
  }
  else {
    for (; param_7 != 0; param_7 = param_7 - 1) {
      FUN_005e8c30(CONCAT31(uVar10,*param_6));
      param_6 = param_6 + 1;
      uVar10 = extraout_var;
    }
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  for (; local_34 != 0; local_34 = local_34 + -1) {
    if ((param_3 == 0) || (iVar8 = FUN_005e7e10(param_5), iVar8 == -1)) {
      uVar12 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar12,1);
    }
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  if (pcStack_18 != (char *)0x0) {
    cVar2 = pcStack_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_18 + -1);
    }
    else {
      pcStack_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

