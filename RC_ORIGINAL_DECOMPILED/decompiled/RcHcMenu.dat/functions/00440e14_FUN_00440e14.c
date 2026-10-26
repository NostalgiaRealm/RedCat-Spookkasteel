/*
 * FUN_00440e14 at 00440e14
 * undefined4 __register FUN_00440e14(int param_1)
 * Address ranges: 00440e14-00440e42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 9 for TMenuActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x43fc1c slot 9 for
   TMenuActionLink. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00440e14(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043da98(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (*(char *)(iVar2 + 0x58) == *(char *)(*(int *)(param_1 + 0x18) + 0x2c)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

