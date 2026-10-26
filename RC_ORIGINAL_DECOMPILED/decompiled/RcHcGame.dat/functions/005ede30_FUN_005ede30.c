/*
 * FUN_005ede30 at 005ede30
 * undefined FUN_005ede30(void)
 * Address ranges: 005ede30-005edecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005ede30(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647378;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = FUN_0040cad0(local_1c,*(int *)(param_1 + 8) + 0xc,&DAT_0069fafc);
  local_4 = 0;
  FUN_0044e370(param_2,uVar2,param_1 + 0xc);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_2;
    }
    FUN_005fe5f0((char *)(local_18 + -1));
  }
  ExceptionList = local_c;
  return param_2;
}

