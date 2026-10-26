/*
 * FUN_00412838 at 00412838
 * undefined __register FUN_00412838(int param_1, int param_2)
 * Address ranges: 00412838-0041287a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412838(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x41284a;
  FUN_00412824(param_1);
  puStack_14 = &LAB_0041287b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0041251c(*(int **)(param_1 + 4),param_2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00412882;
  puStack_14 = (undefined1 *)0x41287a;
  FUN_00412888(param_1);
  return;
}

