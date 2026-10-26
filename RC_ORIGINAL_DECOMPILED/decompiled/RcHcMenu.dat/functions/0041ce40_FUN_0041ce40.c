/*
 * FUN_0041ce40 at 0041ce40
 * undefined __register FUN_0041ce40(int param_1)
 * Address ranges: 0041ce40-0041ce64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ce40(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  return;
}

