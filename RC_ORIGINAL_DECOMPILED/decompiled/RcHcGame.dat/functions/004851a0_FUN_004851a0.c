/*
 * FUN_004851a0 at 004851a0
 * undefined FUN_004851a0(void)
 * Address ranges: 004851a0-00485543
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004851a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_b5;
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [4];
  int iStack_90;
  undefined4 *local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629a5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = param_1;
  FUN_0051afc0(param_2,param_3,param_4);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined1 *)(param_1 + 0x39) = local_b5;
  FUN_004040a0(0);
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x3d) = local_b5;
  FUN_004040a0(0);
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x41) = local_b5;
  FUN_004040a0(0);
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x45) = local_b5;
  FUN_004040a0(0);
  local_4._0_1_ = 7;
  param_1[0x49] = 0;
  FUN_005844b0();
  local_4._0_1_ = 8;
  param_1[0x52] = 0;
  FUN_005844b0();
  local_4._0_1_ = 9;
  param_1[0x5b] = 0;
  FUN_005844b0();
  local_4._0_1_ = 10;
  param_1[100] = 0;
  FUN_005844b0();
  *param_1 = &PTR_FUN_0064e448;
  local_4._0_1_ = 0xb;
  uVar2 = FUN_005a1d60(s__Loading_ini_00693510);
  FUN_0040cad0(local_94,uVar2);
  local_4._0_1_ = 0xc;
  local_a4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar4 - 1);
  local_4._0_1_ = 0xd;
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_FadeInTime_00693408;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeInTime_00693408,~uVar4 - 1);
  local_4._0_1_ = 0xe;
  iVar3 = FUN_005a3d10(local_b4,local_a4,0x3f800000,0,0x41200000,local_94);
  local_4._0_1_ = 0xf;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b5);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  uVar2 = __ftol();
  param_1[0x14] = uVar2;
  local_4._0_1_ = 0xe;
  FUN_005a3ce0();
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar4 - 1);
  local_a4[0] = local_b5;
  local_4._0_1_ = 0x10;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_FadeOutTime_006933fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeOutTime_006933fc,~uVar4 - 1);
  local_4._0_1_ = 0x11;
  iVar3 = FUN_005a3d10(local_a4,local_b4,0x3f800000,0,0x41200000,local_94);
  local_4._0_1_ = 0x12;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b5);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  uVar2 = __ftol();
  param_1[0x15] = uVar2;
  local_4._0_1_ = 0x11;
  FUN_005a3ce0();
  local_4._0_1_ = 0x10;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0(1);
  if (iStack_90 != 0) {
    cVar1 = *(char *)(iStack_90 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_90 + -1);
    }
    else {
      *(char *)(iStack_90 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

