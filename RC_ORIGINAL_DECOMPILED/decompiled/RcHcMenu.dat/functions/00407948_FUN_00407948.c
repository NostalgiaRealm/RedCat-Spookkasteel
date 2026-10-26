/*
 * FUN_00407948 at 00407948
 * undefined __register FUN_00407948(void)
 * Address ranges: 00407948-00407992
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407948(void)

{
  CHAR local_10c [264];
  
  GetModuleFileNameA(DAT_005734dc,local_10c,0x105);
  _DAT_0056f118 = FUN_004066e0(local_10c);
  if (_DAT_0056f118 == (HMODULE)0x0) {
    _DAT_0056f118 = DAT_0056f10c;
  }
  FUN_004069c8((undefined4 *)&DAT_0056f108);
  return;
}

