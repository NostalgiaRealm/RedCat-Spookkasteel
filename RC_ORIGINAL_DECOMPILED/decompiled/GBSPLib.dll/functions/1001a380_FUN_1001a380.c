/*
 * FUN_1001a380 at 1001a380
 * undefined FUN_1001a380(void)
 * Address ranges: 1001a380-1001a452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001a380(void)

{
  int iVar1;
  int iVar2;
  byte local_5;
  
  iVar1 = FUN_10014a00(1);
  if (iVar1 == 0) {
    return 0;
  }
  if (((local_5 & 0x20) == 0) && (iVar1 = FUN_10014a00(1), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_10019ae0();
  if (iVar1 == 0) {
    return 0;
  }
  if ((local_5 & 0x40) == 0) {
    iVar2 = FUN_100203d0();
    iVar2 = FUN_10014a00(iVar2 * *(int *)(iVar1 + 0xc));
    if (iVar2 != 0) {
      return iVar1;
    }
    FUN_10014360(iVar1);
    _DAT_1003fde8 = 0;
    return 0;
  }
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x12af,&DAT_10265ce0,0);
  return 0;
}

