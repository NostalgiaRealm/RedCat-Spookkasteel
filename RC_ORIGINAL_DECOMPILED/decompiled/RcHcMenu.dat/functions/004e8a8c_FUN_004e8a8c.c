/*
 * FUN_004e8a8c at 004e8a8c
 * undefined __register FUN_004e8a8c(int * param_1)
 * Address ranges: 004e8a8c-004e8be9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 28 for TCurrencyProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e824c slot 28 for
   TCurrencyProp. Original bytes unchanged; names and types still inferred. */

void FUN_004e8a8c(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_12c;
  int local_128;
  int local_124;
  undefined1 *local_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_124 = 0;
  local_128 = 0;
  local_12c = 0;
  local_18 = 0;
  local_1c = 0;
  local_120 = (undefined1 *)0x0;
  puStack_134 = &LAB_004e8bea;
  pcStack_138 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_138;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_1c,local_11c);
    (**(code **)(*local_8 + 8))(local_8,&local_120,*local_8,"AppProp <",".GetValue: ",local_1c);
    puStack_134 = local_120;
    pcStack_138 = "> is not initialized";
    FUN_004040f0(&local_18,5);
    FUN_00403d94(local_18);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_11c);
    FUN_00403fd4(&local_128,local_11c);
    (**(code **)(*local_8 + 8))(local_8,&local_12c,*local_8,"AppProp <",".GetValue: ",local_128);
    puStack_134 = (undefined1 *)local_12c;
    pcStack_138 = "> is NULL";
    FUN_004040f0(&local_124,5);
    FUN_00403d94(local_124);
  }
  local_14 = local_8[0xe];
  local_10 = local_8[0xf];
  *in_FS_OFFSET = pcStack_138;
  puStack_130 = &LAB_004e8bf1;
  puStack_134 = (undefined1 *)0x4e8bdc;
  FUN_00403dd4(&local_12c,4);
  puStack_134 = (undefined1 *)0x4e8be9;
  FUN_00403dd4(&local_1c,2);
  return;
}

