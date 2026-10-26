/*
 * FUN_004078b4 at 004078b4
 * undefined __register FUN_004078b4(void)
 * Address ranges: 004078b4-00407902
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004078b4(void)

{
  HLOCAL lpTlsValue;
  
  if (_tls_index == 0xffffffff) {
    FUN_00403d88(0xe2);
  }
  lpTlsValue = LocalAlloc(0x40,0x10);
  if (lpTlsValue == (HLOCAL)0x0) {
    FUN_00403d88(0xe2);
  }
  else {
    TlsSetValue(_tls_index,lpTlsValue);
  }
  DAT_005734e4 = lpTlsValue;
  return;
}

