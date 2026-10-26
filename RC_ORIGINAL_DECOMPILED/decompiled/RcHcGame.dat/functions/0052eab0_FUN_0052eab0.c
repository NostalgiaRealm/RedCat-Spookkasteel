/*
 * FUN_0052eab0 at 0052eab0
 * undefined FUN_0052eab0(void)
 * Address ranges: 0052eab0-0052ec20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_0052eab0(undefined1 *param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  char local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a438;
  local_c = ExceptionList;
  local_3c[0] = param_3;
  uVar3 = 0xffffffff;
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
  ExceptionList = &local_c;
  FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
  local_4 = 0;
  FUN_004e5980(local_2c,param_2,local_3c,0);
  local_4._0_1_ = 2;
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
  if (param_3 != '\0') {
    uVar2 = FUN_005ae390(local_1c,&DAT_006a0628);
    local_4._0_1_ = 3;
    FUN_0045db40(uVar2,0,0xffffffff);
    local_4._0_1_ = 2;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  *param_1 = local_2c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_28 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0(local_28 + -1);
  }
  ExceptionList = local_c;
  return param_1;
}

