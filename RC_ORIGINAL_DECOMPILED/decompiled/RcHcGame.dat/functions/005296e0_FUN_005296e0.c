/*
 * FUN_005296e0 at 005296e0
 * undefined FUN_005296e0(void)
 * Address ranges: 005296e0-00529834
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005296e0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char local_21 [5];
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00639bf8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x26f);
  local_4._0_1_ = 1;
  if (param_2 != 0) {
    uVar2 = FUN_00556560();
    FUN_00536af0(uVar2,local_21);
    if (local_21[0] == '\0') {
      uVar6 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_18 = 0;
      local_1c[0] = (undefined1)param_2;
      local_14 = 0;
      local_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 3;
      pcVar3 = (code *)FUN_005a07f0(s__a_Level_IsNull________m_Levels__006a0044,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x271,local_1c);
      (*pcVar3)();
      local_4._0_1_ = 1;
      if (local_18 != 0) {
        cVar1 = *(char *)(local_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_18 + -1));
        }
        else {
          *(char *)(local_18 + -1) = cVar1 + -1;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  if (iVar5 != param_2) {
    if ((iVar5 != 0) &&
       (iVar4 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar4, iVar4 == 0)) {
      FUN_005abfc0(0);
    }
    *(int *)(param_1 + 0x5c) = param_2;
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ae770();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar5 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar5, iVar5 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return;
}

