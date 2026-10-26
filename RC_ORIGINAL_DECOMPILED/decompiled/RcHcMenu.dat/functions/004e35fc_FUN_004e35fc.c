/*
 * FUN_004e35fc at 004e35fc
 * undefined __register FUN_004e35fc(int * param_1)
 * Address ranges: 004e35fc-004e36c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 1 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 1 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e35fc(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  char *local_120;
  undefined1 local_11c;
  byte local_118 [256];
  int local_18;
  byte *local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (byte *)0x0;
  local_18 = 0;
  puStack_128 = &LAB_004e36c6;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_138 = ".GetRecordnr: ";
    pcVar2 = " Field \'%s\' cannot be nil";
    FUN_004040f0((int *)&local_14,3);
    local_120 = "FAppObjArray";
    local_11c = 0xb;
    FUN_0040a894(local_14,&local_120,0,(int *)pcVar2);
    FUN_00403d94(local_10);
    puVar1 = puStack_124;
  }
  puStack_124 = puVar1;
  local_c = local_8[0x22];
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_18,3);
  return;
}

