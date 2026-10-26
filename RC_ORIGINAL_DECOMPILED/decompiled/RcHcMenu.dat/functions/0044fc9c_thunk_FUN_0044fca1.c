/*
 * thunk_FUN_0044fca1 at 0044fc9c
 * int __register thunk_FUN_0044fca1(int param_1)
 * Address ranges: 0044fc9c-0044fc9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_0044fca1
 */

int thunk_FUN_0044fca1(int param_1)

{
  for (; (param_1 != 0 && (*(char *)(param_1 + 0x89) == '\0')); param_1 = *(int *)(param_1 + 0x24))
  {
  }
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 0x10) != 0)) {
    param_1 = 0;
  }
  return param_1;
}

