/*
 * FUN_10018feb at 10018feb
 * undefined FUN_10018feb(void)
 * Address ranges: 10018feb-1001903b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10018feb(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  uVar1 = FUN_1001a5dd(&local_24,param_2,param_3);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1001a4c5(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}

