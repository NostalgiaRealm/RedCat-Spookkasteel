/*
 * FUN_004ac940 at 004ac940
 * undefined FUN_004ac940(void)
 * Address ranges: 004ac940-004acbd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004ac940(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint uStack_24;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = param_5;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e170;
  local_c = ExceptionList;
  if ((char)param_4 == '\0') {
    return;
  }
  ExceptionList = &local_c;
  if (param_5 != 0) {
    puVar2 = *(undefined1 **)(param_1 + 0x54);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    iVar3 = FUN_004251b0(0,*(undefined4 *)(param_5 + 100),puVar2,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 == 0) goto LAB_004aca2e;
  }
  local_2c[0] = (char)param_4;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar11 = &DAT_006b3f70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7 - 1;
  cVar1 = FUN_00401940(uVar7,1);
  if (cVar1 != '\0') {
    puVar9 = (undefined4 *)&DAT_006b3f70;
    puVar10 = local_28;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    FUN_00404190(uVar7);
  }
  local_4 = 0;
  pcVar4 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Spri_006962b4,
                                s_D__Work_RCHorror_AdamSource_Adam_00696274,0x3b,local_2c);
  (*pcVar4)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004aca2e:
  if (iVar5 != 0) {
    iVar5 = FUN_0060a6f2(iVar5,0,&CAdamGO::RTTI_Type_Descriptor,&CAdam3DSprite::RTTI_Type_Descriptor
                         ,0);
    if (iVar5 == 0) {
      local_2c[0] = (char)param_4;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        puVar10 = local_28;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        *(undefined1 *)((int)local_28 + uVar7) = 0;
        uStack_24 = uVar7;
      }
      local_4 = 1;
      pcVar4 = (code *)FUN_005a07f0(s_sprite____0_006962a8,
                                    s_D__Work_RCHorror_AdamSource_Adam_00696274,0x42,local_2c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_004debd0(*(undefined4 *)(param_1 + 100));
    if (*(int *)(param_1 + 0x68) != 0) {
      piVar6 = (int *)FUN_004acce0(&param_4);
      local_4 = 2;
      if (*piVar6 == 0) {
        auStack_1c[0] = (char)param_4;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 3;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_1c);
        (*pcVar4)();
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_004040a0(1);
      }
      FUN_0050aca0(*(undefined4 *)(param_1 + 0x68));
      local_4 = 0xffffffff;
      if ((param_4 != 0) &&
         (iVar3 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
    }
    *(undefined4 *)(iVar5 + 0x130) = *(undefined4 *)(param_1 + 0x60);
  }
  ExceptionList = local_c;
  return;
}

