/*
 * FUN_0053b90c at 0053b90c
 * undefined1 __register FUN_0053b90c(int param_1)
 * Address ranges: 0053b90c-0053b980
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 5 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 5 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0053b90c(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x44))();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(bool *)(param_1 + 0x85) = *(int *)(param_1 + 0x8c) == 0;
  }
  return uVar1;
}

