/*
 * FUN_0053d5cc at 0053d5cc
 * undefined __register FUN_0053d5cc(int * param_1)
 * Address ranges: 0053d5cc-0053d67a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 22 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 22 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d5cc(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_128;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_0053d67b;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if ((char)param_1[6] == '\0') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_128 = "AppObjList not open (active)";
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  FUN_0053d4cc((int)local_8);
  *(undefined1 *)(local_8 + 0x21) = 0;
  local_8[0x24] = -0x80000000;
  *in_FS_OFFSET = pcStack_128;
  FUN_00403dd4(&local_10,2);
  return;
}

