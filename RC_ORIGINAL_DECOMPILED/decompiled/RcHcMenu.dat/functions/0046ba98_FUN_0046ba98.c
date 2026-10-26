/*
 * FUN_0046ba98 at 0046ba98
 * undefined __register FUN_0046ba98(int param_1)
 * Address ranges: 0046ba98-0046bad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 28 for TBooleanField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x463fa4 slot 28 for
   TBooleanField. Original bytes unchanged; names and types still inferred. */

void FUN_0046ba98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00404030(*(int *)(param_1 + 0xd4));
  iVar2 = FUN_00404030(*(int *)(param_1 + 0xd8));
  if (iVar2 < iVar1) {
    FUN_00404030(*(int *)(param_1 + 0xd4));
    return;
  }
  FUN_00404030(*(int *)(param_1 + 0xd8));
  return;
}

