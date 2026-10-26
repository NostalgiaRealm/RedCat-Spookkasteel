/*
 * FUN_0045bae8 at 0045bae8
 * undefined4 __register FUN_0045bae8(int * param_1, undefined4 param_2)
 * Address ranges: 0045bae8-0045bb13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x45b7d8 slot 10 for TObjectList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x45b7d8 slot 10 for
   TObjectList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0045bae8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  (**(code **)(*param_1 + 0x10))(param_1,uVar1);
  return uVar1;
}

