/*
 * FUN_004e6cf0 at 004e6cf0
 * undefined __register FUN_004e6cf0(int param_1, int param_2)
 * Address ranges: 004e6cf0-004e6d56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 21 for TOleGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e68a0 slot 21 for
   TOleGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004e6cf0(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (int *)0x0;
  puStack_18 = &LAB_004e6d57;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_0041998c((int *)&PTR_FUN_00411144,'\x01',param_2,0);
  FUN_00406ad4((int *)&local_8,*(undefined4 **)(param_1 + 0x20));
  piVar1 = local_8;
  uVar2 = (**(code **)(*local_8 + 0x18))();
  FUN_0045eb1c(uVar2);
  *in_FS_OFFSET = piVar1;
  FUN_00406aa0((int *)&local_8);
  return;
}

