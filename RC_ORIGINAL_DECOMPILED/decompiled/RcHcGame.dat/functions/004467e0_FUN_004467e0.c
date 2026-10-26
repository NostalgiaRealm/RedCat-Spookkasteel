/*
 * FUN_004467e0 at 004467e0
 * undefined FUN_004467e0(void)
 * Address ranges: 004467e0-00446c06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004467e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_31 [5];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006251d0;
  local_c = ExceptionList;
  local_2c[0] = (undefined1)param_1;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_00691114;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00691114,~uVar4 - 1);
  iVar2 = param_1;
  local_4 = 0;
  FUN_00442bf0(*(undefined4 *)(param_1 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_00691120;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00691120,~uVar4 - 1);
  local_4 = 1;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball1_bmp_006910f8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball1_bmp_006910f8,~uVar4 - 1);
  local_4 = 2;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball1_A_bmp_00691104;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball1_A_bmp_00691104,~uVar4 - 1);
  local_4 = 3;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball2_bmp_006910dc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball2_bmp_006910dc,~uVar4 - 1);
  local_4 = 4;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball2_A_bmp_006910e8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball2_A_bmp_006910e8,~uVar4 - 1);
  local_4 = 5;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball3_bmp_006910c0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball3_bmp_006910c0,~uVar4 - 1);
  local_4 = 6;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_eball3_A_bmp_006910cc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_eball3_A_bmp_006910cc,~uVar4 - 1);
  local_4 = 7;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006910a4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006910a4,~uVar4 - 1);
  local_4 = 8;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006910b0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006910b0,~uVar4 - 1);
  local_4 = 9;
  FUN_00442bf0(*(undefined4 *)(iVar2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00409810(s_aCeball5_bmp_00691086 + 2,&param_1);
  local_4 = 10;
  FUN_00444d50(local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  FUN_00409810(s_eball5_A_bmp_00691094,local_31);
  local_4 = 0xb;
  FUN_00444d50(local_1c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  uVar3 = __ftol();
  FUN_004041b0(uVar3);
  ExceptionList = local_c;
  return;
}

