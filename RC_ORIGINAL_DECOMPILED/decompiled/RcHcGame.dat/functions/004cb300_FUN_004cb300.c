/*
 * FUN_004cb300 at 004cb300
 * undefined FUN_004cb300(void)
 * Address ranges: 004cb300-004cb396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004cb300(int param_1,int param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00630c70;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if ((param_3 != 0) && (ExceptionList = &local_c, *(char *)(param_1 + 0x16d) != '\0')) {
    ExceptionList = &local_c;
    FUN_004d0770(*(undefined4 *)(param_1 + 0x13c));
    *(undefined4 *)(param_1 + 0x168) = 5;
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_3 != 0) &&
     (iVar1 = *(int *)(param_3 + 0x14) + -1, *(int *)(param_3 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

