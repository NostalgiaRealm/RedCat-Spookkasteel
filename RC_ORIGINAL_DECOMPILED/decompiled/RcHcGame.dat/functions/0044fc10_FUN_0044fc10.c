/*
 * FUN_0044fc10 at 0044fc10
 * undefined FUN_0044fc10(void)
 * Address ranges: 0044fc10-0044ff9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0044fc10(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625f28;
  local_c = ExceptionList;
  local_2c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917e0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917e0,~uVar4 - 1);
  local_4 = 0;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917ec;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917ec,~uVar4 - 1);
  local_4 = 1;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917c8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917c8,~uVar4 - 1);
  local_4 = 2;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917d4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917d4,~uVar4 - 1);
  local_4 = 3;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917b0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917b0,~uVar4 - 1);
  local_4 = 4;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917bc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917bc,~uVar4 - 1);
  local_4 = 5;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_00691798;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_00691798,~uVar4 - 1);
  local_4 = 6;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  local_2c[0] = (undefined1)param_2;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006917a4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006917a4,~uVar4 - 1);
  local_4 = 7;
  FUN_00442bf0(*(undefined4 *)(param_2 + 8),local_2c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  iVar2 = __ftol();
  if ((iVar2 != -1) && (iVar2 < 0)) {
    local_1c[0] = (undefined1)param_2;
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
    local_4 = 8;
    pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                  s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(int *)(param_1 + 0x20c) = iVar2;
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x218) = 1;
  ExceptionList = local_c;
  return;
}

