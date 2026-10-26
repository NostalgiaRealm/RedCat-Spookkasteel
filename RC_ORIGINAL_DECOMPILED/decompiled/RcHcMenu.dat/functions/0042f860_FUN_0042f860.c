/*
 * FUN_0042f860 at 0042f860
 * undefined __register FUN_0042f860(char * param_1)
 * Address ranges: 0042f860-0042f872
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042f860(char *param_1)

{
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    return;
  }
  if (*param_1 == '\x01') {
    *param_1 = '\0';
  }
  return;
}

