/*
 * FUN_004f90b0 at 004f90b0
 * undefined __register FUN_004f90b0(int * param_1, VARIANTARG * param_2)
 * Address ranges: 004f90b0-004f90fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 10 for TLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f8ee4 slot 10 for
   TLookupProp. Original bytes unchanged; names and types still inferred. */

void FUN_004f90b0(int *param_1,VARIANTARG *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_10;
  VARIANTARG *local_c;
  int *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_18 = &LAB_004f90fb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(*param_1 + 0x70))(param_1,&local_10);
  FUN_004054ac(local_c,local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004f9102;
  puStack_18 = (undefined1 *)0x4f90fa;
  FUN_00403db0((int *)&local_10);
  return;
}

