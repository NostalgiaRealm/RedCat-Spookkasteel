/*
 * FUN_00555440 at 00555440
 * undefined FUN_00555440(void)
 * Address ranges: 00555440-0055591a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00555440(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 local_194 [16];
  undefined1 local_184 [16];
  undefined1 local_174 [20];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined4 *local_120;
  undefined1 local_11c [16];
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e638;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_120 = param_1;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 7) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
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
  local_4._0_1_ = 2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_FieldOfView_006a21e8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FieldOfView_006a21e8,~uVar4 - 1);
  local_4._0_1_ = 3;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Camera__006a21e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Camera__006a21e0,~uVar4 - 1);
  local_4._0_1_ = 4;
  uVar2 = FUN_0044e370(local_130,local_184,param_2);
  local_4._0_1_ = 5;
  FUN_005ac8b0(local_174,uVar2,0x3fae147b,local_194,0);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  param_1[0x2b] = 0x27f;
  param_1[0x2c] = 0x1df;
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
  local_4._0_1_ = 0xb;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_RenderRectPercentage_006a21c8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_RenderRectPercentage_006a21c8,~uVar4 - 1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Camera__006a21e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Camera__006a21e0,~uVar4 - 1);
  local_4._0_1_ = 0xd;
  uVar2 = FUN_0044e370(local_11c,local_160,param_2);
  local_4._0_1_ = 0xe;
  FUN_005ac8b0(local_140,uVar2,0x42c80000,local_150,0);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
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
  local_4._0_1_ = 0x14;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_ZScale_006a21c0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ZScale_006a21c0,~uVar4 - 1);
  local_4._0_1_ = 0x15;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_Camera__006a21e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_Camera__006a21e0,~uVar4 - 1);
  local_4._0_1_ = 0x16;
  uVar2 = FUN_0044e370(local_130,local_194,param_2);
  local_4._0_1_ = 0x17;
  FUN_005ac8b0(local_174,uVar2,0x3f800000,local_184,0);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  *param_1 = &PTR_FUN_0064f828;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a2194,0x1e);
  local_4 = CONCAT31(local_4._1_3_,0x1d);
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(char *)(iVar3 + 0x122) != '\0') {
    puVar6 = local_10c;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_0060af1b(local_10c,0xff,&DAT_0069081c,0,0x40590000);
    FUN_005acdb0(local_10c);
  }
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  FUN_00556150(param_1 + 99);
  local_4 = CONCAT31(local_4._1_3_,0x19);
  FUN_005ae770();
  ExceptionList = local_c;
  return param_1;
}

