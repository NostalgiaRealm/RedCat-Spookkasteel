/*
 * FUN_00413c3c at 00413c3c
 * undefined __register FUN_00413c3c(int * param_1, undefined * param_2)
 * Address ranges: 00413c3c-00413c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 22 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 22 for
   TStrings. Original bytes unchanged; names and types still inferred. */

void FUN_00413c3c(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x413c53;
  piVar1 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',param_2,0x20);
  puStackY_14 = &LAB_00413c84;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x5c))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x413c83;
  FUN_00403094(piVar1);
  return;
}

