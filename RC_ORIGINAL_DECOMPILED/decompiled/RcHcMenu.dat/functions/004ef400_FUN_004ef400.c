/*
 * FUN_004ef400 at 004ef400
 * undefined __register FUN_004ef400(int param_1, char param_2)
 * Address ranges: 004ef400-004ef431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ef400(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x1f8) != param_2) {
    *(char *)(param_1 + 0x1f8) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

