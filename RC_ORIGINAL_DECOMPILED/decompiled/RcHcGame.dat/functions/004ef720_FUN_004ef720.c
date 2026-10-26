/*
 * FUN_004ef720 at 004ef720
 * undefined FUN_004ef720(void)
 * Address ranges: 004ef720-004ef97e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004ef720(int *param_1,int param_2,int param_3,float *param_4,float param_5,undefined4 param_6)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float10 fVar14;
  float10 fVar15;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  char *pcStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined1 *puStack_50;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  fVar5 = param_5;
  fVar4 = (float)param_4;
  puStack_8 = &LAB_00633f28;
  pvStack_c = ExceptionList;
  local_4 = 0;
  puStack_50 = (undefined1 *)0x4ef75d;
  ExceptionList = &pvStack_c;
  fVar14 = (float10)(**(code **)(*param_1 + 0x10))();
  fVar1 = (float10)(float)param_4;
  puStack_50 = (undefined1 *)0x4ef76c;
  fVar15 = (float10)(**(code **)(*param_1 + 0x18))();
  fVar2 = (float10)param_5;
  iStack_1c = param_1[6];
  iStack_14 = param_1[8];
  iStack_18 = param_1[7] + 2;
  iStack_10 = param_1[9] + 5;
  if (*(char *)(param_2 + 0x125) == '\0') {
    puStack_50 = (undefined1 *)0x0;
    auStack_2c[0] = param_4._0_1_;
    uStack_54 = 0x4ef7bd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    puStack_50 = (undefined1 *)0x1;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar6 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar6 != '\0');
    uVar8 = ~uVar8 - 1;
    piStack_58 = (int *)0x4ef7da;
    uStack_54 = uVar8;
    cVar6 = FUN_00401940();
    if (cVar6 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      puVar12 = puStack_28;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      uStack_54 = 0x4ef801;
      puStack_50 = (undefined1 *)uVar8;
      FUN_00404190();
    }
    puStack_50 = auStack_2c;
    local_4._0_1_ = 1;
    uStack_54 = 0x127;
    piStack_58 = (int *)s___AdamSource_AdamEngine_h_0068eb58;
    pcStack_5c = s_m_Initialized_00691bb0;
    fStack_60 = 7.252178e-39;
    pcVar7 = (code *)FUN_005a07f0();
    fStack_60 = 7.25218e-39;
    (*pcVar7)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_50 = (undefined1 *)0x1;
    uStack_54 = 0x4ef834;
    FUN_004040a0();
  }
  param_4 = *(float **)(param_2 + 0x40);
  fVar3 = (float)(int)param_4;
  if (*(char *)(param_2 + 0x125) == '\0') {
    puStack_50 = (undefined1 *)0x0;
    auStack_2c[0] = param_4._0_1_;
    uStack_54 = 0x4ef86e;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    puStack_50 = (undefined1 *)0x1;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar6 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar6 != '\0');
    uVar8 = ~uVar8 - 1;
    piStack_58 = (int *)0x4ef88b;
    uStack_54 = uVar8;
    cVar6 = FUN_00401940();
    if (cVar6 != '\0') {
      puVar10 = (undefined4 *)&DAT_006b3f70;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puStack_28 = *puVar10;
        puVar10 = puVar10 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      uStack_54 = 0x4ef8b2;
      puStack_50 = (undefined1 *)uVar8;
      FUN_00404190();
    }
    puStack_50 = auStack_2c;
    local_4._0_1_ = 2;
    uStack_54 = 0x12d;
    piStack_58 = (int *)s___AdamSource_AdamEngine_h_0068eb58;
    pcStack_5c = s_m_Initialized_00691bb0;
    fStack_60 = 7.252426e-39;
    pcVar7 = (code *)FUN_005a07f0();
    fStack_60 = 7.252429e-39;
    (*pcVar7)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_50 = (undefined1 *)0x1;
    uStack_54 = 0x4ef8e5;
    FUN_004040a0();
  }
  puStack_50 = (undefined1 *)0x0;
  piStack_58 = &iStack_1c;
  uStack_54 = param_6;
  fStack_68 = fVar4;
  fStack_60 = fVar5;
  fStack_6c = 5.0 / (float)*(int *)(param_2 + 0x44) + (float)(fVar15 + fVar2);
  param_4 = &fStack_6c;
  fStack_64 = 2.0 / fVar3 + (float)(fVar14 + fVar1);
  pcStack_5c = (char *)fStack_6c;
  FUN_00449760(&param_3);
  FUN_005614e0();
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar11 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar11, iVar11 == 0)) {
    puStack_50 = (undefined1 *)0x0;
    uStack_54 = 0x4ef96a;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

