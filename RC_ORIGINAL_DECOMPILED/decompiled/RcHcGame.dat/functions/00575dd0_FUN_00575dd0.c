/*
 * FUN_00575dd0 at 00575dd0
 * undefined FUN_00575dd0(void)
 * Address ranges: 00575dd0-00575ef1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00575dd0(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006416f8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x140) != '\0') {
    ExceptionList = &local_c;
    if (param_2 != 0) {
      ExceptionList = &local_c;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    FUN_00575f00();
  }
  if (*(char *)(param_1 + 0x141) != '\0') {
    if (param_2 != 0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    FUN_00576350();
  }
  if (*(char *)(param_1 + 0x140) == '\0') {
    FUN_005b2fe0();
    FUN_005b2f20();
  }
  if (*(int *)(param_1 + 0x148) == 3) {
    FUN_005b2fe0();
    FUN_005b2fa0();
    FUN_005b3000();
  }
  else {
    FUN_005b3020(0x41800000);
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0();
  }
  ExceptionList = local_c;
  return;
}

