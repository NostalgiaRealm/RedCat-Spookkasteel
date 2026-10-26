/*
 * FUN_004172d8 at 004172d8
 * undefined __register FUN_004172d8(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004172d8-00417314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004172d8(int param_1,undefined4 param_2,uint param_3)

{
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_00417315;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  FUN_00416f2c(param_1,&local_8,param_3);
  FUN_00417170(param_1,extraout_EDX,extraout_ECX);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041731c;
  puStack_14 = (undefined1 *)0x417314;
  FUN_00403db0(&local_8);
  return;
}

