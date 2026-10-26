/*
 * FUN_0053bc70 at 0053bc70
 * undefined FUN_0053bc70(void)
 * Address ranges: 0053bc70-0053bcca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053bc70(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063bf11;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    FUN_005ab450(param_2);
    param_1[5] = *(undefined4 *)(param_2 + 0x14);
    param_1[6] = *(undefined4 *)(param_2 + 0x18);
    *param_1 = &PTR_FUN_0064f790;
  }
  ExceptionList = local_c;
  return;
}

