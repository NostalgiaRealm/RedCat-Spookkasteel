/*
 * FUN_0046a010 at 0046a010
 * undefined FUN_0046a010(void)
 * Address ranges: 0046a010-0046a38d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046a010(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float afStack_28 [2];
  float fStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627b80;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xa58) != -1) {
    ExceptionList = &local_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &local_c;
      FUN_0055b280();
    }
    piVar5 = (int *)FUN_00421750(&local_50);
    local_4 = 0;
    if (*piVar5 == 0) {
      local_1c[0] = (undefined1)param_2;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar4 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar4 = FUN_00401940(uVar7,1);
      if (cVar4 != '\0') {
        puVar9 = (undefined4 *)&DAT_006b3f70;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *local_18 = *puVar9;
          puVar9 = puVar9 + 1;
          local_18 = local_18 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)local_18 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          local_18 = (undefined4 *)((int)local_18 + 1);
        }
        FUN_00404190(uVar7);
      }
      local_4._0_1_ = 1;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_1c);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar10 = *piVar5;
    local_4 = 0xffffffff;
    local_34 = *(undefined4 *)(iVar10 + 0x210);
    local_30 = *(undefined4 *)(iVar10 + 0x214);
    local_2c = *(undefined4 *)(iVar10 + 0x218);
    if ((local_50 != 0) &&
       (iVar10 = *(int *)(local_50 + 0x14) + -1, *(int *)(local_50 + 0x14) = iVar10, iVar10 == 0)) {
      FUN_005abfc0(0);
    }
    local_50 = *(int *)(param_1 + 0xaec);
    cVar4 = '\x01';
    if (local_50 != -1) {
      iVar10 = *(int *)(param_1 + 0xaf0);
      if (iVar10 == -1) {
        *(undefined4 *)(param_1 + 0xaf4) = 0x3f800000;
        *(int *)(param_1 + 0xaf0) = local_50 + param_2;
      }
      else if (iVar10 < param_2) {
        *(undefined4 *)(param_1 + 0xaf4) = 0;
        cVar4 = '\0';
      }
      else if (local_50 < 1) {
        *(undefined4 *)(param_1 + 0xaf4) = 0;
      }
      else {
        *(float *)(param_1 + 0xaf4) = (float)(iVar10 - param_2) / (float)local_50;
      }
    }
    *(char *)(param_1 + 0xaf8) = cVar4;
    if (cVar4 == '\0') {
      *(undefined4 *)(param_1 + 0xa58) = 0xffffffff;
    }
    fVar1 = *(float *)(param_1 + 0xaf4) * 0.1 + (1.0 - *(float *)(param_1 + 0xaf4));
    fStack_4c = *(float *)(param_1 + 0xa48);
    fVar3 = fVar1 * *(float *)(param_1 + 0xa54);
    fStack_44 = *(float *)(param_1 + 0xa50);
    fVar2 = (1.0 - fVar1) * 255.0;
    fStack_48 = fVar1 * 75.0 + *(float *)(param_1 + 0xa4c);
    FUN_005b2fe0(afStack_28);
    fStack_38 = -afStack_28[0];
    fStack_40 = fStack_20;
    fStack_3c = 0.0;
    FUN_005b2f20();
    FUN_005b2fa0(fVar3);
    *(float *)(param_1 + 0xa5c) = (fStack_4c + -0.5) - fStack_40;
    *(float *)(param_1 + 0xa60) = ((fStack_48 + 0.5) - fStack_3c) + fVar3;
    *(float *)(param_1 + 0xa64) = (fStack_44 + 0.0) - fStack_38;
    *(float *)(param_1 + 0xa80) = fStack_4c + 0.5 + fStack_40;
    *(float *)(param_1 + 0xa84) = fStack_3c + 0.5 + fStack_48 + fVar3;
    *(float *)(param_1 + 0xa88) = fStack_44 + 0.0 + fStack_38;
    *(float *)(param_1 + 0xaa4) = fStack_4c + 0.5 + fStack_40;
    *(float *)(param_1 + 0xaa8) = (fStack_3c + -0.5 + fStack_48) - fVar3;
    *(float *)(param_1 + 0xaac) = fStack_44 + 0.0 + fStack_38;
    *(float *)(param_1 + 0xac8) = (fStack_4c + -0.5) - fStack_40;
    *(float *)(param_1 + 0xacc) = ((fStack_48 + -0.5) - fStack_3c) - fVar3;
    *(float *)(param_1 + 0xa7c) = fVar2;
    *(float *)(param_1 + 0xaa0) = fVar2;
    *(float *)(param_1 + 0xac4) = fVar2;
    *(float *)(param_1 + 0xae8) = fVar2;
    *(float *)(param_1 + 0xad0) = (fStack_44 + 0.0) - fStack_38;
  }
  ExceptionList = local_c;
  return;
}

