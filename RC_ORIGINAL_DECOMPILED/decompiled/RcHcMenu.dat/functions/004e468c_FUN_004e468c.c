/*
 * FUN_004e468c at 004e468c
 * undefined __register FUN_004e468c(int * param_1, int * param_2, char param_3)
 * Address ranges: 004e468c-004e478c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 11 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 11 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

void FUN_004e468c(int *param_1,int *param_2,char param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *pcVar3;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  char *local_128;
  undefined1 local_124;
  byte local_120 [256];
  int local_20;
  byte *local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_e;
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = (byte *)0x0;
  local_20 = 0;
  puStack_134 = &LAB_004e478d;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
      FUN_00402fe0(*local_8,local_120);
      FUN_00403fd4(&local_20,local_120);
      pcVar3 = " Field \'%s\' cannot be nil";
      FUN_004040f0((int *)&local_1c,3);
      local_128 = "DatabaseConnection";
      local_124 = 0xb;
      FUN_0040a894(local_1c,&local_128,0,(int *)pcVar3);
      FUN_00403d94(local_18);
    }
    (**(code **)(*local_8 + 0x54))();
    FUN_004e54bc(local_8);
    puVar1 = puStack_130;
  }
  puStack_130 = puVar1;
  local_e = FUN_004e2d04((int *)local_8[0x20],local_c,&local_14);
  FUN_004e3fa0(local_8,local_14);
  *in_FS_OFFSET = uStack_138;
  puStack_130 = &LAB_004e4794;
  puStack_134 = (undefined1 *)0x4e478c;
  FUN_00403dd4(&local_20,3);
  return;
}

