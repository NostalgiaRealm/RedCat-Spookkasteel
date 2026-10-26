/*
 * FUN_004caf10 at 004caf10
 * undefined FUN_004caf10(void)
 * Address ranges: 004caf10-004cb0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004caf10(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_2c [4];
  char *pcStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630c30;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = 0;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
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
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_a_ButtonModel____0_0068f6d4,
                                  s_D__Work_RCHorror_AdamSource_Adam_00698c80,0x33,local_1c);
    (*pcVar4)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  uVar3 = FUN_004cfc00(*(undefined4 *)(param_2 + 0x14),param_2);
  *(int *)(param_1 + 0x174) = param_2;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x2c);
  *(bool *)(param_1 + 0x16f) = *(int *)(param_2 + 0x28) != 0;
  iVar1 = *(int *)(param_2 + 0x24);
  *(bool *)(param_1 + 0x16e) = iVar1 != 0;
  *(bool *)(param_1 + 0x16d) = *(int *)(param_2 + 0x1c) != 0;
  if (*(int *)(param_2 + 0x48) != 0) {
    *(undefined1 *)(param_1 + 0xaa) = 1;
  }
  FUN_00502350(CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(param_2 + 0x20) != 0));
  pcVar9 = *(char **)(param_2 + 0x10);
  pcStack_28 = (char *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_4 = 1;
  auStack_2c[0] = uVar3;
  if (pcVar9 != (char *)0x0) {
    uVar6 = 0xffffffff;
    pcVar10 = pcVar9;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = pcStack_28;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcStack_28[uVar6] = '\0';
      uStack_24 = uVar6;
    }
  }
  FUN_0040cc00(auStack_2c,0,0xffffffff);
  uVar5 = extraout_var;
  if (pcStack_28 != (char *)0x0) {
    cVar2 = pcStack_28[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_28 + -1);
      uVar5 = extraout_var_00;
    }
    else {
      pcStack_28[-1] = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar5,uVar3);
}

