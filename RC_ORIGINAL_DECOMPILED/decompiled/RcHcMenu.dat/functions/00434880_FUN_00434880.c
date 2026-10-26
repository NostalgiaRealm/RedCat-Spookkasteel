/*
 * FUN_00434880 at 00434880
 * undefined __register FUN_00434880(int * param_1, undefined4 param_2)
 * Address ranges: 00434880-0043489c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 19 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 19 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00434880(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[8] + 0x150) = param_2;
  }
  return;
}

