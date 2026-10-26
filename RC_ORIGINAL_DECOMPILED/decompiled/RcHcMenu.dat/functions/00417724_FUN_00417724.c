/*
 * FUN_00417724 at 00417724
 * undefined __register FUN_00417724(int param_1, undefined4 param_2)
 * Address ranges: 00417724-00417766
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417724(int param_1,undefined4 param_2)

{
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00417767;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403f58((int *)&local_8,param_2);
  FUN_00418e38(param_1,local_8,extraout_ECX);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041776e;
  puStack_18 = (undefined1 *)0x417766;
  FUN_00403db0((int *)&local_8);
  return;
}

