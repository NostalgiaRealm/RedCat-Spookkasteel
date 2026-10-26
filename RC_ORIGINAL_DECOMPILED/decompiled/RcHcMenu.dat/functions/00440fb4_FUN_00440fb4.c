/*
 * FUN_00440fb4 at 00440fb4
 * undefined __register FUN_00440fb4(int * param_1, byte param_2)
 * Address ranges: 00440fb4-00440fd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 17 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 17 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00440fb4(int *param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 != '\0') {
    FUN_00442ec4(param_1[6],param_2);
  }
  return;
}

