/*
 * FUN_004b8580 at 004b8580
 * undefined FUN_004b8580(void)
 * Address ranges: 004b8580-004b8734
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004b8580(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            char param_10)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  char *pcStack_4c;
  char *pcStack_48;
  undefined1 *puStack_44;
  char *pcStack_40;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f0c8;
  pvStack_c = ExceptionList;
  uVar7 = 0;
  ExceptionList = &pvStack_c;
  if (*(int *)(param_1 + 0x178) == 0) {
    puStack_44 = local_1c;
    pcStack_40 = s_Font_improperly_initialized__006971f8;
    pcStack_48 = (char *)0x4b85bf;
    ExceptionList = &pvStack_c;
    pcStack_40 = (char *)FUN_005ae390();
    puStack_44 = (undefined1 *)0x67;
    pcStack_48 = s_D__Work_RCHorror_AdamSource_Adam_006971b0;
    pcStack_4c = s_m_Font_IsNotNull___006971e4;
    local_4 = 0;
    uStack_50 = 0x4b85d8;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_50 = 0x4b85da;
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      pcStack_40 = (char *)(iStack_18 + -1);
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        puStack_44 = (undefined1 *)0x4b8607;
        FUN_005fe5f0();
      }
      else {
        *pcStack_40 = cVar1 + -1;
      }
    }
  }
  pcStack_40 = (char *)0x4b8611;
  iVar3 = FUN_004cffd0();
  if (iVar3 == 0) {
    pcStack_40 = (char *)0x4b861e;
    FUN_004b95c0();
  }
  if (param_10 == '\0') {
    pcStack_40 = (char *)0x4b862d;
    cVar1 = FUN_004b9530();
    if (cVar1 == '\0') goto LAB_004b863a;
  }
  pcStack_40 = (char *)0x4b8638;
  uVar7 = FUN_004b9520();
LAB_004b863a:
  puStack_44 = (undefined1 *)param_3;
  pcStack_48 = (char *)param_7;
  pcStack_4c = (char *)param_6;
  uStack_50 = param_2;
  uStack_58 = param_2;
  iStack_54 = iVar3;
  pcStack_40 = (char *)uVar7;
  FUN_004042e0(&uStack_58);
  local_4 = 0xffffffff;
  FUN_00491700();
  cVar1 = FUN_004b1850();
  if (cVar1 == '\0') {
    param_10 = (char)&uStack_58;
    auStack_2c[0] = param_10;
    uVar4 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    pcStack_40 = (char *)0x1;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    pcStack_48 = (char *)0x4b86b0;
    puStack_44 = (undefined1 *)uVar4;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar4) = 0;
      uStack_24 = uVar4;
    }
    pcStack_40 = auStack_2c;
    local_4 = 2;
    puStack_44 = (undefined1 *)0x7f;
    pcStack_48 = s_D__Work_RCHorror_AdamSource_Adam_006971b0;
    pcStack_4c = s_result_00691bc0;
    uStack_50 = 0x4b86f6;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_50 = 0x4b86f8;
    (*pcVar2)();
    if (puStack_28 != (undefined4 *)0x0) {
      pcStack_40 = (char *)((int)puStack_28 + -1);
      cVar1 = *(char *)((int)puStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        puStack_44 = (undefined1 *)0x4b871d;
        FUN_005fe5f0();
      }
      else {
        *pcStack_40 = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

