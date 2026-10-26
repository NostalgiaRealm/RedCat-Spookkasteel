/*
 * FUN_0050c050 at 0050c050
 * undefined FUN_0050c050(void)
 * Address ranges: 0050c050-0050c2f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050c050(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined1 local_50 [4];
  int iStack_4c;
  undefined1 auStack_40 [4];
  int iStack_3c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636a80;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_0050aa70();
  iVar3 = FUN_005c40f0();
  if (iVar3 != 0) {
    uVar4 = __ftol();
    uVar5 = __ftol(uVar4);
    uVar6 = __ftol(uVar5);
    uVar7 = __ftol(uVar6);
    iVar3 = FUN_005c50f0(uVar7,uVar6,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = FUN_005ae390(local_50,s_Couldn_t_set_the_color__00696ba8);
      local_4 = 1;
      pcVar8 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                    0x24b,uVar4);
      (*pcVar8)();
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
    iVar3 = FUN_005c3fa0();
    if (iVar3 == 0) {
      uVar4 = FUN_005ae390(local_50,s_Couldn_t_set_the_palette__00696b8c);
      local_4 = 2;
      pcVar8 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                    0x24e,uVar4);
      (*pcVar8)();
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
  }
  FUN_0050c300(param_1,param_2,param_3,param_4,uVar2);
  iVar3 = FUN_005c3350(0);
  if (iVar3 == 0) {
    uVar2 = FUN_005ae390(&param_1,s_Couldn_t_get_bitmap_info__00696b70);
    local_4 = 3;
    pcVar8 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,600,
                                  uVar2);
    (*pcVar8)();
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
  uVar2 = FUN_005c01d0(0,2);
  param_1 = 0;
  param_2 = 0;
  param_3 = 0;
  param_4 = 0x437f0000;
  FUN_0050c300(0,0,0,0x437f0000,uVar2);
  iVar3 = FUN_005c4120();
  if (iVar3 == 0) {
    uVar2 = FUN_005ae390(auStack_40,s_Couldn_t_set_alpha_bitmap__00696b54);
    local_4 = 4;
    pcVar8 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_0069e554,
                                  0x269,uVar2);
    (*pcVar8)();
    if (iStack_3c != 0) {
      cVar1 = *(char *)(iStack_3c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_3c + -1));
      }
      else {
        *(char *)(iStack_3c + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

