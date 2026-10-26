/*
 * FUN_00516830 at 00516830
 * undefined __register FUN_00516830(int param_1)
 * Address ranges: 00516830-0051685c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516830(int param_1)

{
  HKEY hKey;
  
  hKey = *(HKEY *)(param_1 + 4);
  if (hKey != (HKEY)0x0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      RegFlushKey(hKey);
    }
    else {
      RegCloseKey(hKey);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00403db0((int *)(param_1 + 0x10));
  }
  return;
}

