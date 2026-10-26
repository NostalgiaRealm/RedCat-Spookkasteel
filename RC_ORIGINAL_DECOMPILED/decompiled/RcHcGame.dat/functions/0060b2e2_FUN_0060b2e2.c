/*
 * FUN_0060b2e2 at 0060b2e2
 * undefined FUN_0060b2e2(void)
 * Address ranges: 0060b2e2-0060b309
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060b2e2(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_006b28bc) {
    uVar1 = FUN_0060e0ee(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_006b26b0[param_1 * 2] & 8;
}

