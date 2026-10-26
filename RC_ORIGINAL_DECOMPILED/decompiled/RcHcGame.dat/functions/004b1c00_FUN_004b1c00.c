/*
 * FUN_004b1c00 at 004b1c00
 * undefined FUN_004b1c00(void)
 * Address ranges: 004b1c00-004b1d59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_004b1c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e810;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005c4110();
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(local_1c,s_Couldn_t_get_alpha_bitmap_00696bf4);
    local_4 = iVar2;
    pcVar4 = (code *)FUN_005a07f0(s_alphaBitmap____NULL_00696be0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0x2db,uVar3);
    (*pcVar4)();
    local_4 = 0xffffffff;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  FUN_004b1d60(param_1,iVar2,param_3,param_4,param_5,param_6,0x437f0000,0x437f0000,0x437f0000,
               0x437f0000);
  iVar2 = FUN_005c4120();
  if (iVar2 == 0) {
    uVar3 = FUN_005ae390(&param_3,s_Couldn_t_set_alpha_bitmap__00696b54);
    local_4 = 1;
    pcVar4 = (code *)FUN_005a07f0(&PTR_DAT_006967dc,s_D__Work_RCHorror_AdamSource_Adam_00696748,
                                  0x2e2,uVar3);
    (*pcVar4)();
    if (param_4 != 0) {
      cVar1 = *(char *)(param_4 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(param_4 + -1));
      }
      else {
        *(char *)(param_4 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return 1;
}

