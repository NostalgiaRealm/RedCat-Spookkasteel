/*
 * FUN_00541558 at 00541558
 * undefined __register FUN_00541558(int * param_1, char param_2)
 * Address ranges: 00541558-005415df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00541558(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x541563;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_005415e0;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_005418e0(local_8,'\0');
  FUN_00403094((int *)local_8[0x8b]);
  local_8[0x8b] = 0;
  FUN_00403094((int *)local_8[0x8c]);
  FUN_00403094((int *)local_8[0x9f]);
  FUN_00403094((int *)local_8[0xa0]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005415e7;
  puStack_14 = (undefined1 *)0x5415df;
  FUN_004efbe0(local_8,local_9 & 0xfc);
  return;
}

