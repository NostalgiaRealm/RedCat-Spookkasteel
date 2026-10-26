/*
 * FUN_00500718 at 00500718
 * undefined __register FUN_00500718(int * param_1, char param_2)
 * Address ranges: 00500718-0050076b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500718(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x500723;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0050076c;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x88]);
  local_8[0x88] = 0;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00500773;
  puStack_14 = (undefined1 *)0x50076b;
  FUN_004fe424(local_8,local_9 & 0xfc);
  return;
}

