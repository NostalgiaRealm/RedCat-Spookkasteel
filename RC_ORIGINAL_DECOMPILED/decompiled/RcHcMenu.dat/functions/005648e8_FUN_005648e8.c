/*
 * FUN_005648e8 at 005648e8
 * undefined __register FUN_005648e8(int * param_1, undefined4 param_2)
 * Address ranges: 005648e8-005649a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56449c slot published:FormActivate for TfrmMain. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56449c slot
   published:FormActivate for TfrmMain. Original bytes unchanged; names and types still inferred. */

void FUN_005648e8(int *param_1,undefined4 param_2)

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
  puStack_11c = &LAB_005649a8;
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
  if ((char)local_8[0xb4] != '\0') {
    (**(code **)(*local_8 + 0x80))();
    FUN_00565214(local_8);
  }
  *(undefined1 *)(local_8 + 0xb4) = 0;
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "FormActivate";
  FUN_00403dd4(&local_14,2);
  return;
}

