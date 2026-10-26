/*
 * FUN_00470290 at 00470290
 * undefined __register FUN_00470290(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00470290-004702d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470290(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_004702d4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x1c))(param_1,&local_8);
  FUN_00470b3c(*(int *)(param_4 + -4),local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004702db;
  puStack_14 = (undefined1 *)0x4702d3;
  FUN_00403db0((int *)&local_8);
  return;
}

