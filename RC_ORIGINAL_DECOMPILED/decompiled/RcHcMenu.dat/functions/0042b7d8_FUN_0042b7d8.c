/*
 * FUN_0042b7d8 at 0042b7d8
 * undefined4 __register FUN_0042b7d8(int param_1)
 * Address ranges: 0042b7d8-0042b80d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 9 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 9 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_0042b7d8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043da98(param_1);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xb4))();
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (cVar1 == *(char *)(iVar2 + 0x58)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

