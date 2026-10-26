/*
 * FUN_100321cd at 100321cd
 * undefined FUN_100321cd(void)
 * Address ranges: 100321cd-100321f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100321cd(int param_1)

{
  uint uVar1;
  
  if (1 < DAT_1003d32c) {
    uVar1 = FUN_1002c371(param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_1003d120[param_1 * 2] & 8;
}

