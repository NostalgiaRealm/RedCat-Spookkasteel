/*
 * FUN_00480388 at 00480388
 * undefined __register FUN_00480388(int param_1, int param_2)
 * Address ranges: 00480388-004803d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480388(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x48039d;
  piVar1 = (int *)FUN_00412824(*(int *)(param_1 + 4));
  puStack_14 = &LAB_004803d5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (piVar1[2] == 0) {
    *(undefined1 *)(param_2 + 0x41) = 1;
  }
  puStack_10 = &stack0xfffffffc;
  FUN_004121d8(piVar1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004803dc;
  puStack_14 = (undefined1 *)0x4803d4;
  FUN_00412888(*(int *)(param_1 + 4));
  return;
}

