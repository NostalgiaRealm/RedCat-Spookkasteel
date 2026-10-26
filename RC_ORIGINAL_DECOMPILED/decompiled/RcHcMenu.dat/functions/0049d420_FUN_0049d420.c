/*
 * FUN_0049d420 at 0049d420
 * undefined __register FUN_0049d420(int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 0049d420-0049d498
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d420(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_24 = &LAB_0049d499;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403e04(param_3,param_2);
  FUN_00409f84((undefined *)local_c,&local_14);
  if (local_14 == 0) {
    FUN_00409f84(*(undefined **)(local_8 + 4),(int *)&local_18);
    FUN_0040407c(local_10,local_18,local_c);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0049d4a0;
  puStack_24 = (undefined1 *)0x49d498;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

