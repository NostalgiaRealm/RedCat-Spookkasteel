/*
 * FUN_00511cb0 at 00511cb0
 * undefined FUN_00511cb0(void)
 * Address ranges: 00511cb0-00511ece
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00511cb0(int param_1,undefined1 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006375d8;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x1c8) < 0) {
LAB_00511d01:
    local_3c[0] = (undefined1)param_3;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar1 = FUN_00401940(uVar6,1);
    if (cVar1 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *local_38 = *puVar8;
        puVar8 = puVar8 + 1;
        local_38 = local_38 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)local_38 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        local_38 = (undefined4 *)((int)local_38 + 1);
      }
      FUN_00404190(uVar6);
    }
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s__m_CurrentIndex>_0______m_Curren_0069ee30,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069ebac,0x176,local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  else {
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c) >> 2;
    }
    ExceptionList = &pvStack_c;
    if (iVar2 <= *(int *)(param_1 + 0x1c8)) goto LAB_00511d01;
  }
  iVar2 = *(int *)(param_1 + 0x1c8);
  if (-1 < iVar2) {
    iVar4 = FUN_0044e4c0();
    if (iVar2 < iVar4) goto LAB_00511e19;
  }
  auStack_1c[0] = (undefined1)param_3;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar9 = &DAT_006b3f70;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
  local_4 = 1;
  pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_00511e19:
  iVar2 = *(int *)(*(int *)(param_1 + 0x18c) + iVar2 * 4);
  auStack_2c[0] = *(undefined1 *)(iVar2 + 0x28);
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0x28,0,0xffffffff);
  local_4 = 2;
  if (*(int *)(param_1 + 0x1dc) == param_3) {
    uVar5 = FUN_005119e0(param_4);
    *(undefined4 *)(param_1 + 0x1c8) = uVar5;
  }
  *param_2 = auStack_2c[0];
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(auStack_2c,0,0xffffffff);
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_28 + -1);
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_2;
}

