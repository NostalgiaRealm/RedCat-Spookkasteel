/*
 * FUN_0054e750 at 0054e750
 * undefined FUN_0054e750(void)
 * Address ranges: 0054e750-0054e9f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_0054e750(int param_1,undefined4 *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 local_52;
  undefined1 local_51;
  int iStack_50;
  int local_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063da30;
  local_c = ExceptionList;
  local_52 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_004337e0();
  if (iVar1 != 0) {
    iVar1 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar1 = FUN_004bc480();
    }
    if (*(int *)(iVar1 + 0x3a4) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_51);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    local_4c = 0;
    FUN_005844b0();
    local_4 = 1;
    iStack_50 = 0;
    FUN_005844b0();
    local_4._0_1_ = 2;
    piVar3 = (int *)FUN_00453d20(&fStack_48);
    local_4._0_1_ = 3;
    if (local_4c != *piVar3) {
      if (local_4c != 0) {
        FUN_004098d0();
      }
      local_4c = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 2;
    FUN_0057d310();
    piVar3 = (int *)FUN_00421750(&fStack_48);
    local_4._0_1_ = 4;
    if (iStack_50 != *piVar3) {
      if (iStack_50 != 0) {
        FUN_004098d0();
      }
      iStack_50 = *piVar3;
      FUN_005844b0();
    }
    local_4._0_1_ = 2;
    FUN_0057d310();
    iVar1 = local_4c;
    if ((((local_4c != 0) && (*(int *)(local_4c + 0x5c) != 0)) && (iStack_50 != 0)) &&
       (*(int *)(iStack_50 + 0x30) != 0)) {
      uStack_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
      fStack_48 = *(float *)(param_1 + 0x1ec);
      if (*(int *)(local_4c + 0x5c) == 0) {
        FUN_00409810(&DAT_006b3f70,&param_2);
        local_4._0_1_ = 9;
        pcVar2 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                      s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_1c);
        (*pcVar2)();
        local_4._0_1_ = 2;
        FUN_004040a0(1);
      }
      FUN_005c7ba0(*(undefined4 *)(iVar1 + 0x5c),iStack_50 + 0x1e0,&uStack_38,fStack_48 * 32.0,0,
                   &uStack_44,&fStack_40,&fStack_3c);
      fVar4 = (float10)FUN_0054d140(uStack_44);
      local_52 = 1;
      *param_3 = (float)(fVar4 * (float10)*param_3);
      *param_5 = fStack_40 + *param_5;
      *param_4 = fStack_3c * *param_4;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_50 != 0) {
      FUN_004098d0();
      iStack_50 = 0;
    }
    local_4 = 0xffffffff;
    if (local_4c != 0) {
      FUN_004098d0();
    }
  }
  ExceptionList = local_c;
  return local_52;
}

