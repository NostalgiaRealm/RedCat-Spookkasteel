/*
 * FUN_00543d70 at 00543d70
 * undefined FUN_00543d70(void)
 * Address ranges: 00543d70-00543f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00543d70(undefined1 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063ccc8;
  local_c = ExceptionList;
  local_30 = 0;
  local_2c = param_1._0_1_;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4 = 1;
  uStack_3 = 0;
  ExceptionList = &local_c;
  FUN_00514e80(0);
  uVar9 = 0;
  uVar3 = 0;
  local_4 = 2;
  uVar2 = local_4;
  local_4 = 2;
  if (param_4 != 0) {
    do {
      pcVar8 = "";
      if (param_3 != 0) {
        pcVar8 = (char *)(param_3 + uVar9);
      }
      if (*pcVar8 == '+') {
LAB_00543df8:
        uVar5 = FUN_004eed60(local_1c,uVar3,uVar9 - uVar3);
        local_4 = 3;
        local_30 = FUN_005471e0(uVar5);
        FUN_004f15f0(local_24,&local_30);
        local_4 = 2;
        FUN_004040a0(1);
        pcVar8 = (char *)(param_3 + uVar9);
        uVar3 = uVar9;
        do {
          pcVar4 = "";
          if (param_3 != 0) {
            pcVar4 = pcVar8;
          }
          if (*pcVar4 != '+') {
            pcVar4 = "";
            if (param_3 != 0) {
              pcVar4 = pcVar8;
            }
            uVar9 = uVar3;
            if (*pcVar4 != ' ') goto LAB_00543e6d;
          }
          uVar3 = uVar3 + 1;
          pcVar8 = pcVar8 + 1;
        } while( true );
      }
      pcVar8 = "";
      if (param_3 != 0) {
        pcVar8 = (char *)(param_3 + uVar9);
      }
      if (*pcVar8 == ' ') goto LAB_00543df8;
      uVar9 = uVar9 + 1;
LAB_00543e6d:
    } while (uVar9 < param_4);
    uVar2 = local_4;
    if (uVar3 != uVar9) {
      uVar5 = FUN_004eed60(local_1c,uVar3,uVar9 - uVar3);
      local_4 = 4;
      local_30 = FUN_005471e0(uVar5);
      FUN_004f15f0(local_24,&local_30);
      local_4 = 2;
      FUN_004040a0(1);
      uVar2 = local_4;
    }
  }
  local_4 = uVar2;
  *param_1 = local_2c;
  iVar6 = FUN_0044e4c0();
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  pvVar7 = operator_new(iVar6 << 2);
  *(void **)(param_1 + 4) = pvVar7;
  uVar5 = FUN_004dddf0(local_28,local_24,pvVar7);
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  FUN_005fe5f0(local_28);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(param_3 + -1);
    }
    else {
      *(char *)(param_3 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

