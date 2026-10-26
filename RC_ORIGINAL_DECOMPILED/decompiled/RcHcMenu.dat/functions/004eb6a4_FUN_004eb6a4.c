/*
 * FUN_004eb6a4 at 004eb6a4
 * undefined __register FUN_004eb6a4(int * param_1)
 * Address ranges: 004eb6a4-004eb72c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 5 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 5 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eb6a4(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004eb72d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x01') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".GetRowsAffected: not an action query.");
    FUN_00403d94(local_10);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  local_c = FUN_00488ce4(local_8[0xc]);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004eb734;
  puStack_118 = (undefined1 *)0x4eb72c;
  FUN_00403db0(&local_10);
  return;
}

