/*
 * FUN_005d5c60 at 005d5c60
 * undefined FUN_005d5c60(void)
 * Address ranges: 005d5c60-005d5c7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005d5c60(int param_1,uint *param_2)

{
  if (param_2 == (uint *)0x0) {
    param_2 = *(uint **)(param_1 + 0xfc8);
  }
  return -(uint)(*(int *)(*param_2 + 0x10) != 0x3f2) & *param_2;
}

