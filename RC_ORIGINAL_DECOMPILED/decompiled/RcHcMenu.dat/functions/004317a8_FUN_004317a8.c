/*
 * FUN_004317a8 at 004317a8
 * undefined4 __register FUN_004317a8(int param_1)
 * Address ranges: 004317a8-004317da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 10 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 10 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_004317a8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043daac(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x4c))();
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (cVar1 == *(char *)(iVar2 + 0x59)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

