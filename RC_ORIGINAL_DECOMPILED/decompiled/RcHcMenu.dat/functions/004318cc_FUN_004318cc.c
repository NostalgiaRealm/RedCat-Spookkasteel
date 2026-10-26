/*
 * FUN_004318cc at 004318cc
 * undefined __register FUN_004318cc(int * param_1, uint param_2)
 * Address ranges: 004318cc-004318e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 23 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 23 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_004318cc(int *param_1,uint param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_0043262c((int *)param_1[6],param_2,extraout_ECX);
  }
  return;
}

