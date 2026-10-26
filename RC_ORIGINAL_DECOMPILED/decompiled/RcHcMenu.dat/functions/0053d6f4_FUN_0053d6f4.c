/*
 * FUN_0053d6f4 at 0053d6f4
 * undefined __register FUN_0053d6f4(int * param_1)
 * Address ranges: 0053d6f4-0053d765
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 24 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 24 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d6f4(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_10c [256];
  int local_c;
  int *local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_c = 0;
  puStack_114 = &LAB_0053d766;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_10c);
  FUN_00403fd4(&local_c,local_10c);
  FUN_00404038(&local_c,(undefined4 *)" Functionality is not supported");
  FUN_00403d94(local_c);
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_0053d76d;
  puStack_114 = (undefined1 *)0x53d765;
  FUN_00403db0(&local_c);
  return;
}

