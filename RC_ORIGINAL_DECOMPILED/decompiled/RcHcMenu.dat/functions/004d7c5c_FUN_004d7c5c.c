/*
 * FUN_004d7c5c at 004d7c5c
 * undefined __register FUN_004d7c5c(int * param_1)
 * Address ranges: 004d7c5c-004d7d18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4d7800 slot 6 for TAgentBlnItemDesc. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4d7800 slot 6 for
   TAgentBlnItemDesc. Original bytes unchanged; names and types still inferred. */

void FUN_004d7c5c(int *param_1)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined1 auStackY_100 [172];
  undefined4 uStackY_54;
  undefined1 *puVar2;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_28 = (undefined1 *)0x4d7c71;
  local_8 = param_1;
  local_c = (int *)FUN_00493178((int *)&PTR_FUN_004d787c,'\x01');
  puStack_2c = &LAB_004d7d19;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  local_10 = local_c[7];
  local_20 = local_c[7];
  local_1c = local_c[9];
  local_18 = local_c[10];
  local_14 = local_c[0xb];
  puVar2 = auStackY_100;
  local_24 = local_c[7];
  puStack_28 = &stack0xfffffffc;
  iVar1 = FUN_00490bd8(local_8,(undefined4 *)"SortByID",&local_24,0,3,&local_20,0,&local_10,0);
  local_8[0x19] = iVar1;
  local_10 = local_c[8];
  uStackY_54 = 0x4d7d03;
  FUN_00490e3c((int)local_8,(undefined4 *)"IdxFKAgentBlnID",&local_10,0,0);
  *in_FS_OFFSET = (int)puVar2;
  FUN_00403094(local_c);
  return;
}

