/*
 * FUN_004449e8 at 004449e8
 * undefined __register FUN_004449e8(int param_1, int param_2)
 * Address ranges: 004449e8-00444a21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004449e8(int param_1,int param_2)

{
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_0043f270(*(int *)(param_1 + 0x3c),*(int *)(param_1 + 0x38));
  }
  *(int *)(param_1 + 0x3c) = param_2;
  if (param_2 != 0) {
    FUN_0043f2b4(param_2,*(int *)(param_1 + 0x38));
    FUN_00418fe0(*(int *)(param_1 + 0x3c),param_1,extraout_ECX);
  }
  FUN_004442b0(param_1);
  return;
}

