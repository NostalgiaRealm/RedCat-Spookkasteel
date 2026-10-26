/*
 * FUN_00495b74 at 00495b74
 * undefined __register FUN_00495b74(int * param_1)
 * Address ranges: 00495b74-00495b99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 3 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 3 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_00495b74(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 != '\0') {
    piVar2 = (int *)FUN_00496d84((int)param_1);
    FUN_00495918(piVar2,param_1);
  }
  return;
}

