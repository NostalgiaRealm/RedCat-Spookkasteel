/*
 * FUN_0042c8c8 at 0042c8c8
 * undefined __register FUN_0042c8c8(int param_1, char param_2)
 * Address ranges: 0042c8c8-0042c8db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042c8c8(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x204)) {
    *(char *)(param_1 + 0x204) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

