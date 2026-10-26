/*
 * FUN_004fe5b0 at 004fe5b0
 * undefined __register FUN_004fe5b0(int param_1, char param_2)
 * Address ranges: 004fe5b0-004fe5e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe5b0(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x208) != param_2) {
    *(char *)(param_1 + 0x208) = param_2;
    FUN_00435de4(param_1);
  }
  return;
}

