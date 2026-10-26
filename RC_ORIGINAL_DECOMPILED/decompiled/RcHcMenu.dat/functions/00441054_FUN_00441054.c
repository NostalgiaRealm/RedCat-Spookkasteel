/*
 * FUN_00441054 at 00441054
 * undefined __register FUN_00441054(int * param_1, short param_2)
 * Address ranges: 00441054-00441071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 22 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 22 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00441054(int *param_1,short param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    FUN_00443020((int *)param_1[6],param_2);
  }
  return;
}

