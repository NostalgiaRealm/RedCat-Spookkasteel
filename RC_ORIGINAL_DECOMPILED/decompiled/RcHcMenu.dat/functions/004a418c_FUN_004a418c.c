/*
 * FUN_004a418c at 004a418c
 * int __register FUN_004a418c(void)
 * Address ranges: 004a418c-004a41da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004a418c(void)

{
  if (DAT_00573a30 == 0) {
    if (DAT_00573a28 == (undefined4 *)0x0) {
      FUN_00403d94("Debugfilename not init.");
    }
    DAT_00573a30 = FUN_004a4228((int)&LAB_004a4168,'\x01',DAT_00573a28);
  }
  return DAT_00573a30;
}

