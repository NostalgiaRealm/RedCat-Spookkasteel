/*
 * FUN_0053c834 at 0053c834
 * undefined __register FUN_0053c834(int * param_1)
 * Address ranges: 0053c834-0053c985
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 13 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 13 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053c834(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_124 = &LAB_0053c986;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x22] == 0) {
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  cVar2 = (**(code **)(*(int *)local_8[0x22] + 0x3c))();
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  if (((char)local_8[4] != '\x01') && (*(char *)((int)local_8 + 0x85) != '\0')) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  local_c = FUN_0053dc6c((int *)&DAT_0053b648,'\x01',(int)local_8);
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_0053c98d;
  puStack_124 = (undefined1 *)0x53c978;
  FUN_00403dd4(&local_11c,2);
  puStack_124 = (undefined1 *)0x53c985;
  FUN_00403dd4(&local_14,2);
  return;
}

