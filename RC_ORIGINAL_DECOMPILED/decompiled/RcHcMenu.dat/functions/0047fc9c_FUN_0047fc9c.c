/*
 * FUN_0047fc9c at 0047fc9c
 * bool __register FUN_0047fc9c(undefined4 param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0047fc9c-0047fcbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0047fc9c(undefined4 param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  
  sVar1 = thunk_FUN_00478ffa((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f));
  return sVar1 == 0;
}

