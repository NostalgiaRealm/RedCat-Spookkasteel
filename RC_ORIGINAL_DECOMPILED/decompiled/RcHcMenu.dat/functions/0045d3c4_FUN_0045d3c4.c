/*
 * FUN_0045d3c4 at 0045d3c4
 * undefined __register FUN_0045d3c4(int * param_1, char param_2)
 * Address ranges: 0045d3c4-0045d406
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d3c4(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x45d3cf;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0045d407;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0045d890(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0045d40e;
  puStack_14 = (undefined1 *)0x45d406;
  FUN_0045b45c(local_8,local_9 & 0xfc);
  return;
}

