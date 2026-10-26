/*
 * FUN_004d76d8 at 004d76d8
 * undefined __register FUN_004d76d8(int * param_1)
 * Address ranges: 004d76d8-004d7758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d73a8 slot 6 for TAgentBlnDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d73a8 slot 6 for
   TAgentBlnDesc. Original bytes unchanged; names and types still inferred. */

void FUN_004d76d8(int *param_1)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 auStackY_100 [192];
  undefined4 uStackY_40;
  undefined1 *puVar2;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_1c = (undefined1 *)0x4d76ed;
  local_8 = param_1;
  local_c = (int *)FUN_00493178((int *)&PTR_FUN_004d7420,'\x01');
  puStack_20 = &LAB_004d7759;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  local_10 = local_c[7];
  local_14 = local_c[7];
  puVar2 = auStackY_100;
  local_18 = local_c[7];
  uStackY_40 = 0x4d773d;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00490bd8(local_8,(undefined4 *)"SortByID",&local_18,0,0,&local_14,0,&local_10,0);
  local_8[0x19] = iVar1;
  *in_FS_OFFSET = (int)puVar2;
  FUN_00403094(local_c);
  return;
}

