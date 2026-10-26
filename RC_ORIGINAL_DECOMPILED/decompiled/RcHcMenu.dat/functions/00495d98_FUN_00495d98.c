/*
 * FUN_00495d98 at 00495d98
 * undefined4 __register FUN_00495d98(int * param_1, int * param_2, undefined1 param_3)
 * Address ranges: 00495d98-00495e88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 18 for TGenericContainerProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x474160 slot 18 for
   TGenericContainerProp. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00495d98(int *param_1,int *param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x4c))(), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x4c))(), cVar1 != '\0')) {
    return 0xffffffff;
  }
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_2 + 0x4c))(), cVar1 == '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_2 + 0x50))(), cVar1 != '\0')) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x50))(), cVar1 != '\0')) {
    return 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x50))();
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_2 + 0x50))(), cVar1 == '\0')) {
    return 0xffffffff;
  }
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  return uVar2;
}

