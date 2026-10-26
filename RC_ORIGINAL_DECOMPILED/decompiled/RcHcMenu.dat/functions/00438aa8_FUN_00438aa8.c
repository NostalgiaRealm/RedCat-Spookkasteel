/*
 * FUN_00438aa8 at 00438aa8
 * undefined __register FUN_00438aa8(int param_1, int param_2)
 * Address ranges: 00438aa8-00438ac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438aa8(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 300)) {
    *(int *)(param_1 + 300) = param_2;
    FUN_00433700(param_1,0xb03b,0,0);
  }
  return;
}

