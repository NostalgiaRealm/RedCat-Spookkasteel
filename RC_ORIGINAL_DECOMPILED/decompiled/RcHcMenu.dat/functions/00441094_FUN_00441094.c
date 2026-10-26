/*
 * FUN_00441094 at 00441094
 * undefined __register FUN_00441094(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 00441094-004410be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 4 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 4 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00441094(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0x80) = param_4;
    *(undefined4 *)(iVar1 + 0x84) = param_5;
  }
  return;
}

