/*
 * FUN_005ec0f0 at 005ec0f0
 * undefined FUN_005ec0f0(void)
 * Address ranges: 005ec0f0-005ec2c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ec0f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_3c [4];
  undefined4 *local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647078;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (99999 < *(int *)(param_1 + 0xc)) {
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4 = 0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_38;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_38 + uVar3) = 0;
      local_34 = uVar3;
    }
    local_4._0_1_ = 1;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar7 = s_Stack_overflow_006b124c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar7 = s_Stack_overflow_006b124c;
      pcVar9 = local_28;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      local_28[uVar3] = '\0';
      local_24 = uVar3;
    }
    local_4._0_1_ = 2;
    FUN_005ea160(0xbba,local_2c,local_3c,local_1c);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
    if (local_38 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_38 + -1));
      }
      else {
        *(char *)((int)local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = (undefined4 *)0x0;
    local_34 = 0;
    uStack_30 = 0;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0xc) + 5000;
  *(int *)(param_1 + 0xc) = iVar5;
  uVar2 = FUN_0060e293(*(undefined4 *)(param_1 + 4),iVar5);
  *(undefined4 *)(param_1 + 4) = uVar2;
  ExceptionList = pvStack_c;
  return;
}

