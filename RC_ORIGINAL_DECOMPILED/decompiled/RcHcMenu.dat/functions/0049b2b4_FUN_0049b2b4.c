/*
 * FUN_0049b2b4 at 0049b2b4
 * undefined __register FUN_0049b2b4(int * param_1, undefined2 param_2, HGLOBAL param_3)
 * Address ranges: 0049b2b4-0049b304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 22 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 22 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b2b4(int *param_1,undefined2 param_2,HGLOBAL param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined2 local_12;
  int *local_10;
  HGLOBAL local_c;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x49b2d3;
  local_12 = param_2;
  local_c = param_3;
  local_8 = param_1;
  local_10 = FUN_0049b1fc((int *)&PTR_FUN_0049b1d4,'\x01',param_3);
  puStack_1c = &LAB_0049b305;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*local_8 + 0x30))(local_8,local_10);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0049b30c;
  puStack_1c = (undefined1 *)0x49b304;
  FUN_00403094(local_10);
  return;
}

