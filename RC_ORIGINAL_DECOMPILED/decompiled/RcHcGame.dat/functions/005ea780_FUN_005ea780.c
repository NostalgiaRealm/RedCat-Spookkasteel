/*
 * FUN_005ea780 at 005ea780
 * undefined FUN_005ea780(void)
 * Address ranges: 005ea780-005ea8ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ea780(undefined4 param_1,undefined1 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 local_50 [4];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646e30;
  local_c = ExceptionList;
  local_50[0] = param_3._0_1_;
  uVar2 = 0xffffffff;
  pcVar4 = param_3;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  ExceptionList = &local_c;
  FUN_004040f0(param_3,~uVar2 - 1);
  local_4 = 0;
  local_40[0] = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  local_30 = param_3._0_1_;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar4 = &DAT_006b3f70;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar2 - 1);
  local_4._0_1_ = 2;
  FUN_00429a30(local_50);
  local_10 = param_1;
  local_4._0_1_ = 3;
  FUN_005ea8f0(&param_3,DAT_0070fb14,local_40);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  FUN_004040a0(1);
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  if (local_4c != 0) {
    cVar1 = *(char *)(local_4c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_4c + -1));
    }
    else {
      *(char *)(local_4c + -1) = cVar1 + -1;
    }
  }
  puVar3 = *(undefined1 **)(param_2 + 4);
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_005e4140(s_Link_error____s_006b10e8,puVar3);
  ExceptionList = local_c;
  return;
}

