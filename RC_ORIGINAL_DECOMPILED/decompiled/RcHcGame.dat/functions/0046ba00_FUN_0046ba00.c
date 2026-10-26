/*
 * FUN_0046ba00 at 0046ba00
 * undefined FUN_0046ba00(void)
 * Address ranges: 0046ba00-0046bcf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ba00(float *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  int local_60;
  int local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [12];
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00627de0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    FUN_0055b280();
  }
  piVar3 = (int *)FUN_00421750(&local_60);
  local_4 = 0;
  if (*piVar3 == 0) {
    local_1c[0] = param_1._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = local_18;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar5) = 0;
      local_14 = uVar5;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_1c);
    (*pcVar4)();
    if (local_18 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar2 + -1;
      }
    }
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    uStack_10 = 0;
  }
  iVar10 = *piVar3;
  local_4 = 0xffffffff;
  local_40 = *(undefined4 *)(iVar10 + 0x210);
  local_3c = *(undefined4 *)(iVar10 + 0x214);
  local_38 = *(undefined4 *)(iVar10 + 0x218);
  if ((local_60 != 0) &&
     (iVar10 = *(int *)(local_60 + 0x14) + -1, *(int *)(local_60 + 0x14) = iVar10, iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  FUN_005b2fe0(auStack_4c);
  FUN_005b2fe0(auStack_34);
  fVar11 = (float10)FUN_005b2e40();
  FUN_005b2fa0((float)fVar11);
  FUN_005b2fe0(auStack_28);
  FUN_005b2f20();
  FUN_005b2f20();
  FUN_005b2e60(&fStack_58);
  FUN_005b2f20();
  FUN_005b2fa0(param_1[7] * 0.5);
  param_1[8] = param_1[3] - fStack_58;
  param_1[9] = param_1[4] - fStack_54;
  param_1[10] = param_1[5] - fStack_50;
  param_1[0x11] = fStack_58 + param_1[3];
  param_1[0x12] = fStack_54 + param_1[4];
  param_1[0x13] = fStack_50 + param_1[5];
  param_1[0x1a] = fStack_58 + *param_1;
  param_1[0x1b] = fStack_54 + param_1[1];
  param_1[0x1c] = fStack_50 + param_1[2];
  param_1[0x23] = *param_1 - fStack_58;
  param_1[0x24] = param_1[1] - fStack_54;
  param_1[0x25] = param_1[2] - fStack_50;
  if (*(char *)(local_5c + 0x9f4) == '\x01') {
    fVar1 = *(float *)(local_5c + 0x9f0) + 0.01;
  }
  else {
    fVar1 = *(float *)(local_5c + 0x9f0) - 0.01;
  }
  *(float *)(local_5c + 0x9f0) = fVar1;
  if (0.03 <= *(float *)(local_5c + 0x9f0)) {
    *(undefined1 *)(local_5c + 0x9f4) = 0;
  }
  param_1[0xc] = *(float *)(local_5c + 0x9f0) + 0.03;
  param_1[0x15] = *(float *)(local_5c + 0x9f0) + 0.03;
  param_1[0x1e] = *(float *)(local_5c + 0x9f0) + 0.97;
  param_1[0x27] = *(float *)(local_5c + 0x9f0) + 0.97;
  ExceptionList = pvStack_c;
  return;
}

