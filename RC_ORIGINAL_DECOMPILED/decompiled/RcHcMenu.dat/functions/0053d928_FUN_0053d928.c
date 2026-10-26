/*
 * FUN_0053d928 at 0053d928
 * undefined __register FUN_0053d928(int * param_1, int * param_2)
 * Address ranges: 0053d928-0053da23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 26 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 26 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_0053d928(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_0053da24;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = " Parameter cannot be nil";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if ((char)local_8[4] == '\0') {
    if (*(char *)((int)local_8 + 0x85) == '\0') {
      piVar2 = (int *)FUN_0053d8a4((int)local_8);
      FUN_00493768(local_c,piVar2);
    }
    else {
      if ((char)local_8[0x10] != '\0') {
        FUN_00403d94(".DoUpdateAppObj: ");
      }
      piVar2 = (int *)FUN_00549b80((int)local_8);
      FUN_00493768(local_c,piVar2);
    }
  }
  else {
    piVar2 = (int *)FUN_0053d8a4((int)local_8);
    FUN_00493768(local_c,piVar2);
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

