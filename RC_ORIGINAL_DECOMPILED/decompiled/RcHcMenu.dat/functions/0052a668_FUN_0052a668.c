/*
 * FUN_0052a668 at 0052a668
 * undefined __register FUN_0052a668(int * param_1, int * param_2)
 * Address ranges: 0052a668-0052a830
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 10 for TAppObjConcatList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x529d00 slot 10 for
   TAppObjConcatList. Original bytes unchanged; names and types still inferred. */

void FUN_0052a668(int *param_1,int *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_128 = &LAB_0052a831;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_138 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar2 = puStack_124;
  }
  puStack_124 = puVar2;
  uVar3 = FUN_0040320c(local_c,(int)&DAT_00529de8);
  if ((char)uVar3 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_120,local_118);
    FUN_004040f0(&local_11c,3);
    FUN_00403d94(local_11c);
  }
  local_10 = FUN_00403224(local_c,(int)&DAT_00529de8);
  FUN_0052b638(local_8,*(char *)(local_10 + 0xc));
  cVar1 = *(char *)(local_10 + 0xc);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (local_8[0x21] == 0) {
        FUN_00403d94(" Internal inconsistency");
      }
      FUN_00548598((int *)local_8[0x21],*(int *)(local_10 + 0x10));
    }
    else if (cVar1 == '\x02') {
      if (local_8[0x22] == 0) {
        FUN_00403d94(" Internal inconsistency");
      }
      FUN_00548598((int *)local_8[0x22],*(int *)(local_10 + 0x10));
    }
    else {
      FUN_00403d94(" Unhandled case-part");
    }
  }
  *in_FS_OFFSET = pcStack_138;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

