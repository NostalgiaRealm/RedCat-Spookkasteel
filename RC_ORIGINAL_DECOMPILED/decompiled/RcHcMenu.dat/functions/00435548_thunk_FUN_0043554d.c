/*
 * thunk_FUN_0043554d at 00435548
 * bool __register thunk_FUN_0043554d(int param_1, int param_2)
 * Address ranges: 00435548-00435549
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_0043554d
 */

bool thunk_FUN_0043554d(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}

