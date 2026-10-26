/*
 * FUN_00417024 at 00417024
 * undefined __register FUN_00417024(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 00417024-0041705f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417024(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00417060;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  do {
    FUN_00416f2c(param_1,&local_8,param_3);
    param_3 = extraout_ECX;
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00417067;
  puStack_14 = (undefined1 *)0x41705f;
  FUN_00403db0(&local_8);
  return;
}

