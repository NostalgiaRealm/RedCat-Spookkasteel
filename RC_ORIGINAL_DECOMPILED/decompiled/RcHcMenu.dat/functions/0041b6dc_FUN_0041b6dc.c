/*
 * FUN_0041b6dc at 0041b6dc
 * undefined __register FUN_0041b6dc(int param_1)
 * Address ranges: 0041b6dc-0041b6e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041b6dc(int param_1)

{
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x14) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  }
  return;
}

