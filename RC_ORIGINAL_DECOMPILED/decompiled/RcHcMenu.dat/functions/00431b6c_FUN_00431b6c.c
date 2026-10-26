/*
 * FUN_00431b6c at 00431b6c
 * undefined __register FUN_00431b6c(int param_1, char param_2)
 * Address ranges: 00431b6c-00431b8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431b6c(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x51)) {
    *(char *)(param_1 + 0x51) = param_2;
    FUN_00431e58(param_1);
  }
  return;
}

