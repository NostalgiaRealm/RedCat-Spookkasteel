/*
 * FUN_0060d588 at 0060d588
 * undefined FUN_0060d588(void)
 * Address ranges: 0060d588-0060d5d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060d588(undefined1 *param_1,undefined4 param_2)

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
  uVar1 = FUN_006108f9(&local_24,param_2,&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_006107e4(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}

