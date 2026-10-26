/*
 * FUN_10001050 at 10001050
 * undefined FUN_10001050(void)
 * Address ranges: 10001050-100010aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001050(void)

{
  int iVar1;
  uint uVar2;
  char local_10 [16];
  
  FUN_100011b0(0,local_10);
  iVar1 = _strncmp(local_10,s_AuthenticAMD_10021038,0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_100010b0(0x80000000);
    if (iVar1 != 0) {
      uVar2 = FUN_10001130(0x80000001);
      if ((uVar2 & 0x800000) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

