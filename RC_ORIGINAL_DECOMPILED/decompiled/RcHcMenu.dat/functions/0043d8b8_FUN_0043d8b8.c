/*
 * FUN_0043d8b8 at 0043d8b8
 * undefined __register FUN_0043d8b8(int param_1, int param_2)
 * Address ranges: 0043d8b8-0043d8ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d8b8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0043f270(*(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x28));
  }
  *(int *)(param_1 + 0x2c) = param_2;
  if (param_2 != 0) {
    FUN_0043f2b4(param_2,*(int *)(param_1 + 0x28));
    FUN_00418fe0(*(int *)(param_1 + 0x2c),param_1,extraout_ECX);
  }
  return;
}

