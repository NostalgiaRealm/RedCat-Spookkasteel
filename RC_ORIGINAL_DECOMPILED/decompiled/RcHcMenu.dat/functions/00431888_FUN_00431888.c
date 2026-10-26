/*
 * FUN_00431888 at 00431888
 * undefined __register FUN_00431888(int * param_1, undefined4 param_2)
 * Address ranges: 00431888-004318a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 18 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 18 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00431888(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)param_1[6] + 0x5c))((int *)param_1[6],param_2);
  }
  return;
}

