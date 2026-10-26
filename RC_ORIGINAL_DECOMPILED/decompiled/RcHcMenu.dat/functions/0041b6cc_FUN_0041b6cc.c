/*
 * FUN_0041b6cc at 0041b6cc
 * undefined __register FUN_0041b6cc(int param_1)
 * Address ranges: 0041b6cc-0041b6d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041b6cc(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}

