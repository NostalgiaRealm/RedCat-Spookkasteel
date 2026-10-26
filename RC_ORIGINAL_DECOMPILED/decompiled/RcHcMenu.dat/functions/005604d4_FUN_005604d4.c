/*
 * FUN_005604d4 at 005604d4
 * undefined __register FUN_005604d4(int * param_1, undefined4 param_2)
 * Address ranges: 005604d4-00560593
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:FormCreate for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:FormCreate for TfrmMainScreen. Original bytes unchanged; names and types still
   inferred. */

void FUN_005604d4(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_00560594;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_00552d78(local_8,local_c);
  local_8[0xc1] = (int)local_8;
  local_8[0xc0] = (int)&LAB_0056084c;
  FUN_00553360();
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormCreate";
  FUN_00403dd4(&local_14,2);
  return;
}

