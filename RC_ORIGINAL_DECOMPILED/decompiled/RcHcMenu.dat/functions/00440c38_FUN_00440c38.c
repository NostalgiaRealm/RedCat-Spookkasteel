/*
 * FUN_00440c38 at 00440c38
 * uint __register FUN_00440c38(void)
 * Address ranges: 00440c38-00440c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00440c38(void)

{
  uint uVar1;
  
  uVar1 = FUN_004129d0(DAT_005737d0);
  FUN_0041298c(DAT_005737d0,uVar1 & 0xffff,'\x01');
  return uVar1;
}

