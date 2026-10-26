/*
 * FUN_004e99b4 at 004e99b4
 * undefined __register FUN_004e99b4(int * param_1, uint * param_2)
 * Address ranges: 004e99b4-004e9a38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 14 for TBooleanProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e9250 slot 14 for
   TBooleanProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e99b4(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4e99c8;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  uVar2 = 1;
  puStack_14 = &LAB_004e9a39;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  iVar1 = FUN_004e9a44((int)local_8);
  FUN_00404140(local_c,*(uint **)(iVar1 + 0x30));
  if ((bool)uVar2) {
    FUN_004e95b8(local_8,1);
  }
  else {
    iVar1 = FUN_004e9a44((int)local_8);
    FUN_00404140(local_c,*(uint **)(iVar1 + 0x34));
    if ((bool)uVar2) {
      FUN_004e95b8(local_8,0);
    }
    else {
      FUN_00496860(local_8,local_c);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e9a40;
  puStack_14 = (undefined1 *)0x4e9a38;
  FUN_00403db0((int *)&local_c);
  return;
}

