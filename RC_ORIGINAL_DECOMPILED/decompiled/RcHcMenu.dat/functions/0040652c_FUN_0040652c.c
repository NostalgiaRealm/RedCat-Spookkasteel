/*
 * FUN_0040652c at 0040652c
 * undefined __register FUN_0040652c(LPCSTR param_1)
 * Address ranges: 00406526-00406537
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040652c(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}

