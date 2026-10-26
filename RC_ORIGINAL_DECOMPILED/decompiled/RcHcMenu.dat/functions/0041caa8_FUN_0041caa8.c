/*
 * FUN_0041caa8 at 0041caa8
 * undefined __register FUN_0041caa8(int param_1)
 * Address ranges: 0041caa8-0041cacc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041caa8(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}

