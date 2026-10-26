/*
 * FUN_004f64c0 at 004f64c0
 * undefined FUN_004f64c0(void)
 * Address ranges: 004f64c0-004f689c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004f64c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_244 [4];
  char *local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined1 local_234 [4];
  char *local_230;
  undefined1 local_224 [16];
  undefined1 local_214 [16];
  undefined1 local_204 [16];
  undefined1 local_1f4 [232];
  undefined4 local_10c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634bd8;
  pvStack_c = ExceptionList;
  pcVar7 = *(char **)(param_1 + 0x20);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "";
  }
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(pcVar7,~uVar4 - 1);
  local_4 = 0;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s_NrSecrets_00694b2c;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_NrSecrets_00694b2c,~uVar4 - 1);
  local_4._0_1_ = 1;
  uVar2 = FUN_00436f90(local_1f4);
  local_4._0_1_ = 2;
  FUN_005ac9d0(local_214,local_224,0,uVar2,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_004040a0(1);
  pcVar7 = "";
  if (*(char **)(param_1 + 0x20) != (char *)0x0) {
    pcVar7 = *(char **)(param_1 + 0x20);
  }
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar8 = local_240;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar7 = s_NrGrobbers_0069c978;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = s_NrGrobbers_0069c978;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)local_230 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_230 = local_230 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *local_230 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_230 = local_230 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4._0_1_ = 8;
  uVar2 = FUN_00436f90(local_204);
  local_4._0_1_ = 9;
  FUN_005ac9d0(local_234,local_244,0,uVar2,0);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (local_240 != (char *)0x0) {
    cVar1 = local_240[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_240 + -1);
    }
    else {
      local_240[-1] = cVar1 + -1;
    }
  }
  local_240 = (char *)0x0;
  local_23c = 0;
  local_238 = 0;
  uVar2 = FUN_004fae60();
  FUN_004f3d80(uVar2);
  FUN_004fee20(uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x3f4);
  FUN_004f3d80(uVar2);
  FUN_004fed60(uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x3f0);
  puVar9 = local_10c;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar2);
  FUN_005acdb0(local_10c);
  uVar2 = *(undefined4 *)(param_1 + 0x3fc);
  FUN_004f3d80(uVar2);
  FUN_004fedc0(uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x3f8);
  puVar9 = local_10c;
  for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,uVar2);
  FUN_005acdb0(local_10c);
  uVar2 = *(undefined4 *)(param_1 + 0x400);
  FUN_004f3d80(uVar2);
  FUN_004fee80(uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x404);
  FUN_004f3d80(uVar2);
  FUN_004feee0(uVar2);
  piVar3 = (int *)FUN_004f3d80();
  (**(code **)(*piVar3 + 4))();
  FUN_005ad1a0();
  FUN_005ad1a0();
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x3fc) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e4) = 0xffffffff;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005acca0();
  local_4 = 0xffffffff;
  FUN_005acca0();
  ExceptionList = pvStack_c;
  return;
}

