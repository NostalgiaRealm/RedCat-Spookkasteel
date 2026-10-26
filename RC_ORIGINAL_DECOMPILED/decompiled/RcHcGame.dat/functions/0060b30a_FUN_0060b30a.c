/*
 * FUN_0060b30a at 0060b30a
 * undefined FUN_0060b30a(void)
 * Address ranges: 0060b30a-0060b337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060b30a(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_006b28bc) {
    uVar1 = FUN_0060e0ee(param_1,0x107);
    return uVar1;
  }
  return *(ushort *)(PTR_DAT_006b26b0 + param_1 * 2) & 0x107;
}

