/*
 * FUN_005e8360 at 005e8360
 * undefined FUN_005e8360(void)
 * Address ranges: 005e8360-005e874e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e8360(undefined4 *param_1,facet *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,char *param_6,int param_7,size_t param_8)

{
  void **ppvVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  facet *pfVar9;
  undefined1 *puVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  facet *pfVar14;
  size_t _MaxCount;
  int local_28 [2];
  facet *local_20;
  undefined4 local_1c;
  facet *local_18;
  undefined4 local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646abe;
  pvStack_c = ExceptionList;
  uVar4 = *(uint *)(param_4 + 0x14);
  if (((int)uVar4 < 1) || (uVar4 <= param_7 + param_8)) {
    local_28[0] = 0;
  }
  else {
    local_28[0] = (uVar4 - param_7) - param_8;
  }
  iVar12 = local_28[0];
  uVar4 = *(uint *)(param_4 + 0xc) & 0x1c0;
  pfVar14 = param_2;
  ppvVar1 = &pvStack_c;
  if (uVar4 != 0x40) {
    ppvVar1 = &pvStack_c;
    local_20 = param_2;
    if (uVar4 == 0x100) {
      ppvVar1 = &pvStack_c;
      if ((param_8 != 0) &&
         ((cVar2 = *param_6, cVar2 == '+' || (ppvVar1 = &pvStack_c, cVar2 == '-')))) {
        local_1c = param_3;
        ExceptionList = &pvStack_c;
        FUN_005e8c30(cVar2);
        param_6 = param_6 + 1;
        param_8 = param_8 - 1;
        param_3 = local_1c;
        ppvVar1 = ExceptionList;
      }
      for (; ExceptionList = ppvVar1, local_1c = param_3, iVar12 != 0; iVar12 = iVar12 + -1) {
        FUN_005e8c30(param_5);
        param_3 = local_1c;
        ppvVar1 = ExceptionList;
      }
      local_28[0] = 0;
      pfVar14 = local_20;
      ppvVar1 = ExceptionList;
    }
    else {
      for (; ExceptionList = ppvVar1, local_1c = param_3, iVar12 != 0; iVar12 = iVar12 + -1) {
        FUN_005e8c30(param_5);
        ppvVar1 = ExceptionList;
        param_3 = local_1c;
      }
      local_28[0] = 0;
      pfVar14 = local_20;
      ppvVar1 = ExceptionList;
    }
  }
  ExceptionList = ppvVar1;
  _MaxCount = param_8;
  puVar5 = (undefined4 *)FUN_0060e6d3();
  pvVar6 = _memchr(param_6,(int)*(char *)*puVar5,_MaxCount);
  if (pvVar6 != (void *)0x0) {
    FUN_005e7380(&local_20);
    local_4 = 1;
    uVar7 = FUN_005e7360();
    param_2 = (facet *)FUN_005feb94(uVar7,1);
    if (param_2 == (facet *)0x0) {
      cVar2 = FUN_005febd3();
      if (cVar2 == '\0') {
        FUN_005e59a0(s_missing_locale_facet_006b0ef4);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_18,&DAT_00685cd8);
      }
      param_2 = (facet *)DAT_0070fafc;
      if (DAT_0070fafc == (int *)0x0) {
        pvVar8 = operator_new(0x18);
        local_4._0_1_ = 2;
        if (pvVar8 == (void *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_005e8cb0(0);
        }
        local_4 = CONCAT31(local_4._1_3_,1);
        DAT_0070fafc = (int *)FUN_005e9110(uVar7);
        param_2 = (facet *)DAT_0070fafc;
      }
    }
    local_4 = 0xffffffff;
    if ((local_20 != (facet *)0x0) &&
       (pfVar9 = std::locale::facet::_Decref(local_20), pfVar9 != (facet *)0x0)) {
      (*(code *)**(undefined4 **)pfVar9)(1);
    }
    iVar12 = (int)pvVar6 - (int)param_6;
    iVar13 = iVar12 + 1;
    pcVar11 = param_6;
    local_18 = pfVar14;
    local_14 = param_3;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_005e8c30(*pcVar11);
      pcVar11 = pcVar11 + 1;
    }
    uVar3 = (**(code **)(*(int *)param_2 + 4))();
    param_3 = local_14;
    pfVar14 = local_18;
    FUN_005e8c30(uVar3);
    param_6 = param_6 + iVar13;
    param_8 = param_8 - iVar13;
  }
  pvVar6 = _memchr(param_6,0x65,param_8);
  if (pvVar6 != (void *)0x0) {
    iVar12 = (int)pvVar6 - (int)param_6;
    iVar13 = iVar12 + 1;
    pcVar11 = param_6;
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_005e8c30(*pcVar11);
      pcVar11 = pcVar11 + 1;
    }
    for (; local_18 = pfVar14, local_14 = param_3, param_7 != 0; param_7 = param_7 + -1) {
      FUN_005e8c30(0x30);
      pfVar14 = local_18;
      param_3 = local_14;
    }
    param_7 = 0;
    puVar10 = &DAT_006a161c;
    if ((*(byte *)(param_4 + 0xc) & 4) == 0) {
      puVar10 = &DAT_006b0fac;
    }
    FUN_005e8c30(CONCAT31((int3)((uint)puVar10 >> 8),*puVar10));
    param_6 = param_6 + iVar13;
    param_8 = param_8 - iVar13;
  }
  for (; param_8 != 0; param_8 = param_8 - 1) {
    FUN_005e8c30(*param_6);
    param_6 = param_6 + 1;
  }
  for (; local_14 = param_3, local_18 = pfVar14, param_7 != 0; param_7 = param_7 + -1) {
    FUN_005e8c30(0x30);
    pfVar14 = local_18;
    param_3 = local_14;
  }
  *(undefined4 *)(param_4 + 0x14) = 0;
  puVar5 = (undefined4 *)FUN_005e8b70(local_28,local_18,local_14,param_5,local_28[0]);
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  ExceptionList = pvStack_c;
  return;
}

