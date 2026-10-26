/*
 * thunk_FUN_004444aa at 004444a4
 * undefined __register thunk_FUN_004444aa(int param_1, int param_2)
 * Address ranges: 004444a4-004444a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004444aa
 */

void thunk_FUN_004444aa(int param_1,int param_2)

{
  for (; (0 < param_2 && (param_1 != 0)); param_1 = *(int *)(param_1 + 0x58)) {
    param_2 = param_2 + -1;
  }
  return;
}

