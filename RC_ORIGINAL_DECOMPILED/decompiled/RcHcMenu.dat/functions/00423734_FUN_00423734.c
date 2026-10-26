/*
 * FUN_00423734 at 00423734
 * undefined4 __register FUN_00423734(int * param_1)
 * Address ranges: 00423734-00423751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4233d0 slot 1 for TOrderedList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4233d0 slot 1 for
   TOrderedList. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00423734(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  FUN_00412224((int *)param_1[1],((int *)param_1[1])[2] + -1);
  return uVar1;
}

