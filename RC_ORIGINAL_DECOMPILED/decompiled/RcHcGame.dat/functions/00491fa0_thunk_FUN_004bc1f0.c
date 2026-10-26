/*
 * thunk_FUN_004bc1f0 at 00491fa0
 * undefined thunk_FUN_004bc1f0(void)
 * Address ranges: 00491fa0-00491fa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004bc1f0
 */

void __fastcall thunk_FUN_004bc1f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_0062f81f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064ee04;
  uStack_4 = 0xd;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x8a);
  uStack_4._0_1_ = 0xe;
  FUN_004bc090();
  FUN_00592db0();
  if (param_1[0xea] == 0) {
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    uStack_4._0_1_ = 0xf;
    pcVar3 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,
                                  0x136,auStack_1c);
    (*pcVar3)();
    uStack_4._0_1_ = 0xe;
    FUN_004040a0(1);
  }
  FUN_0053dbe0();
  if ((undefined4 *)param_1[0xea] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xea])(1);
  }
  param_1[0xea] = 0;
  FUN_005a7a00(param_1[0x16]);
  uStack_4._0_1_ = 0xd;
  FUN_005ae770();
  uStack_4._0_1_ = 0xc;
  FUN_005acca0();
  uStack_4._0_1_ = 0xb;
  FUN_005acca0();
  uStack_4._0_1_ = 10;
  FUN_005acca0();
  uStack_4._0_1_ = 9;
  FUN_005acca0();
  uStack_4._0_1_ = 8;
  FUN_005acca0();
  uStack_4._0_1_ = 7;
  FUN_005acca0();
  uStack_4._0_1_ = 6;
  FUN_005acca0();
  uStack_4 = CONCAT31(uStack_4._1_3_,5);
  FUN_00592b50();
  iVar2 = param_1[0x1d];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  iVar2 = param_1[0x19];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  iVar2 = param_1[0x14];
  iVar6 = param_1[0x13];
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  for (; iVar6 != iVar2; iVar6 = iVar6 + 0x40) {
    FUN_004c4970(0);
  }
  FUN_005fe5f0(param_1[0x13]);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar2 = param_1[10];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uStack_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

