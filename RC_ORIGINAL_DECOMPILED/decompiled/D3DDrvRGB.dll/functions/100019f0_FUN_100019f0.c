/*
 * FUN_100019f0 at 100019f0
 * undefined __cdecl FUN_100019f0(int param_1, int param_2)
 * Address ranges: 100019f0-10001a34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100019f0(int param_1,int param_2)

{
  if (param_1 != DAT_10016d94) {
    (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x13,param_1);
    DAT_10016d94 = param_1;
  }
  if (param_2 != DAT_10016d98) {
    (**(code **)(*DAT_1001bcd0 + 0x50))(DAT_1001bcd0,0x14,param_2);
    DAT_10016d98 = param_2;
  }
  return;
}

