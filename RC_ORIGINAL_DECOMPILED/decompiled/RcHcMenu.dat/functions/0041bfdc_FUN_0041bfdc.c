/*
 * FUN_0041bfdc at 0041bfdc
 * undefined __register FUN_0041bfdc(int * param_1, byte * param_2)
 * Address ranges: 0041bfdc-0041c020
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bfdc(int *param_1,byte *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41bfee;
  FUN_0041b6cc((int)param_1);
  puStack_14 = &LAB_0041c021;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041b134(DAT_005736a0,param_1,param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0041c028;
  puStack_14 = (undefined1 *)0x41c020;
  FUN_0041b6dc((int)param_1);
  return;
}

