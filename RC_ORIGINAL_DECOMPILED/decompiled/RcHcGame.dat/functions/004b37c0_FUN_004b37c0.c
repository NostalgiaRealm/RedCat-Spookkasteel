/*
 * FUN_004b37c0 at 004b37c0
 * undefined FUN_004b37c0(void)
 * Address ranges: 004b37c0-004b3cc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eb68 slot 1 for .?AVCAdamTextureBitmapScrollAnimationCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eb68 slot 1 for
   .?AVCAdamTextureBitmapScrollAnimationCell@@. Original bytes unchanged; names and types still
   inferred. */

void __thiscall
FUN_004b37c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 auStack_3c [4];
  undefined4 *puStack_38;
  uint uStack_34;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ea58;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((char)param_4 != '\0') {
    iVar2 = DAT_006c8de0;
    ExceptionList = &pvStack_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &pvStack_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xd8) == 0) {
      local_2c[0] = (char)param_4;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188,local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0050d980(&param_4,*(undefined4 *)(param_1 + 0x50));
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    if (param_4 == 0) {
      auStack_3c[0] = 0;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar1 = FUN_00401940(uVar8,1);
      if (cVar1 != '\0') {
        puVar10 = (undefined4 *)&DAT_006b3f70;
        puVar11 = puStack_38;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        }
        FUN_00404190(uVar8);
      }
      local_4._0_1_ = 2;
      pcVar3 = (code *)FUN_005a07f0(s_srcAdamBitmap_IsNotNull___00696da4,
                                    s_D__Work_RCHorror_AdamSource_Adam_00696dc0,0x32,auStack_3c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
      if (param_4 == 0) {
        auStack_3c[0] = 0;
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        local_4._0_1_ = 3;
        pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_3c);
        (*pcVar3)();
        local_4._0_1_ = 1;
        FUN_004040a0(1);
      }
    }
    uVar4 = FUN_00439e20();
    *(undefined4 *)(param_1 + 100) = uVar4;
    if (param_4 == 0) {
      auStack_3c[0] = 0;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_3c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      FUN_004040a0(1);
    }
    uVar4 = FUN_00439d60();
    *(undefined4 *)(param_1 + 0x68) = uVar4;
    local_4 = 0xffffffff;
    if ((param_4 != 0) &&
       (iVar2 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0(0);
    }
  }
  iVar2 = param_5;
  if (param_5 == 0) {
LAB_004b3a65:
    auStack_3c[0] = (char)param_4;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8 - 1;
    cVar1 = FUN_00401940(uVar8,1);
    if (cVar1 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar11 = puStack_38;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      *(undefined1 *)((int)puStack_38 + uVar8) = 0;
      iVar2 = param_5;
      uStack_34 = uVar8;
    }
    local_4 = 5;
    pcVar3 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Text_00696d74,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696dc0,0x47,auStack_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  else {
    puVar5 = *(undefined1 **)(param_1 + 0x78);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    iVar6 = FUN_004251b0(0,*(undefined4 *)(param_5 + 100),puVar5,*(undefined4 *)(param_1 + 0x7c));
    if (iVar6 != 0) goto LAB_004b3a65;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_0060a6f2(iVar2,0,&CAdamGO::RTTI_Type_Descriptor,
                         &CAdamTextureAnimator::RTTI_Type_Descriptor,0);
    if (iVar2 == 0) {
      puVar5 = *(undefined1 **)(param_1 + 0x78);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_0064a3b4;
      }
      uVar4 = FUN_005ae390(auStack_1c,s_Couldn_t_cast_CAdamTextureAnimat_00696d24,puVar5);
      local_4 = 6;
      pcVar3 = (code *)FUN_005a07f0(s_textureAnimator____NULL_00696d0c,
                                    s_D__Work_RCHorror_AdamSource_Adam_00696dc0,0x50,uVar4);
      (*pcVar3)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    FUN_004b9230(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x5c),
                 *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),
                 *(undefined4 *)(param_1 + 0x70),0,0,1);
  }
  if (*(float *)(param_1 + 0x84) != 0.0) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar2 < iVar6) {
      param_4 = iVar6 - iVar2;
      iVar7 = __ftol();
      iVar7 = *(int *)(param_1 + 0x6c) + iVar7;
      *(int *)(param_1 + 0x6c) = iVar7;
      if (iVar7 + iVar2 < iVar6) goto LAB_004b3c34;
      iVar2 = (iVar7 - iVar6) + iVar2;
    }
    else {
      param_4 = iVar6;
      iVar2 = __ftol();
      iVar2 = *(int *)(param_1 + 0x6c) + iVar2;
      *(int *)(param_1 + 0x6c) = iVar2;
      if (iVar2 < iVar6) goto LAB_004b3c34;
      iVar2 = iVar2 - iVar6;
    }
    *(int *)(param_1 + 0x6c) = iVar2;
  }
LAB_004b3c34:
  if (*(float *)(param_1 + 0x88) != 0.0) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 100);
    if (iVar2 < iVar6) {
      param_4 = iVar6 - iVar2;
      iVar7 = __ftol();
      iVar7 = *(int *)(param_1 + 0x70) + iVar7;
      *(int *)(param_1 + 0x70) = iVar7;
      if (iVar6 <= iVar7 + iVar2) {
        *(int *)(param_1 + 0x70) = (iVar7 - iVar6) + iVar2;
      }
    }
    else {
      param_4 = iVar6;
      iVar2 = __ftol();
      iVar2 = *(int *)(param_1 + 0x70) + iVar2;
      *(int *)(param_1 + 0x70) = iVar2;
      if (iVar6 <= iVar2) {
        *(int *)(param_1 + 0x70) = iVar2 - iVar6;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

