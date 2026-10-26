/*
 * FUN_005655dc at 005655dc
 * undefined __register FUN_005655dc(int * param_1, int * param_2)
 * Address ranges: 005655dc-00565704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5654fc slot 5 for TRcGameState. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5654fc slot 5 for
   TRcGameState. Original bytes unchanged; names and types still inferred. */

void FUN_005655dc(int *param_1,int *param_2)

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
  undefined1 local_10 [4];
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_120 = &LAB_00565705;
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
  FUN_004a3b2c(local_c,local_10);
  FUN_004a3b2c(local_c,local_8 + 3);
  FUN_004a3b2c(local_c,local_8 + 4);
  FUN_004a3b2c(local_c,local_8 + 7);
  FUN_004a3b2c(local_c,local_8 + 8);
  FUN_004a3b2c(local_c,local_8 + 9);
  FUN_004a3b2c(local_c,local_8 + 5);
  FUN_004a3b2c(local_c,local_8 + 6);
  FUN_004a3b2c(local_c,local_8 + 10);
  FUN_004a3b6c(local_c,local_8 + 0xb);
  *(undefined1 *)(local_8 + 2) = local_10[0];
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "LoadFromStream";
  FUN_00403dd4(&local_18,2);
  return;
}

