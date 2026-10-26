/*
 * FUN_004a01bc at 004a01bc
 * undefined __register FUN_004a01bc(int * param_1, uint param_2)
 * Address ranges: 004a01bc-004a0297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 31 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 31 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a01bc(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_004a0298;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*(uint *)(param_1[10] + 4) <= param_2) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_130 = "Frame index out of bounds.";
    FUN_004040f0(&local_10,4);
    FUN_00403d94(local_10);
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (((local_8[0x12] == 0) || (*(char *)(local_8[0x12] + 0x24) == '\0')) &&
     (local_8[0xb] != local_c)) {
    local_8[0xb] = local_c;
    (**(code **)(*local_8 + 100))(local_8,local_8);
    (**(code **)(*local_8 + 0x10))(local_8,local_8);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_14,2);
  return;
}

