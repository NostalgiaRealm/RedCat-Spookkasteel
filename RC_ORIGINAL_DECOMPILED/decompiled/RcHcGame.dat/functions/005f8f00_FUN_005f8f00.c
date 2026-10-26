/*
 * FUN_005f8f00 at 005f8f00
 * undefined FUN_005f8f00(void)
 * Address ranges: 005f8f00-005f908c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f8f00(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006487f8;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0xc) == '\0') &&
     ((param_2 < *(int *)(param_1 + 4) || (*(int *)(param_1 + 8) < param_2)))) {
    local_2c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &local_c;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_3c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    local_4 = 0;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4._0_1_ = 1;
    uVar2 = FUN_005e7110(local_1c,s_array__index__d_out_of_bounds__d_006b1590,param_2,
                         *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005ea160(0xbbf,uVar2,local_3c,local_2c);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    if (local_38 != 0) {
      cVar1 = *(char *)(local_38 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_38 + -1));
      }
      else {
        *(char *)(local_38 + -1) = cVar1 + -1;
      }
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_28 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_28 + -1));
    }
  }
  ExceptionList = local_c;
  return;
}

