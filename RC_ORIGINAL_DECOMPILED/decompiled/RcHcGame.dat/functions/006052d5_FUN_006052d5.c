/*
 * FUN_006052d5 at 006052d5
 * undefined FUN_006052d5(void)
 * Address ranges: 006052d5-006052fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_006052d5(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_0060526c(param_2 - *(uint *)(param_1 + 8),0);
  }
  else {
    FUN_00605866(param_2,0xffffffff);
  }
  return;
}

