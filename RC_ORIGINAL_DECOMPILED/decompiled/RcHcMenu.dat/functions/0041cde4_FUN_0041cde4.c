/*
 * FUN_0041cde4 at 0041cde4
 * undefined __register FUN_0041cde4(int param_1)
 * Address ranges: 0041cde4-0041ce2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cde4(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  if (*(int *)(param_1 + 0x50) == 0) {
    FUN_0041caa8(param_1);
  }
  *in_FS_OFFSET = uStackY_18;
  uStackY_18 = 0x41ce2f;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00573684);
  return;
}

