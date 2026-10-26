/*
 * FUN_00481854 at 00481854
 * undefined __register FUN_00481854(int param_1)
 * Address ranges: 00481854-00481867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481854(int param_1)

{
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  if (*(int *)(param_1 + 0x5c) == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
  }
  return;
}

