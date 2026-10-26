/*
 * FUN_00407904 at 00407904
 * LPVOID __register FUN_00407904(void)
 * Address ranges: 00407904-00407946
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LPVOID FUN_00407904(void)

{
  LPVOID pvVar1;
  int in_FS_OFFSET;
  
  if (DAT_005734d0 == '\0') {
    return *(LPVOID *)(*(int *)(in_FS_OFFSET + 0x2c) + _tls_index * 4);
  }
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  FUN_004078b4();
  pvVar1 = TlsGetValue(_tls_index);
  if (pvVar1 != (LPVOID)0x0) {
    return pvVar1;
  }
  return DAT_005734e4;
}

