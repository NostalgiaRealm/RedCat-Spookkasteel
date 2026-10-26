/*
 * FUN_0052bb98 at 0052bb98
 * undefined __register FUN_0052bb98(int * param_1)
 * Address ranges: 0052bb98-0052bc21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 1 for TAppObjMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52b7f4 slot 1 for
   TAppObjMemList. Original bytes unchanged; names and types still inferred. */

void FUN_0052bb98(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_0052bc22;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".GetAtRecordnr");
    FUN_00403d94(local_10);
  }
  local_c = local_8[0x22];
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0052bc29;
  puStack_118 = (undefined1 *)0x52bc21;
  FUN_00403db0(&local_10);
  return;
}

