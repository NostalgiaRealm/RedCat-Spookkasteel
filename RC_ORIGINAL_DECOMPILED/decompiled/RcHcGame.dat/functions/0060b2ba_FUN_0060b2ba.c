/*
 * FUN_0060b2ba at 0060b2ba
 * undefined FUN_0060b2ba(void)
 * Address ranges: 0060b2ba-0060b2e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060b2ba(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_006b28bc) {
    uVar1 = FUN_0060e0ee(param_1,4);
    return uVar1;
  }
  return (byte)PTR_DAT_006b26b0[param_1 * 2] & 4;
}

