/*
 * FUN_0053d170 at 0053d170
 * undefined __register FUN_0053d170(int * param_1)
 * Address ranges: 0053d170-0053d214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 20 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 20 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d170(int *param_1)

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
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_0053d215;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_004040f0(&local_c,3);
  FUN_00403d94(local_c);
  FUN_0053d4cc((int)local_8);
  if ((char)local_8[4] == '\0') {
    local_8[0x23] = -0x80000000;
  }
  *in_FS_OFFSET = "waarvoor is deze proc. nodig?";
  FUN_00403dd4(&local_10,2);
  return;
}

