/*
 * FUN_00455648 at 00455648
 * undefined __register FUN_00455648(int param_1, char param_2)
 * Address ranges: 00455648-00455655
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455648(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x38)) {
    *(char *)(param_1 + 0x38) = param_2;
    FUN_004555bc(param_1);
  }
  return;
}

