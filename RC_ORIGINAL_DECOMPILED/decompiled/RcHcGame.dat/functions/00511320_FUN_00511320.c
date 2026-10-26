/*
 * FUN_00511320 at 00511320
 * undefined FUN_00511320(void)
 * Address ranges: 00511320-00511790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00511320(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined4 *local_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00637541;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f55c;
  local_4 = 10;
  local_50 = param_1;
  if ((undefined4 *)param_1[0x79] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x79])(1);
  }
  param_1[0x79] = 0;
  while ((param_1[0x5f] != 0 && (0 < (int)(param_1[0x60] - param_1[0x5f] & 0xfffffffc)))) {
    iVar1 = FUN_0044e4c0();
    if (iVar1 < 1) {
      FUN_00409810(&DAT_006b3f70,&uStack_54);
      local_4._0_1_ = 0xb;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,auStack_4c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0(1);
    }
    if (*(int *)param_1[0x5f] != 0) {
      iVar1 = FUN_0044e4c0();
      if (iVar1 < 1) {
        FUN_00409810(&DAT_006b3f70,&uStack_53);
        local_4._0_1_ = 0xc;
        pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_3c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_004040a0(1);
      }
      if (*(undefined4 **)param_1[0x5f] != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)param_1[0x5f])(1);
      }
      iVar1 = FUN_0044e4c0();
      if (iVar1 < 1) {
        FUN_00409810(&DAT_006b3f70,&uStack_52);
        local_4._0_1_ = 0xd;
        pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_004040a0(1);
      }
      *(undefined4 *)param_1[0x5f] = 0;
    }
    iVar1 = FUN_0044e4c0();
    if (iVar1 < 1) {
      FUN_00409810(&DAT_006b3f70,&uStack_51);
      local_4._0_1_ = 0xe;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458,
                                    0xbb,auStack_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0(1);
    }
    puVar3 = (undefined4 *)FUN_00515440();
    puVar4 = (undefined4 *)FUN_00515330(0);
    *puVar4 = *puVar3;
    FUN_00515040(param_1[0x60] + -4);
  }
  iVar1 = FUN_0044e4c0();
  puVar3 = param_1;
  while (0 < iVar1) {
    iVar1 = FUN_0044e4c0();
    if (iVar1 < 1) {
      FUN_00409810(&DAT_006b3f70,&uStack_51);
      local_4._0_1_ = 0xf;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                    s___AdamSource_DaviList_h_0068f458,0x97,auStack_1c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0(1);
    }
    if (*(int *)param_1[99] != 0) {
      iVar1 = FUN_0044e4c0();
      if (iVar1 < 1) {
        FUN_00409810(&DAT_006b3f70,&uStack_52);
        local_4._0_1_ = 0x10;
        pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_2c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_004040a0(1);
      }
      if (*(undefined4 **)param_1[99] != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)param_1[99])(1);
      }
      iVar1 = FUN_0044e4c0();
      if (iVar1 < 1) {
        FUN_00409810(&DAT_006b3f70,&uStack_53);
        local_4._0_1_ = 0x11;
        pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,auStack_3c);
        (*pcVar2)();
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_004040a0(1);
      }
      *(undefined4 *)param_1[99] = 0;
    }
    iVar1 = FUN_0044e4c0();
    if (iVar1 < 1) {
      FUN_00409810(&DAT_006b3f70,&uStack_54);
      local_4._0_1_ = 0x12;
      pcVar2 = (code *)FUN_005a07f0(s_a_Index<Count()_0068f448,s___AdamSource_DaviList_h_0068f458,
                                    0xbb,auStack_4c);
      (*pcVar2)();
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0(1);
    }
    puVar3 = (undefined4 *)FUN_00515660();
    puVar4 = (undefined4 *)FUN_00515550(0);
    *puVar4 = *puVar3;
    FUN_00515040(param_1[100] + -4);
    iVar1 = FUN_0044e4c0();
    puVar3 = local_50;
  }
  local_4._1_3_ = (uint3)((uint)local_4 >> 8);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_00514460();
  local_4._0_1_ = 7;
  FUN_0057d310();
  local_4._0_1_ = 6;
  FUN_0057d310();
  local_4._0_1_ = 5;
  FUN_00514430();
  local_4._0_1_ = 4;
  FUN_004f2780();
  local_4._0_1_ = 3;
  FUN_00514430();
  local_4._0_1_ = 2;
  FUN_00514430();
  local_4._0_1_ = 1;
  if (puVar3[0x5d] != 0) {
    FUN_004098d0();
    puVar3[0x5d] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004a9d40();
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

