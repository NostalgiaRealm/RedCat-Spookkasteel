/*
 * FUN_0047c5b1 at 0047c5b1
 * undefined4 __register FUN_0047c5b1(void)
 * Address ranges: 0047c5b1-0047c5e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047c5b1(void)

{
  DWORD DVar1;
  undefined2 uVar2;
  
  DVar1 = GetLastError();
  uVar2 = (undefined2)(DVar1 - 4 >> 0x10);
  if (1 < DVar1 - 2) {
    if (DVar1 == 0xe) {
      return 0x2501;
    }
    uVar2 = 0;
    if (DVar1 != 0x7e) {
      uVar2 = 0;
      if (DVar1 - 0xa1 != 0) {
        return CONCAT22((short)(DVar1 - 0xa1 >> 0x10),0x2109);
      }
    }
  }
  return CONCAT22(uVar2,0x2108);
}

