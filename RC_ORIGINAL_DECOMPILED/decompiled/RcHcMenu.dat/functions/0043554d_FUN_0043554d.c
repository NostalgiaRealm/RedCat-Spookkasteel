/*
 * FUN_0043554d at 0043554d
 * bool __register FUN_0043554d(int param_1, int param_2)
 * Address ranges: 0043554a-0043555a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0043554d(int param_1,int param_2)

{
  for (; (param_2 != 0 && (param_1 != param_2)); param_2 = *(int *)(param_2 + 0x24)) {
  }
  return param_2 != 0;
}

