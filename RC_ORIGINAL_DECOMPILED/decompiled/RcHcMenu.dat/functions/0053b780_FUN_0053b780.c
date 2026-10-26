/*
 * FUN_0053b780 at 0053b780
 * undefined __register FUN_0053b780(int * param_1)
 * Address ranges: 0053b780-0053b7e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 27 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 27 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053b780(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x53b794;
  local_8 = param_1;
  local_c = (int *)FUN_0049206c((int *)param_1[7]);
  puStack_14 = &LAB_0053b7e2;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  piVar1 = (int *)FUN_00549b80((int)local_8);
  FUN_00493768(local_c,piVar1);
  FUN_0053ce30(local_8,local_c,'\0');
  FUN_0054a2b0(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0053b7e9;
  puStack_14 = (undefined1 *)0x53b7e1;
  FUN_00403094(local_c);
  return;
}

