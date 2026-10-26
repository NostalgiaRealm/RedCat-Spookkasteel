/*
 * FUN_004743fc at 004743fc
 * undefined __register FUN_004743fc(int * param_1, char param_2)
 * Address ranges: 004743fc-00474441
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot -1 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot -1 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_004743fc(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x474407;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_00474442;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00403094((int *)local_8[0xe]);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00474449;
  puStack_14 = (undefined1 *)0x474441;
  FUN_0045f724(local_8,local_9 & 0xfc);
  return;
}

