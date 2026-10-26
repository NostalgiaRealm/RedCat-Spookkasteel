/*
 * FUN_004ce204 at 004ce204
 * undefined __register FUN_004ce204(int * param_1, char param_2)
 * Address ranges: 004ce204-004ce32f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot -1 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot -1 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004ce204(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  local_118 = 0;
  local_11c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_120 = (undefined1 *)0x4ce226;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_124 = &LAB_004ce330;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_120 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[8] != 0) {
    puStack_120 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_134 = "some connection(s) not closed";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
  }
  if (local_8[7] != 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    FUN_004040f0(&local_118,3);
    FUN_00403d94(local_118);
  }
  FUN_00403094((int *)local_8[1]);
  FUN_0045b45c(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

