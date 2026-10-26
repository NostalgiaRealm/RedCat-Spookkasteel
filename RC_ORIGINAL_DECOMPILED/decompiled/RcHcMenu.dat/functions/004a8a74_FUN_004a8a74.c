/*
 * FUN_004a8a74 at 004a8a74
 * undefined __register FUN_004a8a74(int * param_1, uint * param_2)
 * Address ranges: 004a8a74-004a8ae1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 6 for TWinControlWrapper. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a8798 slot 6 for
   TWinControlWrapper. Original bytes unchanged; names and types still inferred. */

void FUN_004a8a74(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = 0;
  puStack_18 = &LAB_004a8ae2;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  FUN_004324f4(param_1,param_2);
  iVar1 = FUN_004a8f84((int)local_8);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_004a8f84((int)local_8);
    FUN_0040407c(&local_10,(undefined4 *)"Wrapper",local_c);
    (**(code **)(*piVar2 + 0x18))(piVar2,local_10);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004a8ae9;
  puStack_18 = (undefined1 *)0x4a8ae1;
  FUN_00403db0(&local_10);
  return;
}

