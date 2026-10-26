/*
 * FUN_004b9230 at 004b9230
 * undefined FUN_004b9230(void)
 * Address ranges: 004b9230-004b9511
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004b9301) */
/* WARNING: Removing unreachable block (ram,0x004b9312) */

void __thiscall
FUN_004b9230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,char *param_6,char *param_7,undefined4 param_8,char param_9)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char *pcStack_48;
  char *pcStack_44;
  int *piStack_40;
  char *pcStack_3c;
  int local_28;
  int local_24;
  int local_20;
  char local_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0062f280;
  pvStack_c = ExceptionList;
  local_28 = 0;
  local_4 = 0;
  iVar2 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  local_20 = param_1;
  if (DAT_006c8de0 == 0) {
    pcStack_3c = (char *)0x4b926b;
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    pcStack_3c = (char *)0x0;
    local_1c[0] = param_9;
    piStack_40 = (int *)0x4b9287;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcStack_3c = (char *)(~uVar5 - 1);
    piStack_40 = (int *)&DAT_006b3f70;
    pcStack_44 = (char *)0x4b92a5;
    FUN_004040f0();
    pcStack_3c = local_1c;
    local_4._0_1_ = 1;
    piStack_40 = (int *)0x188;
    pcStack_44 = s___AdamSource_AdamEngine_h_0068eb58;
    pcStack_48 = s_m_BitmapMgr_0068eb4c;
    uStack_4c = 0x4b92c3;
    pcVar3 = (code *)FUN_005a07f0();
    uStack_4c = 0x4b92c5;
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_3c = (char *)0x1;
    piStack_40 = (int *)0x4b92d7;
    FUN_004040a0();
  }
  piStack_40 = &local_24;
  pcStack_3c = (char *)param_2;
  pcStack_44 = (char *)0x4b92ec;
  piVar4 = (int *)FUN_0050d980();
  if (*piVar4 != 0) {
    local_4._0_1_ = 2;
    local_28 = *piVar4;
    pcStack_3c = (char *)0x4b9327;
    FUN_005844b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_24 != 0) {
    pcStack_3c = (char *)0x4b933c;
    FUN_004098d0();
  }
  if (local_28 == 0) {
    pcStack_3c = (char *)0x0;
    local_1c[0] = param_9;
    piStack_40 = (int *)0x4b935a;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcStack_3c = (char *)0x1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    pcStack_44 = (char *)0x4b9377;
    piStack_40 = (int *)uVar5;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_18;
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
      piStack_40 = (int *)0x4b939e;
      pcStack_3c = (char *)uVar5;
      FUN_00404190();
    }
    pcStack_3c = local_1c;
    local_4._0_1_ = 3;
    piStack_40 = (int *)0xa8;
    pcStack_44 = s_D__Work_RCHorror_AdamSource_Adam_006972a8;
    pcStack_48 = s_bitmap_IsNotNull____006972e0;
    uStack_4c = 0x4b93bc;
    pcVar3 = (code *)FUN_005a07f0();
    uStack_4c = 0x4b93be;
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_3c = (char *)0x1;
    piStack_40 = (int *)0x4b93d0;
    FUN_004040a0();
    param_1 = local_20;
  }
  if (*(int *)(param_1 + 0x138) == 0) {
    pcStack_3c = (char *)0x4b93e3;
    FUN_004b95c0();
  }
  pcStack_3c = (char *)0x0;
  if ((param_9 != '\0') || (*(char *)(param_1 + 0x164) != '\0')) {
    pcStack_3c = (char *)0x4b93fc;
    pcStack_3c = (char *)FUN_004b9520();
  }
  piStack_40 = (int *)param_8;
  pcStack_44 = param_7;
  pcStack_48 = param_6;
  uStack_4c = param_5;
  uStack_58 = *(undefined4 *)(param_1 + 0x138);
  uStack_50 = param_4;
  uStack_54 = param_3;
  uStack_5c = param_3;
  FUN_004042e0(&uStack_5c);
  local_4 = local_4 & 0xffffff00;
  FUN_00412de0();
  cVar1 = FUN_0050bd80();
  if (cVar1 == '\0') {
    param_9 = (char)&uStack_5c;
    pcStack_3c = (char *)0x0;
    local_1c[0] = param_9;
    piStack_40 = (int *)0x4b945f;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcStack_3c = (char *)0x1;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5 - 1;
    pcStack_44 = (char *)0x4b947c;
    piStack_40 = (int *)uVar5;
    cVar1 = FUN_00401940();
    if (cVar1 != '\0') {
      puVar7 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_18;
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
      *(undefined1 *)((int)puStack_18 + uVar5) = 0;
      uStack_14 = uVar5;
    }
    pcStack_3c = local_1c;
    local_4._0_1_ = 5;
    piStack_40 = (int *)0xc4;
    pcStack_44 = s_D__Work_RCHorror_AdamSource_Adam_006972a8;
    pcStack_48 = s_result_00691bc0;
    uStack_4c = 0x4b94c2;
    pcVar3 = (code *)FUN_005a07f0();
    uStack_4c = 0x4b94c4;
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_3c = (char *)0x1;
    piStack_40 = (int *)0x4b94d6;
    FUN_004040a0();
  }
  local_4 = 0xffffffff;
  if ((local_28 != 0) &&
     (iVar2 = *(int *)(local_28 + 0x14) + -1, *(int *)(local_28 + 0x14) = iVar2, iVar2 == 0)) {
    pcStack_3c = (char *)0x0;
    piStack_40 = (int *)0x4b94fd;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

