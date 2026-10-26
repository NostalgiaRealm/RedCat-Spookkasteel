/*
 * FUN_00467eb0 at 00467eb0
 * undefined FUN_00467eb0(void)
 * Address ranges: 00467eb0-0046844e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00467eb0(int param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  float fStack_7c;
  int local_74;
  int iStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006279b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_74);
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar10 = *piVar3;
  if (*(int *)(iVar10 + 0x5c) == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144,local_1c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  uStack_6c = *(undefined4 *)(iVar10 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_74 != 0) &&
     (iVar10 = *(int *)(local_74 + 0x14) + -1, *(int *)(local_74 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&local_74);
  local_4 = 3;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 4;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
  }
  iVar10 = *piVar3;
  local_4 = 0xffffffff;
  uStack_44 = *(undefined4 *)(iVar10 + 0x210);
  fStack_40 = *(float *)(iVar10 + 0x214);
  uStack_3c = *(undefined4 *)(iVar10 + 0x218);
  if ((local_74 != 0) &&
     (iVar10 = *(int *)(local_74 + 0x14) + -1, *(int *)(local_74 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  pfVar9 = (float *)(param_1 + 0x1c0);
  local_74 = 0xf;
  do {
    if (*(char *)(pfVar9 + 0x12) != '\0') {
      fStack_7c = *(float *)(param_1 + 0x16a8);
      if (*(char *)(param_1 + 0x167c) != '\0') {
        fStack_7c = (*(float *)(param_1 + 0x1674) * *pfVar9 +
                    (1.0 - *pfVar9) * *(float *)(param_1 + 0x1678)) * fStack_7c;
      }
      fStack_68 = pfVar9[-8];
      fStack_64 = pfVar9[-7];
      fStack_60 = pfVar9[-6];
      FUN_005b2fe0(auStack_38);
      FUN_00477d50(auStack_38,&fStack_5c,&fStack_50);
      FUN_005b2fa0(fStack_7c);
      FUN_005b2fa0(fStack_7c);
      if (fStack_64 < fStack_40) {
        FUN_005b3080();
        FUN_005b3080();
      }
      *(float *)(param_1 + 0x10c) = ((fStack_68 + -0.5) - fStack_5c) + fStack_50;
      *(float *)(param_1 + 0x110) = ((fStack_64 + 0.5) - fStack_58) + fStack_4c;
      *(float *)(param_1 + 0x114) = ((fStack_60 + 0.0) - fStack_54) + fStack_48;
      *(float *)(param_1 + 0x130) = fStack_50 + 0.5 + fStack_5c + fStack_68;
      *(float *)(param_1 + 0x134) = fStack_4c + 0.5 + fStack_58 + fStack_64;
      *(float *)(param_1 + 0x138) = fStack_48 + 0.0 + fStack_54 + fStack_60;
      *(float *)(param_1 + 0x154) = (fStack_5c + 0.5 + fStack_68) - fStack_50;
      *(float *)(param_1 + 0x158) = (fStack_58 + -0.5 + fStack_64) - fStack_4c;
      *(float *)(param_1 + 0x15c) = (fStack_54 + 0.0 + fStack_60) - fStack_48;
      *(float *)(param_1 + 0x178) = ((fStack_68 + -0.5) - fStack_5c) - fStack_50;
      *(float *)(param_1 + 0x17c) = ((fStack_64 + -0.5) - fStack_58) - fStack_4c;
      *(float *)(param_1 + 0x180) = ((fStack_60 + 0.0) - fStack_54) - fStack_48;
      iStack_70 = FUN_005995d0();
      fVar1 = (float)iStack_70;
      *(float *)(param_1 + 300) = fVar1;
      *(float *)(param_1 + 0x150) = fVar1;
      *(float *)(param_1 + 0x174) = fVar1;
      *(float *)(param_1 + 0x198) = fVar1;
      if (*(int *)(*(int *)(param_1 + 0xf8) + 0x30) != 0) {
        puVar5 = (undefined4 *)(param_1 + 0x124);
        iVar10 = 4;
        do {
          puVar5[-1] = *(undefined4 *)(param_1 + 0x100);
          *puVar5 = *(undefined4 *)(param_1 + 0x104);
          puVar5[1] = *(undefined4 *)(param_1 + 0x108);
          puVar5 = puVar5 + 9;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar7 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        uVar7 = ~uVar7 - 1;
        puStack_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
        cVar2 = FUN_00401940(uVar7,1);
        if (cVar2 != '\0') {
          puVar5 = (undefined4 *)&DAT_006b3f70;
          puVar12 = puStack_28;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar12 = puVar12 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar5;
            puVar5 = (undefined4 *)((int)puVar5 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          *(undefined1 *)((int)puStack_28 + uVar7) = 0;
          uStack_24 = uVar7;
        }
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        if (puStack_28 != (undefined4 *)0x0) {
          cVar2 = *(char *)((int)puStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) {
            FUN_005fe5f0((char *)((int)puStack_28 + -1));
          }
          else {
            *(char *)((int)puStack_28 + -1) = cVar2 + -1;
          }
        }
        puStack_28 = (undefined4 *)0x0;
        uStack_24 = 0;
        uStack_20 = 0;
      }
      uVar6 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_6c,param_1 + 0x10c,4,uVar6);
    }
    pfVar9 = pfVar9 + 0x51;
    local_74 = local_74 + -1;
    if (local_74 == 0) {
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

