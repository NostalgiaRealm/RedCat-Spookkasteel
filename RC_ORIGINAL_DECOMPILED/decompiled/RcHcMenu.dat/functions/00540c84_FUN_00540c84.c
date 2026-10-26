/*
 * FUN_00540c84 at 00540c84
 * undefined __register FUN_00540c84(int * param_1)
 * Address ranges: 00540c84-00540d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x540184 slot 53 for TAppObjComboEdit. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x540184 slot 53 for
   TAppObjComboEdit. Original bytes unchanged; names and types still inferred. */

void FUN_00540c84(int *param_1)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  uint *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_18 = &LAB_00540d0c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_8 = param_1;
  iVar1 = FUN_00540710(param_1);
  if ((*(short *)(iVar1 + 0x272) == 0) || (local_8[0x89] == 0)) {
    FUN_004f9b44(local_8);
  }
  else {
    iVar1 = FUN_00540710(local_8);
    (**(code **)(iVar1 + 0x270))(*(undefined4 *)(iVar1 + 0x274),local_8[0x89],&local_c);
    FUN_00432744((int)local_8,local_c);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00540d13;
  puStack_18 = (undefined1 *)0x540d0b;
  FUN_00403db0((int *)&local_c);
  return;
}

