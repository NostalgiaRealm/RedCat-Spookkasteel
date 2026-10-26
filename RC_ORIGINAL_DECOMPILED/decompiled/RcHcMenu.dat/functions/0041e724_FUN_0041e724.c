/*
 * FUN_0041e724 at 0041e724
 * undefined __register FUN_0041e724(int * param_1, undefined * param_2)
 * Address ranges: 0041e724-0041e76b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 18 for TGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 18 for
   TGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_0041e724(int *param_1,undefined *param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_18;
  undefined1 *puStackY_14;
  
  puStackY_14 = (undefined1 *)0x41e73b;
  piVar1 = FUN_004149f8((int *)&PTR_FUN_00410e7c,'\x01',param_2,0x20);
  puStackY_14 = &LAB_0041e76c;
  uStackY_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_18;
  (**(code **)(*param_1 + 0x50))(param_1,piVar1);
  *in_FS_OFFSET = uStackY_18;
  puStackY_14 = (undefined1 *)0x41e76b;
  FUN_00403094(piVar1);
  return;
}

