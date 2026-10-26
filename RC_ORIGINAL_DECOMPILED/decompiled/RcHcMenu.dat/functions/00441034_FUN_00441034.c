/*
 * FUN_00441034 at 00441034
 * undefined __register FUN_00441034(int * param_1, int param_2)
 * Address ranges: 00441034-00441051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 21 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 21 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00441034(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x34))();
  if (cVar1 != '\0') {
    FUN_00443044((int *)param_1[6],param_2);
  }
  return;
}

