/*
 * FUN_00418134 at 00418134
 * undefined __register FUN_00418134(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00418134-004181ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418134(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004181ca;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_1c = (undefined1 *)param_4;
  puStack_20 = (undefined1 *)0x418153;
  FUN_00417fe0();
  puStack_1c = (undefined1 *)0x418165;
  FUN_00403e48((int *)&local_8,*(int *)(*(int *)(param_4 + -4) + 0x2c));
  puStack_20 = &LAB_004181ad;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403db0((int *)(*(int *)(param_4 + -4) + 0x2c));
  FUN_00417774(*(int *)(param_4 + -4),param_1,extraout_ECX);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004181b4;
  puStack_20 = (undefined1 *)0x4181ac;
  FUN_00403e04((int *)(*(int *)(param_4 + -4) + 0x2c),local_8);
  return;
}

