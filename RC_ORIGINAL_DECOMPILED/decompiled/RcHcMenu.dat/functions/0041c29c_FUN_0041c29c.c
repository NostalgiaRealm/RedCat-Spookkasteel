/*
 * FUN_0041c29c at 0041c29c
 * undefined __register FUN_0041c29c(int * param_1, byte * param_2)
 * Address ranges: 0041c29c-0041c2e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c29c(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41c2ae;
  FUN_0041b6cc((int)param_1);
  puStack_14 = &LAB_0041c2e1;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041b134(DAT_005736a4,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041c2e8;
  puStack_14 = (undefined1 *)0x41c2e0;
  FUN_0041b6dc((int)param_1);
  return;
}

