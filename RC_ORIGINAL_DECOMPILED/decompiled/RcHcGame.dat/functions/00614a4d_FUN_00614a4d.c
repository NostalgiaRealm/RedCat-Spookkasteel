/*
 * FUN_00614a4d at 00614a4d
 * undefined FUN_00614a4d(void)
 * Address ranges: 00614a4d-00614a91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00614a4d(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (*DAT_00710054 == '\0') {
    uVar1 = 2;
  }
  else {
    if (*DAT_00710054 == 'A') {
      DAT_00710054 = DAT_00710054 + 1;
      uVar1 = FUN_00614e92("{flat}");
      FUN_00614df0(uVar1);
      return param_1;
    }
    uVar1 = 1;
  }
  FUN_00614fc6(uVar1);
  return param_1;
}

