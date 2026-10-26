/*
 * FUN_004f1f00 at 004f1f00
 * undefined FUN_004f1f00(void)
 * Address ranges: 004f1f00-004f2084
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004f1f00(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006342f0;
  pvStack_c = ExceptionList;
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 2;
    }
    ExceptionList = &pvStack_c;
    if (param_3 < iVar2) goto LAB_004f1fdb;
  }
  local_2c[0] = (undefined1)param_3;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_006b3f70;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_28 = *puVar6;
      puVar6 = puVar6 + 1;
      local_28 = local_28 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)local_28 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      local_28 = (undefined4 *)((int)local_28 + 1);
    }
    FUN_00404190(uVar4);
  }
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s__a_Index_>__0______a_Index<m_Sub_0069c50c,
                                s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x37,local_2c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_004f1fdb:
  if (*(int *)(*(int *)(param_1 + 0x30) + param_3 * 4) == 0) {
    local_1c[0] = (undefined1)param_3;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_SubLevels__a_Index___IsNotNull_0069c4e8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c43c,0x38,local_1c);
    (*pcVar3)();
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
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + param_3 * 4);
  *param_2 = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
  }
  ExceptionList = pvStack_c;
  return;
}

