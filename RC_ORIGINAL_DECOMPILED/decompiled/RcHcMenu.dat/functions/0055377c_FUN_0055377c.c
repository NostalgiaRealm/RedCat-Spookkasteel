/*
 * FUN_0055377c at 0055377c
 * undefined __register FUN_0055377c(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0055377c-0055379a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055377c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  bVar1 = _DAT_00574850 == 0;
  _DAT_00574850 = _DAT_00574850 + -1;
  if (bVar1) {
    DAT_00574854 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  }
  return;
}

