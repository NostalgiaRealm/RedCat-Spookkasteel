/*
 * FUN_0060af1b at 0060af1b
 * undefined FUN_0060af1b(void)
 * Address ranges: 0060af1b-0060af6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0060af1b(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = param_2;
  uVar1 = FUN_006108f9(&local_24,param_3,&stack0x00000010);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_006107e4(0,&local_24);
  }
  else {
    *local_24 = 0;
  }
  return uVar1;
}

