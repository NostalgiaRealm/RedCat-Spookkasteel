/*
 * FUN_00469480 at 00469480
 * undefined __register FUN_00469480(int * param_1, int * param_2)
 * Address ranges: 00469480-004694c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 33 for TField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x462a70 slot 33 for TField.
   Original bytes unchanged; names and types still inferred. */

void FUN_00469480(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_004694c3;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)(*param_1 + 0x58))(param_1,&local_8);
  FUN_00403e04(param_2,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004694ca;
  puStack_18 = (undefined1 *)0x4694c2;
  FUN_00403db0((int *)&local_8);
  return;
}

