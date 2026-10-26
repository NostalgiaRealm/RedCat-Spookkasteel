/*
 * FUN_0041baf8 at 0041baf8
 * undefined __register FUN_0041baf8(int * param_1, byte * param_2)
 * Address ranges: 0041baf8-0041bb3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041baf8(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41bb0a;
  FUN_0041b6cc((int)param_1);
  puStack_14 = &LAB_0041bb3d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041b134(DAT_0057369c,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041bb44;
  puStack_14 = (undefined1 *)0x41bb3c;
  FUN_0041b6dc((int)param_1);
  return;
}

