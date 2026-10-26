/*
 * FUN_0055034c at 0055034c
 * undefined __register FUN_0055034c(int * param_1, int * param_2)
 * Address ranges: 0055034c-00550466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 4 for TSaveGameHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x550198 slot 4 for
   TSaveGameHeader. Original bytes unchanged; names and types still inferred. */

void FUN_0055034c(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_11c;
  int local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_118 = 0;
  local_11c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_124 = &LAB_00550467;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  if (local_8[0xe] == 0) {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_11c,local_114);
    pcStack_144 = ": Owner of header (Player) = nil";
    FUN_004040f0(&local_118,4);
    FUN_00403d94(local_118);
  }
  FUN_004a3bac(local_c,local_8 + 2);
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4(&local_11c,2);
  FUN_00403dd4(&local_14,2);
  return;
}

