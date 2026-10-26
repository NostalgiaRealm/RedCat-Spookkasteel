/*
 * FUN_00568e00 at 00568e00
 * undefined FUN_00568e00(void)
 * Address ranges: 00568e00-00569049
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_00568e00(int *param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  float unaff_EBP;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 unaff_retaddr;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640418;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == (int *)0x0) {
    local_2c[0] = param_2;
    uVar5 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar5 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_this____0_006a4130,s_D__Work_RCHorror_AdamSource_Adam_006a40b0,
                                  0x1e,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar2 + -1;
      }
    }
  }
  if (param_1[9] <= param_1[0xb]) {
    local_2c[0] = param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = local_28;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar5) = 0;
      local_24 = uVar5;
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_LastTime_<_m_InterpolateTime_006a4110,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a40b0,0x20,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar2 = *(char *)((int)local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar2 + -1;
      }
    }
  }
  iVar1 = param_1[0xc];
  iVar4 = __ftol();
  if ((iVar4 < 0) || (iVar1 <= iVar4)) {
    auStack_1c[0] = param_2;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pvVar7 = (void *)(~uVar5 - 1);
    cVar2 = FUN_00401940(pvVar7,1);
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar10 = puStack_18;
      for (uVar5 = (uint)pvVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar5 = (uint)pvVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      *(undefined1 *)((int)puStack_18 + (int)pvVar7) = 0;
      pvStack_14 = pvVar7;
    }
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_index_>_0____index_<_m_NumFuncti_006a40e4,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a40b0,0x25,auStack_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  (**(code **)(*param_1 + 4))(iVar4);
  (**(code **)(*param_1 + 8))(unaff_retaddr);
  ExceptionList = pvStack_14;
  return (float10)unaff_EBP;
}

