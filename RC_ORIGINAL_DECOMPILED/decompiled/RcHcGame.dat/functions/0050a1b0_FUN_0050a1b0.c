/*
 * FUN_0050a1b0 at 0050a1b0
 * undefined FUN_0050a1b0(void)
 * Address ranges: 0050a1b0-0050a32d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_0050a1b0(int param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006366a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_1c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    local_18 = 0;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Child__0_0069e4d0,s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,
                                  0x75,local_1c);
    (*pcVar2)();
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
  }
  if (*(int *)(param_2 + 0x40) != param_1) {
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_2c[0] = (undefined1)param_2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_a_Child_>m_Parent__this_0069e4b8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e3b0,0x76,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
  }
  iVar5 = 0;
  iVar3 = FUN_0050a440();
  if (0 < iVar3) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x4c) + iVar5 * 4) == param_2) {
        ExceptionList = pvStack_c;
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar3 = FUN_0050a440();
    } while (iVar5 < iVar3);
  }
  ExceptionList = pvStack_c;
  return -1;
}

