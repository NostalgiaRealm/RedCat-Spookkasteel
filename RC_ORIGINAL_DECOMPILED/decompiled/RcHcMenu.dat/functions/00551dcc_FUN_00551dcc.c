/*
 * FUN_00551dcc at 00551dcc
 * undefined __register FUN_00551dcc(int * param_1, char param_2)
 * Address ranges: 00551dcc-00551e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x551c78 slot -1 for TStatic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x551c78 slot -1 for TStatic.
   Original bytes unchanged; names and types still inferred. */

void FUN_00551dcc(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  byte local_9;
  int *local_8;
  
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_118 = (undefined1 *)0x551de2;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_00551e8c;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_0040e4b4(local_8 + 2);
  FUN_0040e4b4(local_8 + 3);
  FUN_004a3c40(local_8,local_9 & 0xfc);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Destroy";
  FUN_00403dd4(&local_14,2);
  return;
}

