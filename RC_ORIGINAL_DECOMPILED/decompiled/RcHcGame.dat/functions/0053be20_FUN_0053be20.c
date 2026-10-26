/*
 * FUN_0053be20 at 0053be20
 * undefined FUN_0053be20(void)
 * Address ranges: 0053be20-0053bf2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053be20(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bf70;
  local_c = ExceptionList;
  local_30[0] = *param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_20 = *param_3;
  local_4 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0040cc00(param_3,0,0xffffffff);
  local_10 = param_4;
  local_4 = 1;
  FUN_0053c190(*(undefined4 *)(param_1 + 0x20),1,local_30);
  if (local_1c != 0) {
    cVar1 = *(char *)(local_1c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_1c + -1));
    }
    else {
      *(char *)(local_1c + -1) = cVar1 + -1;
    }
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (local_2c != 0) {
    cVar1 = *(char *)(local_2c + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_2c + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_2c + -1);
  }
  ExceptionList = local_c;
  return;
}

