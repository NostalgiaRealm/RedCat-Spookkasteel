/*
 * FUN_00592990 at 00592990
 * undefined FUN_00592990(void)
 * Address ranges: 00592990-00592a1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00592990(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006438b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0060ca3d(local_20);
  uVar2 = FUN_0060d240(local_20);
  uVar2 = FUN_005ae390(local_1c,s_End_run__s_006a6690,uVar2);
  local_4 = 0;
  FUN_005aff00(uVar2);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return;
}

