/*
 * FUN_00493a3c at 00493a3c
 * undefined __register FUN_00493a3c(int * param_1, int * param_2)
 * Address ranges: 00493a3c-00493af2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 2 for TAppObj. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e834 slot 2 for TAppObj.
   Original bytes unchanged; names and types still inferred. */

void FUN_00493a3c(int *param_1,int *param_2)

{
  int *in_FS_OFFSET;
  int iStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_00493af3;
  iStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_124;
  local_c = param_2;
  local_8 = param_1;
  local_10 = (int *)FUN_00493c6c((int)param_1);
  if (local_10 == (int *)local_8[3]) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(local_c,local_118);
  }
  else {
    (**(code **)(*local_10 + 8))(local_10,&local_14);
    puStack_11c = (undefined1 *)local_14;
    puStack_120 = &DAT_00493b08;
    iStack_124 = 0x493a9a;
    FUN_00402fe0(*local_8,local_118);
    iStack_124 = 0x493aa8;
    FUN_00403fd4(&local_18,local_118);
    iStack_124 = local_18;
    FUN_004040f0(local_c,3);
  }
  *in_FS_OFFSET = iStack_124;
  puStack_11c = &LAB_00493afa;
  puStack_120 = (undefined1 *)0x493af2;
  FUN_00403dd4(&local_18,2);
  return;
}

