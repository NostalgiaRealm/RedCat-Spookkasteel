/*
 * FUN_00501338 at 00501338
 * undefined __register FUN_00501338(int * param_1, char param_2)
 * Address ranges: 00501338-005013a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501338(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x501343;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_005013a5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0x8d]);
  FUN_00403094((int *)local_8[0x8f]);
  FUN_00403094((int *)local_8[0x8e]);
  FUN_00501580(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005013ac;
  puStack_14 = (undefined1 *)0x5013a4;
  FUN_00500718(local_8,local_9 & 0xfc);
  return;
}

