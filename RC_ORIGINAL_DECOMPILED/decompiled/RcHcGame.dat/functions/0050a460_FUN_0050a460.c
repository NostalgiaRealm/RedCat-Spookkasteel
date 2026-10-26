/*
 * FUN_0050a460 at 0050a460
 * undefined FUN_0050a460(void)
 * Address ranges: 0050a460-0050a5e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0050a460(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006366e0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (-1 < param_2) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_0050a440();
    if (param_2 < iVar2) goto LAB_0050a516;
  }
  local_1c[0] = (undefined1)param_2;
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
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<GetChildCo_0069e500,
                                s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0xa3,local_1c);
  (*pcVar3)();
  local_4 = 0xffffffff;
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
LAB_0050a516:
  iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + param_2 * 4);
  if (*(int *)(iVar2 + 0x40) != param_1) {
    uVar4 = 0xffffffff;
    param_2._0_1_ = (undefined1)iVar2;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    local_2c[0] = (undefined1)param_2;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)puStack_28 + uVar4) = 0;
      uStack_24 = uVar4;
    }
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s_result_>m_Parent__this_0069e4e8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0xa5,local_2c);
    (*pcVar3)();
    if (puStack_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return iVar2;
}

