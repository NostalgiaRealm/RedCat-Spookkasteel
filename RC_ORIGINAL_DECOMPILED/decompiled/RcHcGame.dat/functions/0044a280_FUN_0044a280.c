/*
 * FUN_0044a280 at 0044a280
 * undefined FUN_0044a280(void)
 * Address ranges: 0044a280-0044a2fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0044a280(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006254d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044b130(param_2);
  *param_1 = &PTR_FUN_0064cfac;
  local_4 = 0;
  FUN_0044c1b0(DAT_006913e8,DAT_006913ec,DAT_006913f0,_DAT_006913f4,0x43480000,0);
  ExceptionList = local_c;
  return param_1;
}

