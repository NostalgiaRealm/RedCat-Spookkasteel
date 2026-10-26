/*
 * FUN_00475bd0 at 00475bd0
 * undefined FUN_00475bd0(void)
 * Address ranges: 00475bd0-00475fd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00475bd0(int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  int local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628760;
  local_c = ExceptionList;
  if ((*(int *)(param_1 + 0x14954) == 1) && (*(char *)(param_1 + 0x149c4) != '\0')) {
    local_5c = *(int *)(param_1 + 0x149b4);
    bVar2 = true;
    ExceptionList = &local_c;
    if (local_5c != -1) {
      iVar9 = *(int *)(param_1 + 0x149b8);
      if (iVar9 == -1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x149bc) = 0x3f800000;
        *(int *)(param_1 + 0x149b8) = local_5c + param_2;
      }
      else if (iVar9 < param_2) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x149bc) = 0;
        bVar2 = false;
      }
      else if (local_5c < 1) {
        ExceptionList = &local_c;
        *(undefined4 *)(param_1 + 0x149bc) = 0;
      }
      else {
        ExceptionList = &local_c;
        *(float *)(param_1 + 0x149bc) = (float)(iVar9 - param_2) / (float)local_5c;
      }
    }
    *(bool *)(param_1 + 0x149c0) = bVar2;
    if (!bVar2) {
      *(undefined1 *)(param_1 + 0x149c4) = 0;
      *(undefined1 *)(param_1 + 0x149a8) = 0;
      FUN_00474f20(0xffffffff);
      *(undefined4 *)(param_1 + 0x14954) = 0;
      FUN_004762c0(2);
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x149c8) = 0x42a00000;
    *(float *)(param_1 + 0x149c8) =
         *(float *)(param_1 + 0x149bc) * 8.0 + (1.0 - *(float *)(param_1 + 0x149bc)) * 80.0;
    if (DAT_006c8de0 == 0) {
      FUN_0055b280();
    }
    piVar4 = (int *)FUN_00421750(&local_5c);
    local_4 = 0;
    if (*piVar4 == 0) {
      param_2._0_1_ = SUB41(piVar4,0);
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar3 != '\0');
      uVar6 = ~uVar6 - 1;
      cVar3 = FUN_00401940(uVar6,1);
      if (cVar3 != '\0') {
        puVar8 = (undefined4 *)&DAT_006b3f70;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_18 = *puVar8;
          puVar8 = puVar8 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar6);
      }
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar9 = *piVar4;
    local_4 = 0xffffffff;
    local_34 = *(undefined4 *)(iVar9 + 0x210);
    local_30 = *(float *)(iVar9 + 0x214);
    local_2c = *(undefined4 *)(iVar9 + 0x218);
    if ((local_5c != 0) &&
       (iVar9 = *(int *)(local_5c + 0x14) + -1, *(int *)(local_5c + 0x14) = iVar9, iVar9 == 0)) {
      FUN_005abfc0(0);
    }
    FUN_005b2fe0(auStack_28);
    FUN_005b3020(*(float *)(param_1 + 0x149bc) * 0.1 + (1.0 - *(float *)(param_1 + 0x149bc)) * 0.95,
                 &fStack_40);
    uVar1 = *(undefined4 *)(param_1 + 0x149c8);
    FUN_00477d50(auStack_28,&fStack_58,&fStack_4c);
    FUN_005b2fa0(uVar1);
    FUN_005b2fa0(uVar1);
    if (fStack_3c < local_30) {
      FUN_005b3080();
      FUN_005b3080();
    }
    *(float *)(param_1 + 0x1c0) = ((fStack_40 + -0.5) - fStack_58) + fStack_4c;
    *(float *)(param_1 + 0x1c4) = ((fStack_3c + 0.5) - fStack_54) + fStack_48;
    *(float *)(param_1 + 0x1c8) = ((fStack_38 + 0.0) - fStack_50) + fStack_44;
    *(float *)(param_1 + 0x1e4) = fStack_40 + 0.5 + fStack_4c + fStack_58;
    *(float *)(param_1 + 0x1e8) = fStack_48 + 0.5 + fStack_54 + fStack_3c;
    *(float *)(param_1 + 0x1ec) = fStack_38 + 0.0 + fStack_44 + fStack_50;
    *(float *)(param_1 + 0x208) = (fStack_40 + 0.5 + fStack_58) - fStack_4c;
    *(float *)(param_1 + 0x20c) = (fStack_54 + -0.5 + fStack_3c) - fStack_48;
    *(float *)(param_1 + 0x210) = (fStack_38 + 0.0 + fStack_50) - fStack_44;
    *(float *)(param_1 + 0x22c) = ((fStack_40 + -0.5) - fStack_58) - fStack_4c;
    *(float *)(param_1 + 0x230) = ((fStack_3c + -0.5) - fStack_54) - fStack_48;
    *(float *)(param_1 + 0x234) = ((fStack_38 + 0.0) - fStack_50) - fStack_44;
  }
  ExceptionList = local_c;
  return;
}

