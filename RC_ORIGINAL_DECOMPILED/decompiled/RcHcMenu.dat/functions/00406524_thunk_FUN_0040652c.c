/*
 * thunk_FUN_0040652c at 00406524
 * undefined __register thunk_FUN_0040652c(LPCSTR param_1)
 * Address ranges: 00406524-00406525
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_0040652c
 */

void thunk_FUN_0040652c(LPCSTR param_1)

{
  for (; (*param_1 != '\0' && (*param_1 != '\\')); param_1 = CharNextA(param_1)) {
  }
  return;
}

