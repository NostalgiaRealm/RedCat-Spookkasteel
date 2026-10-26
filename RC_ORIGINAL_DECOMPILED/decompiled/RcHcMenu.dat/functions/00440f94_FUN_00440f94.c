/*
 * FUN_00440f94 at 00440f94
 * undefined __register FUN_00440f94(int * param_1, uint * param_2)
 * Address ranges: 00440f94-00440fb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 16 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 16 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00440f94(int *param_1,uint *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  if (cVar1 != '\0') {
    FUN_00442e54((int *)param_1[6],param_2);
  }
  return;
}

