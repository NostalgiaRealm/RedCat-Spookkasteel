/*
 * FUN_0053db60 at 0053db60
 * char __register FUN_0053db60(int param_1)
 * Address ranges: 0053db60-0053dbd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 33 for TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x53b55c slot 33 for
   TAppObjSimpleQueryList. Original bytes unchanged; names and types still inferred. */

char FUN_0053db60(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00403d94("Assertion failure");
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x3c))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x48))();
    if (cVar1 != '\0') {
      cVar1 = '\x01';
      goto LAB_0053dbb3;
    }
  }
  cVar1 = '\0';
LAB_0053dbb3:
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x88) + 0x50))();
  }
  return cVar1;
}

