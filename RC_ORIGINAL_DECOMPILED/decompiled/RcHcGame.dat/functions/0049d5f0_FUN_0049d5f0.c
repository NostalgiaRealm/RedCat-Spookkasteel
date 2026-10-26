/*
 * FUN_0049d5f0 at 0049d5f0
 * undefined FUN_0049d5f0(void)
 * Address ranges: 0049d5f0-0049d882
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0049d5f0(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piStack_b8;
  int iStack_9c;
  float fStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 *local_80;
  float fStack_74;
  undefined1 *puStack_6c;
  int local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_1c;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062caa3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1[0x42] == 0) {
    piStack_b8 = (int *)0x0;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    piStack_b8 = (int *)0x1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    piVar6 = (int *)(~uVar5 - 1);
    cVar2 = FUN_00401940(piVar6);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_80;
      for (uVar5 = (uint)piVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar5 = (uint)piVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      piStack_b8 = piVar6;
      FUN_00404190();
    }
    piStack_b8 = &local_84;
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Settings____0_0068f8a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00694bcc,0x141);
    (*pcVar3)();
    local_4 = 0xffffffff;
    piStack_b8 = (int *)0x1;
    FUN_004040a0();
  }
  piVar6 = (int *)param_1[0x42];
  piStack_b8 = &local_68;
  FUN_0049d310();
  if (*(char *)((int)piVar6 + 0x39) == '\0') {
    piStack_b8 = (int *)0x49d6ed;
    FUN_00565430();
    fVar1 = (float)piVar6[0xd] * 0.007843138;
    piStack_b8 = &iStack_90;
    local_4 = 1;
    piVar4 = (int *)(**(code **)(*param_1 + 0x48))();
    iStack_9c = *piVar4;
    fStack_98 = (float)piVar4[1];
    piVar9 = param_1 + 0x4d;
    piVar12 = &local_84;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    iStack_94 = piVar4[2];
    piStack_b8 = param_1 + 0x9d;
    fStack_98 = (fStack_74 - (float)local_80) * 0.75 + fStack_98;
    *piStack_b8 = iStack_9c;
    param_1[0x9e] = (int)fStack_98;
    puStack_6c = (undefined1 *)&piStack_b8;
    param_1[0x9f] = iStack_94;
    FUN_004042e0(&piStack_b8);
    FUN_005654c0(&iStack_9c);
    param_1[0xa0] = param_1[0xa0] + 1;
    param_1[0x86] = iStack_1c;
    if (iStack_1c == 0) {
      if ((char)piVar6[0xe] == '\0') {
        fStack_58 = 0.0;
        fStack_54 = 0.0;
        fStack_50 = 0.0;
      }
      else {
        piStack_b8 = piVar6;
        FUN_0049d2d0(&local_68);
      }
    }
    else {
      piStack_b8 = &iStack_90;
      FUN_005b2fe0();
      piStack_b8 = (int *)0x49d7b5;
      FUN_005b2f20();
      uStack_5c = uStack_88;
      iVar7 = param_1[0x86];
      iStack_64 = iStack_90;
      uStack_60 = uStack_8c;
      fStack_58 = (float)*(int *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x10) * fStack_14 * fVar1;
      fStack_54 = (float)*(int *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x14) * fStack_14 * fVar1;
      fStack_50 = (float)*(int *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x18) * fStack_14 * fVar1;
    }
    local_4 = 0xffffffff;
    piStack_b8 = (int *)0x49d85c;
    FUN_005ab4d0();
  }
  else {
    piStack_b8 = piVar6;
    FUN_0049d2d0(&local_68);
  }
  piStack_b8 = &local_68;
  FUN_0049d480();
  ExceptionList = pvStack_c;
  return;
}

