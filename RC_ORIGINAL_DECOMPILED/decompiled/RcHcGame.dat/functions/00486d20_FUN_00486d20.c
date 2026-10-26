/*
 * FUN_00486d20 at 00486d20
 * undefined FUN_00486d20(void)
 * Address ranges: 00486d20-00487122
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e448 slot 11 for .?AVCRcGStateLOADING@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e448 slot 11 for
   .?AVCRcGStateLOADING@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00486d20(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_5a;
  undefined1 uStack_59;
  undefined1 auStack_58 [4];
  undefined1 local_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [16];
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629e98;
  pvStack_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar2 = FUN_004bc480();
  }
  if (*(int *)(iVar2 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_5a);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_3c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar4 = (int *)FUN_00453d20(local_54);
  local_4 = 1;
  if (*piVar4 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_5a);
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_3c);
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  iVar2 = *piVar4;
  piVar4 = (int *)FUN_00453d40(auStack_58);
  local_4._0_1_ = 3;
  if (*piVar4 == 0) {
    FUN_00409810(&DAT_006b3f70,&uStack_59);
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  auStack_2c);
    (*pcVar3)();
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
  iVar2 = FUN_004f2090(iVar2 + 0x1c);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0057d310();
  local_4 = 0xffffffff;
  FUN_0057d310();
  FUN_005ae390(auStack_1c,s_ImageLvl_d_006935fc,iVar2 + 1);
  local_4 = 5;
  auStack_4c[0] = uStack_59;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageBgnd_006935f0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageBgnd_006935f0,~uVar5 - 1);
  local_4._0_1_ = 6;
  piVar4 = (int *)FUN_00487130(local_54,auStack_4c,param_1 + 0x128,param_1 + 0x138,0);
  local_4._0_1_ = 7;
  if (*(int *)(param_1 + 0x124) != *piVar4) {
    if (*(int *)(param_1 + 0x124) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x124) = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 6;
  FUN_0057d310();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  auStack_4c[0] = uStack_59;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageLogo_006935e4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageLogo_006935e4,~uVar5 - 1);
  local_4._0_1_ = 8;
  piVar4 = (int *)FUN_00487130(local_54,auStack_4c,param_1 + 0x14c,param_1 + 0x15c,1);
  local_4._0_1_ = 9;
  if (*(int *)(param_1 + 0x148) != *piVar4) {
    if (*(int *)(param_1 + 0x148) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x148) = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 8;
  FUN_0057d310();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  piVar4 = (int *)FUN_00487130(local_54,auStack_1c,param_1 + 0x170,param_1 + 0x180,0);
  local_4._0_1_ = 10;
  if (*(int *)(param_1 + 0x16c) != *piVar4) {
    if (*(int *)(param_1 + 0x16c) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 0x16c) = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 5;
  FUN_0057d310();
  auStack_4c[0] = uStack_59;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar6 = s_ImageProg_006935d8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ImageProg_006935d8,~uVar5 - 1);
  local_4._0_1_ = 0xb;
  piVar4 = (int *)FUN_00487130(auStack_50,auStack_4c,param_1 + 0x194,param_1 + 0x1a4,0);
  local_4._0_1_ = 0xc;
  if (*(int *)(param_1 + 400) != *piVar4) {
    if (*(int *)(param_1 + 400) != 0) {
      FUN_004098d0();
    }
    *(int *)(param_1 + 400) = *piVar4;
    FUN_005844b0();
  }
  local_4._0_1_ = 0xb;
  FUN_0057d310();
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return;
}

