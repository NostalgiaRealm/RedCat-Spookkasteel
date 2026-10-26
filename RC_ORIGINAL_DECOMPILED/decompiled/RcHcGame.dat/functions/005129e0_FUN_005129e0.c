/*
 * FUN_005129e0 at 005129e0
 * undefined FUN_005129e0(void)
 * Address ranges: 005129e0-00512a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005129e0(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006376e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004fdf50(*(undefined4 *)(param_1 + 0x2c),1,&param_2);
  FUN_0050e870();
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

