/*
 * FUN_0050c300 at 0050c300
 * undefined FUN_0050c300(void)
 * Address ranges: 0050c300-0050c779
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050c300(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_5c;
  undefined1 local_50 [4];
  int iStack_4c;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int local_30;
  int iStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636ad0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005c3350(0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_50,s_Couldn_t_get_bitmap_info__00696b70);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x279,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c3880(0,0,0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_50,s_Couldn_t_change_format__0069e8b8);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x27e,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c0530(0,0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_50,s_Couldn_t_lock_bitmap__0069e8a0);
    local_4 = 2;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x282,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c3350(0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_50,s_Couldn_t_get_bitmap_info__00696b70);
    local_4 = 3;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x285,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c0d90();
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_50,s_Couldn_t_get_bits__0069e88c);
    local_4 = 4;
    pcVar4 = (code *)FUN_005a07f0(&DAT_0069e884,s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x288,
                                  uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_4c != 0) {
      cVar1 = *(char *)(iStack_4c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_4c + -1));
      }
      else {
        *(char *)(iStack_4c + -1) = cVar1 + -1;
      }
    }
  }
  iStack_5c = 0;
  if (0 < iStack_2c) {
    do {
      iVar2 = 0;
      if (0 < local_30) {
        uVar3 = __ftol();
        uVar5 = __ftol();
        uVar6 = __ftol();
        uVar7 = __ftol();
        do {
          FUN_005c69c0(uVar3,uVar5,uVar6,uVar7);
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_30);
      }
      FUN_005c6a70();
      iStack_5c = iStack_5c + 1;
    } while (iStack_5c < iStack_2c);
  }
  iVar2 = FUN_005c0d70();
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(&param_1,s_Couldn_t_unlock_bitmap__0069e86c);
    local_4 = 5;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x29d,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (param_2 != 0) {
      cVar1 = *(char *)(param_2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(param_2 + -1));
      }
      else {
        *(char *)(param_2 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c25c0();
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(&param_1,s_Couldn_t_refresh_mips__0069e854);
    local_4 = 6;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x2a0,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (param_2 != 0) {
      cVar1 = *(char *)(param_2 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(param_2 + -1));
      }
      else {
        *(char *)(param_2 + -1) = cVar1 + -1;
      }
    }
  }
  iVar2 = FUN_005c3880(0,0,0);
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(auStack_40,s_Couldn_t_change_format__0069e8b8);
    local_4 = 7;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x2a3,uVar3);
    (*pcVar4)();
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return 1;
      }
      FUN_005fe5f0((char *)(iStack_3c + -1));
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

