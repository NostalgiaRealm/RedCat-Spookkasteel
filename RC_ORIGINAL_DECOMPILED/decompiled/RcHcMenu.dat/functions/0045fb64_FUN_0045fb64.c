/*
 * FUN_0045fb64 at 0045fb64
 * undefined __register FUN_0045fb64(int param_1, int param_2)
 * Address ranges: 0045fb64-0045fb87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fb64(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return;
}

