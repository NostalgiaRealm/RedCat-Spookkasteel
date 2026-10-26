/*
 * FUN_004eb12c at 004eb12c
 * undefined __register FUN_004eb12c(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 004eb12c-004eb1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 4 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 4 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

void FUN_004eb12c(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_004eb1dc;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xc] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "No query";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_120;
  }
  puStack_120 = puVar1;
  piVar2 = (int *)FUN_00468730(*(int *)(local_8[0xc] + 0x24),local_c);
  (**(code **)(*piVar2 + 0x5c))(piVar2,local_10);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

