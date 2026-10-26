/*
 * FUN_00431868 at 00431868
 * undefined __register FUN_00431868(int * param_1, uint * param_2)
 * Address ranges: 00431868-00431885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 16 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 16 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00431868(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    FUN_00432744(param_1[6],param_2);
  }
  return;
}

