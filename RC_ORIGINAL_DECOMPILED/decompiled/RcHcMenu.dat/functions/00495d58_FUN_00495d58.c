/*
 * FUN_00495d58 at 00495d58
 * undefined __register FUN_00495d58(int * param_1)
 * Address ranges: 00495d58-00495d97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 22 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 22 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

void FUN_00495d58(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00405c08((short *)(param_1 + 8));
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_1 + 0x68))();
    return;
  }
  iVar2 = FUN_00496d84((int)param_1);
  if ((*(byte *)(iVar2 + 0x19) & 0x20) == 0) {
    FUN_00496328(param_1,param_1 + 8);
  }
  return;
}

