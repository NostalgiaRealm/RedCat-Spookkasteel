/*
 * FUN_005a5e10 at 005a5e10
 * undefined FUN_005a5e10(void)
 * Address ranges: 005a5e10-005a619e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

UINT_PTR __fastcall FUN_005a5e10(UINT_PTR *param_1)

{
  LPJOYINFOEX pji;
  char cVar1;
  UINT_PTR UVar2;
  MMRESULT MVar3;
  undefined4 uVar4;
  undefined1 local_1b4 [4];
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  tagJOYCAPSA local_1a0;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645643;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Davi_006a8128,0x45);
  pji = (LPJOYINFOEX)(param_1 + 1);
  local_4 = 0;
  pji->dwSize = 0x34;
  param_1[2] = 0x83;
  MVar3 = joyGetPosEx(0,pji);
  if (MVar3 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[0x2b] = param_1[3];
    param_1[0x2c] = param_1[4];
    *param_1 = 0;
  }
  else {
    MVar3 = joyGetPosEx(1,pji);
    if (MVar3 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      param_1[0x2b] = param_1[3];
      param_1[0x2c] = param_1[4];
      *param_1 = 1;
    }
  }
  if ((int)*param_1 < 0) {
    uVar4 = FUN_005ae390(local_1b4,s___JS_No_Active_Joystick_found_006a806c);
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_005aff00(uVar4);
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    local_1b0 = 0;
    local_1ac = 0;
    local_1a8 = 0;
  }
  else {
    MVar3 = joyGetDevCapsA(*param_1,&local_1a0,0x194);
    if (MVar3 == 0) {
      param_1[0x2e] = local_1a0.wXmin;
      param_1[0x2d] = local_1a0.wXmax;
      param_1[0x30] = local_1a0.wYmin;
      param_1[0x2f] = local_1a0.wYmax;
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Active_Joystick_found____d_006a8104,*param_1);
    local_4._0_1_ = 1;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    uVar4 = FUN_005ae390(local_1b4,s___JS_Xbase____d_006a80f0,param_1[0x2b]);
    local_4._0_1_ = 2;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Ybase____d_006a80dc,param_1[0x2c]);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Xmin____d_006a80c8,param_1[0x2e]);
    local_4._0_1_ = 4;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Xmax____d_006a80b4,param_1[0x2d]);
    local_4._0_1_ = 5;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Ymin____d_006a80a0,param_1[0x30]);
    local_4._0_1_ = 6;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0;
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
    uVar4 = FUN_005ae390(local_1b4,s___JS_Ymax____d_006a808c,param_1[0x2f]);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_005aff00(uVar4);
    if (local_1b0 != 0) {
      cVar1 = *(char *)(local_1b0 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_1b0 + -1));
      }
      else {
        *(char *)(local_1b0 + -1) = cVar1 + -1;
      }
    }
  }
  UVar2 = *param_1;
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = local_c;
  return UVar2;
}

