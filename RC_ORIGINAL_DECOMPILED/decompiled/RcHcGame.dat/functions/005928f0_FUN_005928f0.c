/*
 * FUN_005928f0 at 005928f0
 * undefined FUN_005928f0(void)
 * Address ranges: 005928f0-00592981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005928f0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643898;
  local_c = ExceptionList;
  puVar2 = &DAT_00698948;
  if (param_2 == 0) {
    puVar2 = &DAT_00698944;
  }
  ExceptionList = &local_c;
  uVar3 = FUN_005ae390(local_1c,s__s___s___d__006a6680,param_1,puVar2,param_2);
  local_4 = 0;
  FUN_005aff00(uVar3);
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

