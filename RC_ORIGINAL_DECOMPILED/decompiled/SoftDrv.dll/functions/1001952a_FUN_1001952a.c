/*
 * FUN_1001952a at 1001952a
 * undefined FUN_1001952a(void)
 * Address ranges: 1001952a-10019571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001952a(undefined4 param_1)

{
  DAT_1020fd68 = HeapAlloc(DAT_1020fd70,0,0x140);
  if (DAT_1020fd68 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1020fd60 = 0;
  DAT_1020fd64 = 0;
  DAT_1020fd5c = DAT_1020fd68;
  DAT_1020fd6c = param_1;
  DAT_1020fd54 = 0x10;
  return 1;
}

