/*
 * FUN_00608126 at 00608126
 * undefined FUN_00608126(void)
 * Address ranges: 00608126-0060814b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00608126(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_004eeef0(param_2 - *(uint *)(param_1 + 8),0);
  }
  else {
    FUN_0040c9b0(param_2,0xffffffff);
  }
  return;
}

