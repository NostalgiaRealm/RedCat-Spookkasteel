/*
 * FUN_00481830 at 00481830
 * undefined __register FUN_00481830(int param_1)
 * Address ranges: 00481830-00481853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00481830(int param_1)

{
  if (*(int *)(param_1 + 0x5c) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573958);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    FUN_00481868(param_1);
    return;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}

