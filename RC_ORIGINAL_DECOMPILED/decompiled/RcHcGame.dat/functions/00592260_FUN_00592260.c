/*
 * FUN_00592260 at 00592260
 * undefined FUN_00592260(void)
 * Address ranges: 00592260-00592510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00592260(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_4c [16];
  undefined1 local_3c;
  undefined1 local_2c [24];
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643860;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffa8;
  local_3c = param_3._3_1_;
  ExceptionList = &pvStack_10;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
  local_8 = 1;
  FUN_005bb540(FUN_005630e0);
  iVar2 = FUN_005a1fe0();
  iVar2 = iVar2 + 1;
  if ((5 < iVar2) || (iVar2 < 1)) {
    iVar2 = 1;
  }
  FUN_005a2010(iVar2);
  FUN_00516230();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    FUN_005af940();
  }
  local_4c[0] = param_3._3_1_;
  FUN_004040a0(0);
  local_8._0_1_ = 2;
  FUN_005afda0(FUN_005b1790);
  FUN_005afda0(&LAB_005afe00);
  FUN_005afda0(&LAB_005afe20);
  local_2c[0] = param_3._3_1_;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s___ADAMWIN_INI_00693bbc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___ADAMWIN_INI_00693bbc,~uVar3 - 1);
  local_8._0_1_ = 3;
  FUN_005ac2e0(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004040a0(1);
  FUN_005a0700(&LAB_005af3a0);
  FUN_0060a496(0x108e);
  FUN_00592710();
  cVar1 = FUN_00592250();
  if (cVar1 == '\0') goto LAB_0059249d;
  iVar2 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar2 = FUN_004bc480();
  }
  local_2c[0] = param_3._3_1_;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(param_3,~uVar3 - 1);
  local_8._0_1_ = 4;
  FUN_004c2a00(local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004040a0(1);
  FUN_004c2b40(param_1);
  FUN_004c2e00();
  if ((*(char *)(iVar2 + 0x34) == '\0') || (*(int *)(iVar2 + 0x2c) != 0)) {
LAB_00592436:
    FUN_004be330(local_4c);
  }
  else {
    cVar1 = FUN_004c2b50();
    if (cVar1 != '\0') goto LAB_00592436;
    FUN_005afe30(s_No__BSP_file_selected__quitting_006a6530);
  }
  FUN_005af940();
  FUN_004bc650(iVar2);
  local_2c[0] = param_3._3_1_;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_WinMain___after_CAdamApplication_006a64fc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WinMain___after_CAdamApplication_006a64fc,~uVar3 - 1);
  local_8._0_1_ = 5;
  FUN_005ab770(0,local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004040a0(1);
LAB_0059249d:
  FUN_0059b0d0();
  FUN_005a4480();
  local_2c[0] = param_3._3_1_;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar4 = s_WinMain___after_CDaviIniFileSyst_006a64c4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WinMain___after_CDaviIniFileSyst_006a64c4,~uVar3 - 1);
  local_8._0_1_ = 6;
  FUN_005ab770(0,local_2c);
  local_8._0_1_ = 2;
  FUN_004040a0(1);
  FUN_005afe30(s____WinMain___cleanup_finished____006a64a0);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004040a0(1);
  FUN_005925f1();
  return;
}

