/*
 * FUN_0047c761 at 0047c761
 * undefined4 __register FUN_0047c761(void)
 * Address ranges: 0047c761-0047c7b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0047c77f) */

undefined4 FUN_0047c761(void)

{
  int iVar1;
  
  iVar1 = FUN_0047c0a8();
  if (iVar1 != 0) {
    if (DAT_00571380 != 0) {
      FUN_0047c57c();
      DAT_00571380 = 0;
      DAT_005713ae = 0;
    }
    FUN_0047c089();
  }
  return 0;
}

