/*
 * FUN_00440ff4 at 00440ff4
 * undefined __register FUN_00440ff4(int * param_1, undefined4 param_2)
 * Address ranges: 00440ff4-0044100d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 19 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 19 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00440ff4(int *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[6] + 0x48) = param_2;
  }
  return;
}

