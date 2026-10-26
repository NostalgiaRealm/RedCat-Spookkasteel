/*
 * FUN_0048b124 at 0048b124
 * undefined __register FUN_0048b124(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0048b124-0048b199
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048b124(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18 [3];
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18[1] = 0;
  local_18[0] = 0;
  puStack_24 = &LAB_0048b19a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_18[2] = param_2;
  local_c = param_3;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x6c))(param_1,local_18,*param_1,&LAB_0048b1b0);
  FUN_00459e80(local_18[0],"\'",local_18 + 1);
  FUN_004040f0(local_c,3);
  *in_FS_OFFSET = &LAB_0048b1b0;
  FUN_00403dd4(local_18,2);
  return;
}

