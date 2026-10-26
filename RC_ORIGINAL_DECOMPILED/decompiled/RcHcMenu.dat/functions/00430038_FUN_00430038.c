/*
 * FUN_00430038 at 00430038
 * undefined2 __register FUN_00430038(int param_1, char param_2)
 * Address ranges: 00430038-0043004f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42db7c slot 1 for TDragControlObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42db7c slot 1 for
   TDragControlObject. Original bytes unchanged; names and types still inferred. */

undefined2 FUN_00430038(int param_1,char param_2)

{
  undefined2 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = 0xfff3;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x38) + 0x6a);
  }
  return uVar1;
}

