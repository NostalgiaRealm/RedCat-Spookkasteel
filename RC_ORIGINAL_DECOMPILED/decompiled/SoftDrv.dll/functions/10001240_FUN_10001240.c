/*
 * FUN_10001240 at 10001240
 * undefined FUN_10001240(void)
 * Address ranges: 10001240-100012b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001240(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char local_10 [16];
  
  FUN_100011b0(0,local_10);
  iVar1 = _strncmp(local_10,s_AuthenticAMD_10021038,0xc);
  if (iVar1 == 0) {
    iVar1 = FUN_100010b0(0x80000000);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 0x80000001;
  }
  else {
    iVar1 = _strncmp(local_10,s_GenuineIntel_10021048,0xc);
    if (iVar1 != 0) {
      return 0;
    }
    uVar3 = 1;
  }
  uVar2 = FUN_10001130(uVar3);
  if ((uVar2 & 0x800000) == 0) {
    return 0;
  }
  return 1;
}

