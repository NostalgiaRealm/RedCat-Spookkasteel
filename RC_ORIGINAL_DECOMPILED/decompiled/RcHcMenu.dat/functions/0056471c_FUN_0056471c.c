/*
 * FUN_0056471c at 0056471c
 * undefined __register FUN_0056471c(int * param_1, undefined4 param_2)
 * Address ranges: 0056471c-005647de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56449c slot published:FormDestroy for TfrmMain. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56449c slot
   published:FormDestroy for TfrmMain. Original bytes unchanged; names and types still inferred. */

void FUN_0056471c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar2;
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
  puStack_11c = &LAB_005647df;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar2 = local_10;
  uVar1 = FUN_004a418c();
  FUN_004a48b8(uVar1,puVar2,0);
  ShowWindow((HWND)local_8[0xb5],9);
  ShowWindow((HWND)local_8[0xb6],9);
  FUN_0045bf1c(&DAT_0045bbbc);
  uVar1 = FUN_004a418c();
  FUN_004a49b0(uVar1);
  *in_FS_OFFSET = "FormDestroy";
  FUN_00403dd4(&local_14,2);
  return;
}

