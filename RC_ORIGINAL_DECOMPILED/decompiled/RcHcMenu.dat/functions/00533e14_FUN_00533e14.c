/*
 * FUN_00533e14 at 00533e14
 * undefined __register FUN_00533e14(int * param_1, undefined1 param_2, int param_3)
 * Address ranges: 00533e14-00533e99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 79 for TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x52ea58 slot 79 for
   TCustomAppObjCombo2. Original bytes unchanged; names and types still inferred. */

void FUN_00533e14(int *param_1,undefined1 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  undefined1 local_d;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_14 = 0;
  puStack_20 = &LAB_00533e9a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_d = param_2;
  local_c = param_3;
  local_8 = param_1;
  FUN_00548f74((int *)param_1[0xa5]);
  FUN_005017d8((int)local_8,&local_14);
  FUN_00501a20(local_8,local_14);
  puVar1 = (undefined4 *)FUN_00549b80(local_8[0xa5]);
  iVar2 = FUN_00402fdc(puVar1);
  iVar2 = FUN_004cecf8(*(int **)(local_c + 4),iVar2);
  local_8[0xa6] = iVar2;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00533ea1;
  puStack_20 = (undefined1 *)0x533e99;
  FUN_00403db0(&local_14);
  return;
}

