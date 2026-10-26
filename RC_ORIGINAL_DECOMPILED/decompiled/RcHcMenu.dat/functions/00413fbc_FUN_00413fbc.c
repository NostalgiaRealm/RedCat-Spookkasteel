/*
 * FUN_00413fbc at 00413fbc
 * undefined __register FUN_00413fbc(int * param_1, char * param_2)
 * Address ranges: 00413fbc-00413ffe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 27 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 27 for
   TStrings. Original bytes unchanged; names and types still inferred. */

void FUN_00413fbc(int *param_1,char *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00413fff;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00403f68(&local_8,param_2);
  (**(code **)(*param_1 + 0x2c))(param_1,local_8);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00414006;
  puStack_18 = (undefined1 *)0x413ffe;
  FUN_00403db0(&local_8);
  return;
}

