/*
 * FUN_0054a4a8 at 0054a4a8
 * undefined __register FUN_0054a4a8(int param_1, undefined4 * param_2, byte * param_3, int * param_4)
 * Address ranges: 0054a4a8-0054a51d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a4a8(int param_1,undefined4 *param_2,byte *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_14;
  byte *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = (byte *)0x0;
  puStack_20 = &LAB_0054a51e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0048f7f8(*(int **)(*(int *)(param_1 + 0x3c) + 0x18),param_3);
  if ((char)uVar1 == '\0') {
    FUN_0040407c((int *)&local_14,local_c,(undefined4 *)&DAT_0054a534);
    FUN_00409690(local_14,param_4);
  }
  else {
    FUN_00403e04(param_4,local_c);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0054a525;
  puStack_20 = (undefined1 *)0x54a51d;
  FUN_00403db0((int *)&local_14);
  return;
}

