/*
 * FUN_0048a0d0 at 0048a0d0
 * undefined __register FUN_0048a0d0(int * param_1, int * param_2)
 * Address ranges: 0048a0d0-0048a1fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 27 for TStringProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4897ec slot 27 for
   TStringProp. Original bytes unchanged; names and types still inferred. */

void FUN_0048a0d0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0048a1fd;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_0048a430((int)local_8);
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  FUN_00403e04(local_c,(undefined4 *)local_8[0xe]);
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_0048a204;
  puStack_124 = (undefined1 *)0x48a1ef;
  FUN_00403dd4(&local_11c,2);
  puStack_124 = (undefined1 *)0x48a1fc;
  FUN_00403dd4(&local_14,2);
  return;
}

