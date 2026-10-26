/*
 * FUN_0051da18 at 0051da18
 * undefined __register FUN_0051da18(int * param_1)
 * Address ranges: 0051da18-0051da56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51b73c slot 45 for TDropArrows. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x51b73c slot 45 for
   TDropArrows. Original bytes unchanged; names and types still inferred. */

void FUN_0051da18(int *param_1)

{
  RECT local_18;
  int *local_8;
  
  local_8 = param_1;
  FUN_0041c318(*(int **)(param_1[0x7c] + 0x14),0xff);
  (**(code **)(*local_8 + 0x40))(local_8,&local_18);
  FUN_0041c9f8((int *)local_8[0x7c],&local_18);
  return;
}

