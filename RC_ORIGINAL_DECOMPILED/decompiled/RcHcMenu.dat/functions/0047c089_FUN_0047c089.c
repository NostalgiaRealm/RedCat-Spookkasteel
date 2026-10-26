/*
 * FUN_0047c089 at 0047c089
 * undefined __register FUN_0047c089(void)
 * Address ranges: 0047c089-0047c0a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047c089(void)

{
  if (DAT_005713b8 != 0) {
    DAT_005713b8 = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_00573920);
  }
  return;
}

