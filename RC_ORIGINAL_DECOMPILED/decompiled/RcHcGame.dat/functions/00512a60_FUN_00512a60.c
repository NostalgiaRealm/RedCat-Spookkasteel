/*
 * FUN_00512a60 at 00512a60
 * undefined FUN_00512a60(void)
 * Address ranges: 00512a60-00512c10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00512a60(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int local_30;
  undefined1 local_2c;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637718;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x1db) == '\0') {
    iVar2 = DAT_006c8de0;
    ExceptionList = &local_c;
    if (DAT_006c8de0 == 0) {
      ExceptionList = &local_c;
      iVar2 = FUN_0055b280();
    }
    if (*(int *)(iVar2 + 0xd8) == 0) {
      local_2c = (undefined1)param_2;
      FUN_004040a0();
      iVar2 = -1;
      pcVar5 = &DAT_006b3f70;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_0050d980(&local_30);
    local_4 = 1;
    if (local_30 != 0) {
      *(int *)(local_30 + 0x14) = *(int *)(local_30 + 0x14) + 1;
    }
    FUN_005127d0(param_2);
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar2 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar2, iVar2 == 0)) {
      FUN_005abfc0();
      ExceptionList = local_c;
      return;
    }
  }
  else {
    ExceptionList = &local_c;
    uVar4 = FUN_005ae390(local_1c,s_Trying_to_load_portrait___s__aft_0069eef4);
    local_4 = 2;
    FUN_004c43e0(uVar4);
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_18 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0();
    }
  }
  ExceptionList = local_c;
  return;
}

