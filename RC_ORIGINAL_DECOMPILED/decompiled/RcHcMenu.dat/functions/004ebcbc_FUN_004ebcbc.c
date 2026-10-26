/*
 * FUN_004ebcbc at 004ebcbc
 * undefined __register FUN_004ebcbc(int * param_1, char param_2)
 * Address ranges: 004ebcbc-004ebd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot -1 for TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea3e8 slot -1 for
   TAppBDEDatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004ebcbc(int *param_1,char param_2)

{
  char cVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  puStack_114 = (undefined1 *)0x4ebccf;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_118 = &LAB_004ebd6c;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puStack_114 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[9] != 0) {
    puStack_114 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".Destroy: queries still exist");
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x44))();
  if (cVar1 != '\0') {
    FUN_004cf660(local_8);
  }
  FUN_00403094((int *)local_8[0x14]);
  FUN_004ceee4(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004ebd73;
  puStack_118 = (undefined1 *)0x4ebd6b;
  FUN_00403db0(&local_10);
  return;
}

