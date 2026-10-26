/*
 * FUN_00551bd0 at 00551bd0
 * undefined FUN_00551bd0(void)
 * Address ranges: 00551bd0-00551dd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00551c34) */
/* WARNING: Removing unreachable block (ram,0x00551c45) */
/* WARNING: Removing unreachable block (ram,0x00551d12) */
/* WARNING: Removing unreachable block (ram,0x00551d23) */

int * FUN_00551bd0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int local_3c;
  undefined1 local_34 [40];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063e047;
  local_c = ExceptionList;
  local_3c = 0;
  local_4 = 1;
  uStack_50 = 0x551c05;
  ExceptionList = &local_c;
  cVar1 = FUN_005536e0();
  if (cVar1 == '\0') {
    uStack_50 = 0x551c90;
    FUN_005a2d00();
    uStack_50 = 0x551c97;
    puVar3 = (undefined1 *)FUN_005a1d60();
    param_2 = &local_5c;
    local_5c = CONCAT31(local_5c._1_3_,*puVar3);
    FUN_004040a0(0);
    FUN_0040cc00(puVar3,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_005a2d00();
    puVar4 = (undefined4 *)FUN_00596e40();
    FUN_004967f0(*puVar4);
    local_4._0_1_ = 5;
    uStack_50 = 0x551ceb;
    uStack_50 = FUN_005a1d60();
    puStack_54 = (undefined4 *)local_34;
    puStack_58 = &param_2;
    local_5c = 0x551cfd;
    piVar2 = (int *)FUN_00551840();
    if (*piVar2 != 0) {
      local_4._0_1_ = 6;
      local_3c = *piVar2;
      uStack_50 = 0x551d39;
      FUN_005844b0();
    }
    local_4._0_1_ = 5;
    if (param_2 != (undefined4 *)0x0) {
      uStack_50 = 0x551d4f;
      FUN_004098d0();
    }
    if (local_3c != 0) {
      *(undefined1 *)(local_3c + 0x34) = 1;
    }
    uStack_50 = 1;
    local_4._0_1_ = 8;
    puStack_54 = (undefined4 *)0x551d6b;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,1);
    uStack_50 = 0x551d79;
    FUN_005ab4d0();
  }
  else {
    uStack_50 = 0x551c12;
    uStack_50 = FUN_005a1d60();
    puStack_54 = &param_2;
    puStack_58 = (undefined4 *)0x551c1f;
    piVar2 = (int *)FUN_005514e0();
    if (*piVar2 != 0) {
      local_4._0_1_ = 2;
      local_3c = *piVar2;
      uStack_50 = 0x551c5a;
      FUN_005844b0();
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (param_2 != (undefined4 *)0x0) {
      uStack_50 = 0x551c70;
      FUN_004098d0();
    }
    if (local_3c != 0) {
      *(undefined1 *)(local_3c + 0x34) = 1;
    }
  }
  *param_1 = local_3c;
  if (local_3c != 0) {
    *(int *)(local_3c + 0x14) = *(int *)(local_3c + 0x14) + 1;
  }
  local_4 = local_4 & 0xffffff00;
  if ((local_3c != 0) &&
     (iVar5 = *(int *)(local_3c + 0x14) + -1, *(int *)(local_3c + 0x14) = iVar5, iVar5 == 0)) {
    uStack_50 = 0;
    puStack_54 = (undefined4 *)0x551dbb;
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return param_1;
}

