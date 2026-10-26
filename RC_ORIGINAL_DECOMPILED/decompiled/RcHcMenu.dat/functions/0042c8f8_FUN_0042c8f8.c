/*
 * FUN_0042c8f8 at 0042c8f8
 * undefined __register FUN_0042c8f8(int param_1, char param_2)
 * Address ranges: 0042c8f8-0042c90b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c8f8(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 500)) {
    *(char *)(param_1 + 500) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

