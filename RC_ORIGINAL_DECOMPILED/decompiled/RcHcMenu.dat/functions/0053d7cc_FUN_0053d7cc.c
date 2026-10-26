/*
 * FUN_0053d7cc at 0053d7cc
 * undefined __register FUN_0053d7cc(int * param_1, undefined1 param_2)
 * Address ranges: 0053d7cc-0053d840
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 23 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 23 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d7cc(int *param_1,undefined1 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_0053d841;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_9 = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_00404038(&local_10,(undefined4 *)" Functionality is not supported");
  FUN_00403d94(local_10);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_0053d848;
  puStack_118 = (undefined1 *)0x53d840;
  FUN_00403db0(&local_10);
  return;
}

