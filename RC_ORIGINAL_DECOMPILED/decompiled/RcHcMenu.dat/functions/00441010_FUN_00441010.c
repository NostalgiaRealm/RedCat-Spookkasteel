/*
 * FUN_00441010 at 00441010
 * undefined __register FUN_00441010(int * param_1, undefined4 * param_2)
 * Address ranges: 00441010-00441030
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 20 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 20 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00441010(int *param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    FUN_00403e04((int *)(param_1[6] + 0x4c),param_2);
  }
  return;
}

