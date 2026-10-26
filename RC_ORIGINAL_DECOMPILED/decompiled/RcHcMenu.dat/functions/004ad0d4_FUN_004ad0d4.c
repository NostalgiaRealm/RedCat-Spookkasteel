/*
 * FUN_004ad0d4 at 004ad0d4
 * undefined __register FUN_004ad0d4(int param_1, int param_2)
 * Address ranges: 004ad0d4-004ad102
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad0d4(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x18) != param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    FUN_004ad164(param_1,param_1);
  }
  return;
}

