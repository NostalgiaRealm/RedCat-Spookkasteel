/*
 * FUN_00449164 at 00449164
 * undefined __register FUN_00449164(int param_1, int param_2)
 * Address ranges: 00449164-0044917a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449164(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00449680(*(int *)(param_1 + 4));
  return;
}

