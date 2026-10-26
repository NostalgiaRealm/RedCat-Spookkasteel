/*
 * FUN_00402ecc at 00402ecc
 * undefined4 __register FUN_00402ecc(void)
 * Address ranges: 00402ecc-00402efa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00402ecc(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = GetKeyboardType(0);
  if (iVar1 == 7) {
    uVar2 = GetKeyboardType(1);
    if (((uVar2 & 0xff00) == 0xd00) || ((uVar2 & 0xff00) == 0x400)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

