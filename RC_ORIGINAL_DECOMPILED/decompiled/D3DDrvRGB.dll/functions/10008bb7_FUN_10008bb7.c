/*
 * FUN_10008bb7 at 10008bb7
 * int __cdecl FUN_10008bb7(undefined1 * param_1, byte * param_2)
 * Address ranges: 10008bb7-10008c08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10008bb7(undefined1 *param_1,byte *param_2)

{
  int iVar1;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_24 = param_1;
  local_18 = 0x42;
  local_20 = 0x7fffffff;
  iVar1 = FUN_10009ddd((int *)&local_24,param_2,(undefined4 *)&stack0x0000000c);
  local_20 = local_20 + -1;
  if (local_20 < 0) {
    FUN_1000b051(0,(int *)&local_24);
  }
  else {
    *local_24 = 0;
  }
  return iVar1;
}

