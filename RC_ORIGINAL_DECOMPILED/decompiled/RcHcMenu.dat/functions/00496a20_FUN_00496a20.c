/*
 * FUN_00496a20 at 00496a20
 * undefined __register FUN_00496a20(int * param_1)
 * Address ranges: 00496a20-00496acc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 20 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 20 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_00496a20(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00496acd;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00496d84((int)local_8);
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
  }
  local_9 = (*(byte *)(local_8 + 0xc) & 4) == 0;
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_00496ad4;
  puStack_11c = (undefined1 *)0x496acc;
  FUN_00403dd4(&local_14,2);
  return;
}

