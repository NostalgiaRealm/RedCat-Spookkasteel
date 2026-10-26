/*
 * FUN_004318a8 at 004318a8
 * undefined __register FUN_004318a8(int * param_1, undefined4 * param_2)
 * Address ranges: 004318a8-004318c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 20 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 20 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_004318a8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403e04((int *)(param_1[6] + 0x70),param_2);
  }
  return;
}

