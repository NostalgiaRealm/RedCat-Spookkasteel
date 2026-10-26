/*
 * FUN_00441074 at 00441074
 * undefined __register FUN_00441074(int * param_1, char param_2)
 * Address ranges: 00441074-00441091
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 23 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 23 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00441074(int *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3c))();
  if (cVar1 != '\0') {
    FUN_00443034((int *)param_1[6],param_2);
  }
  return;
}

