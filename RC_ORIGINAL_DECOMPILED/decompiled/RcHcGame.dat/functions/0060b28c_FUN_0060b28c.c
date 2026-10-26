/*
 * FUN_0060b28c at 0060b28c
 * undefined FUN_0060b28c(void)
 * Address ranges: 0060b28c-0060b2b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060b28c(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_006b28bc) {
    uVar1 = FUN_0060e0ee(param_1,0x103);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_006b26b0 + param_1 * 2) & 0x103;
}

