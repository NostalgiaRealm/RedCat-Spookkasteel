/*
 * FUN_005a2280 at 005a2280
 * undefined FUN_005a2280(void)
 * Address ranges: 005a2280-005a2336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a2280(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645098;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (*(char *)(param_1 + 0x30) != '\0') {
    ExceptionList = &pvStack_c;
    uVar3 = FUN_005a2cf0();
    uVar3 = FUN_005ae390(local_1c,s_Cannot_add_filename__s_after_loc_006a7a80,uVar3);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s___m_ListLocked_006a7a40,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a7a50,0x29,uVar3);
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
  param_2 = uVar2;
  FUN_0053cff0(*(undefined4 *)(param_1 + 0x28),1,&param_2);
  ExceptionList = pvStack_c;
  return;
}

