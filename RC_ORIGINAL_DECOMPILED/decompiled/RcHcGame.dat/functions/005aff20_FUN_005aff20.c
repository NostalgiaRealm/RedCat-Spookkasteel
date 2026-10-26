/*
 * FUN_005aff20 at 005aff20
 * undefined FUN_005aff20(void)
 * Address ranges: 005aff20-005affd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005aff20(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646128;
  local_c = ExceptionList;
  puVar2 = *(undefined1 **)(param_3 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  ExceptionList = &local_c;
  FUN_005ae390(local_1c,s__s___d_____s_006a9160,param_1,param_2,puVar2);
  local_4 = 0;
  puVar2 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_005b1790(puVar2);
  puVar2 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_005b1740(puVar2);
  if (local_18 != (undefined1 *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_18[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_18 + -1);
  }
  ExceptionList = local_c;
  return;
}

