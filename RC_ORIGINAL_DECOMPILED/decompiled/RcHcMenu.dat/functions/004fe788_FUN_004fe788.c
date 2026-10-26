/*
 * FUN_004fe788 at 004fe788
 * undefined __register FUN_004fe788(int param_1, char * param_2)
 * Address ranges: 004fe788-004fe7b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fe788(int param_1,char *param_2)

{
  if (*param_2 == '\r') {
    *param_2 = '\0';
  }
  FUN_004377ac(param_1,param_2);
  return;
}

