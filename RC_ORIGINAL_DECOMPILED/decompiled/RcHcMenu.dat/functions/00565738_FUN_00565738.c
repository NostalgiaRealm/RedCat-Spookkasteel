/*
 * FUN_00565738 at 00565738
 * undefined __register FUN_00565738(int * param_1, int * param_2)
 * Address ranges: 00565738-00565861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5654fc slot 4 for TRcGameState. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5654fc slot 4 for
   TRcGameState. Original bytes unchanged; names and types still inferred. */

void FUN_00565738(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_120 = &LAB_00565862;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  local_10 = (uint)*(byte *)(local_8 + 2);
  FUN_004a3b8c(local_c,local_10);
  FUN_004a3b8c(local_c,local_8[3]);
  FUN_004a3b8c(local_c,local_8[4]);
  FUN_004a3b8c(local_c,local_8[7]);
  FUN_004a3b8c(local_c,local_8[8]);
  FUN_004a3b8c(local_c,local_8[9]);
  FUN_004a3b8c(local_c,local_8[5]);
  FUN_004a3b8c(local_c,local_8[6]);
  FUN_004a3b8c(local_c,local_8[10]);
  FUN_004a3bcc(local_c,(char)local_8[0xb]);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "SaveToStream";
  FUN_00403dd4(&local_18,2);
  return;
}

