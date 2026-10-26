/*
 * FUN_00434900 at 00434900
 * undefined FUN_00434900(void)
 * Address ranges: 00434900-00434e1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00434900(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined1 *puStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  TypeDescriptor *pTStack_60;
  TypeDescriptor *pTStack_5c;
  undefined4 *local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [12];
  undefined1 auStack_10 [16];
  
  if ((DAT_006b52b0 & 1) == 0) {
    DAT_006b52b0 = DAT_006b52b0 | 1;
    local_58 = (undefined4 *)&DAT_00434e20;
    _DAT_006b52a0 = 0xffffffff;
    _DAT_006b52a4 = 0xffffffff;
    _DAT_006b52a8 = 0x3f800000;
    DAT_006b52ac = 1;
    pTStack_5c = (TypeDescriptor *)0x434945;
    FUN_0060a57b();
  }
  if ((*(int *)(param_1 + 0x35c) == 0) && (*(int *)(param_1 + 0x360) == 0)) {
    local_58 = (undefined4 *)0x434967;
    FUN_00471140();
    local_58 = (undefined4 *)0x0;
    pTStack_5c = (TypeDescriptor *)0x434973;
    FUN_00453ce0();
    if (DAT_006b5844 != '\0') {
      local_58 = (undefined4 *)0x434986;
      FUN_00458f90();
      DAT_006b5844 = '\0';
    }
    *(undefined1 *)(param_1 + 0x364) = 0;
  }
  if (*(char *)(param_1 + 0x364) == '\0') {
    local_58 = (undefined4 *)0x434ad2;
    fVar8 = (float10)FUN_004d6960();
    pTStack_5c = (TypeDescriptor *)local_1c;
    local_58 = (undefined4 *)(float)fVar8;
    pTStack_60 = (TypeDescriptor *)0x434ae0;
    puVar6 = (undefined4 *)FUN_005b16a0();
    local_40 = *puVar6;
    local_58 = (undefined4 *)0x0;
    local_3c = 0;
    local_38 = puVar6[2];
    pTStack_5c = (TypeDescriptor *)0x434b0b;
    FUN_00453ce0();
    if (DAT_006b5844 != '\0') {
      local_58 = (undefined4 *)0x434b1e;
      FUN_00458f90();
      DAT_006b5844 = '\0';
    }
  }
  else {
    if (*(int *)(param_1 + 0x35c) != 0) {
      local_58 = (undefined4 *)0x0;
      pTStack_5c = &CRcCursorActor::RTTI_Type_Descriptor;
      pTStack_60 = &CAdamActor::RTTI_Type_Descriptor;
      uStack_64 = 0;
      puStack_6c = (undefined1 *)0x4349be;
      iStack_68 = *(int *)(param_1 + 0x35c);
      iVar3 = FUN_0060a6f2();
      if (iVar3 == 0) {
        iStack_68 = *(int *)(param_1 + 0x35c);
        local_58 = (undefined4 *)0x0;
        pTStack_5c = &CRcActor::RTTI_Type_Descriptor;
        pTStack_60 = &CAdamActor::RTTI_Type_Descriptor;
        uStack_64 = 0;
        puStack_6c = (undefined1 *)0x4349e7;
        iVar3 = FUN_0060a6f2();
        if (iVar3 == 0) {
          local_58 = (undefined4 *)0x0;
        }
        else {
          local_58 = (undefined4 *)0x4349f5;
          local_58 = (undefined4 *)FUN_0042a590();
        }
      }
      else {
        local_58 = (undefined4 *)0x4349cc;
        local_58 = (undefined4 *)FUN_00422370();
      }
      pTStack_5c = (TypeDescriptor *)0x434a04;
      FUN_00453ce0();
      pTStack_5c = *(TypeDescriptor **)(param_1 + 0x35c);
      local_58 = (undefined4 *)0x1;
      pTStack_60 = (TypeDescriptor *)0x9;
      uStack_64 = 0x434a1a;
      FUN_00459270();
      local_58 = (undefined4 *)local_1c;
      DAT_006b5844 = '\x01';
      pTStack_5c = (TypeDescriptor *)0x434a31;
      FUN_0049bc80();
    }
    pTStack_5c = *(TypeDescriptor **)(param_1 + 0x360);
    if (pTStack_5c != (TypeDescriptor *)0x0) {
      local_58 = (undefined4 *)0x0;
      pTStack_60 = (TypeDescriptor *)0x9;
      uStack_64 = 0x434a5e;
      FUN_00459270();
      DAT_006b5844 = '\x01';
      local_58 = (undefined4 *)local_1c;
      pTStack_5c = (TypeDescriptor *)0x434a75;
      (**(code **)(**(int **)(param_1 + 0x360) + 0x48))();
      local_58 = (undefined4 *)0x0;
      pTStack_5c = (TypeDescriptor *)0x434a95;
      FUN_00453ce0();
    }
    local_58 = &local_34;
    pTStack_5c = (TypeDescriptor *)local_1c;
    pTStack_60 = (TypeDescriptor *)0x434aa6;
    FUN_00434e80();
    pTStack_5c = (TypeDescriptor *)0x434ab1;
    FUN_005b2fe0();
    local_40 = local_34;
    local_3c = uStack_30;
    local_38 = uStack_2c;
  }
  local_58 = (undefined4 *)0x434b2b;
  iVar3 = FUN_00434e30();
  if (iVar3 == 0xb) {
    local_58 = (undefined4 *)param_2;
    pTStack_5c = (TypeDescriptor *)0x434b42;
    fVar8 = (float10)FUN_00436720();
    param_2 = (float)fVar8;
    if ((float10)0.0 < fVar8) {
      _DAT_0069017c = param_2;
    }
    iVar4 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      local_58 = (undefined4 *)0x434b6b;
      iVar4 = FUN_004bc480();
    }
    local_58 = (undefined4 *)0x1;
    pTStack_5c = &CRCApplication::RTTI_Type_Descriptor;
    pTStack_60 = &CAdamApplication::RTTI_Type_Descriptor;
    uStack_64 = 0;
    puStack_6c = (undefined1 *)0x434b7e;
    iStack_68 = iVar4;
    FUN_0060a6f2();
    local_58 = (undefined4 *)0x434b88;
    piVar5 = (int *)FUN_00492360();
    local_58 = (undefined4 *)0x434b8f;
    cVar2 = (**(code **)(*piVar5 + 0xc))();
    if (cVar2 == '\0') {
      local_58 = (undefined4 *)0x434b9a;
      FUN_00436a30();
      if (DAT_006b584c == 0) {
        DAT_006b584c = 1;
        local_58 = (undefined4 *)0x3ff33333;
        pTStack_5c = (TypeDescriptor *)0x434bc6;
        FUN_004a0bd0();
      }
    }
    else {
      if (DAT_006b584c == 0) {
        local_58 = (undefined4 *)0x434bda;
        FUN_00436b40();
      }
      local_58 = (undefined4 *)0x3e851eb8;
      pTStack_5c = (TypeDescriptor *)0x434bf0;
      FUN_004a0e20();
      local_58 = (undefined4 *)0x0;
      pTStack_5c = (TypeDescriptor *)0x434c02;
      FUN_004a0bd0();
      local_58 = (undefined4 *)(param_2 * 0.01);
      pTStack_5c = (TypeDescriptor *)0x434c17;
      FUN_004318c0();
      *(undefined4 *)(param_1 + 0x36c) = 0;
      DAT_006b584c = 0;
    }
  }
  else {
    local_58 = (undefined4 *)0x3ff33333;
    pTStack_5c = (TypeDescriptor *)0x434c3b;
    FUN_004a0bd0();
    _DAT_0069017c = 100.0;
    DAT_006b584c = 1;
  }
  local_58 = (undefined4 *)local_1c;
  pTStack_5c = (TypeDescriptor *)0x434c5b;
  puVar6 = (undefined4 *)FUN_00434e80();
  uStack_28 = *puVar6;
  uStack_24 = puVar6[1];
  uStack_20 = puVar6[2];
  if (*(char *)(param_1 + 0x394) != '\0') {
    if (*(int *)(param_1 + 0x390) != 0) {
      iVar4 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        local_58 = (undefined4 *)0x434c90;
        iVar4 = FUN_004bc480();
      }
      iVar7 = *(int *)(iVar4 + 0x4e8);
      if (iVar7 == -0x80000000) {
        local_58 = *(undefined4 **)(iVar4 + 0x49c);
        if (local_58 == (undefined4 *)0x0) {
          local_58 = (undefined4 *)&DAT_0064a3b4;
        }
        pTStack_5c = (TypeDescriptor *)0x434cb4;
        iVar7 = FUN_0060af10();
        *(int *)(iVar4 + 0x4e8) = iVar7;
      }
      if (iVar7 == 0) {
        local_58 = (undefined4 *)local_1c;
        iVar4 = **(int **)(param_1 + 0x390);
        pTStack_5c = (TypeDescriptor *)0x434cd9;
        local_58 = (undefined4 *)FUN_0049bc80();
        pTStack_5c = (TypeDescriptor *)0x434ce3;
        (**(code **)(iVar4 + 0x4c))();
      }
    }
    if (*(int **)(param_1 + 0x330) != (int *)0x0) {
      local_58 = &uStack_28;
      pTStack_5c = (TypeDescriptor *)0x434cf7;
      (**(code **)(**(int **)(param_1 + 0x330) + 0x4c))();
    }
  }
  local_58 = (undefined4 *)0x434d08;
  fVar8 = (float10)FUN_004a1060();
  if ((((float10)0.46 < fVar8) && (DAT_006b584c != 0)) && (*(float *)(param_1 + 0x36c) == 0.0)) {
    if (iVar3 == 0xb) {
      local_58 = (undefined4 *)0x434d48;
      FUN_00436a30();
    }
    else {
      local_58 = (undefined4 *)0x434d4f;
      FUN_00436b40();
    }
    local_58 = (undefined4 *)0x434d56;
    FUN_00431820();
    local_58 = &param_2;
    pTStack_5c = (TypeDescriptor *)0x1;
    iStack_68 = local_40;
    uStack_64 = local_3c;
    puStack_6c = local_1c;
    pTStack_60 = (TypeDescriptor *)local_38;
    uStack_70 = 0x434d82;
    puVar6 = (undefined4 *)FUN_00434e80();
    uStack_74 = *puVar6;
    puStack_7c = (undefined1 *)&uStack_74;
    uStack_70 = puVar6[1];
    puStack_6c = (undefined1 *)puVar6[2];
    iStack_78 = iVar3;
    FUN_004042e0(&puStack_7c);
    FUN_0044d260(auStack_10);
    fVar1 = _DAT_0069017c * 0.01 * *(float *)((int)param_2 + 0x1d8);
    if (fVar1 < 1.0) {
      fVar1 = 1.0;
    }
    *(float *)((int)param_2 + 0x1d8) = fVar1;
    *(float *)((int)param_2 + 0x1d8) = *(float *)((int)param_2 + 0x1d8) * 100.0 * 0.01;
    *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
    DAT_006b584c = 0;
  }
  return;
}

