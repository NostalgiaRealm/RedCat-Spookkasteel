/*
 * FUN_004eb9ec at 004eb9ec
 * bool __register FUN_004eb9ec(int param_1)
 * Address ranges: 004eb9ec-004eba43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 18 for TAppBDEQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ea51c slot 18 for
   TAppBDEQuery. Original bytes unchanged; names and types still inferred. */

bool FUN_004eb9ec(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_9;
  
  local_9 = false;
  uVar1 = FUN_004714b4(*(int *)(param_1 + 0x30));
  if ((char)uVar1 != '\0') {
    if (*(char *)(param_1 + 0x18) == '\0') {
      iVar2 = FUN_0047345c(*(int **)(param_1 + 0x30),-1);
      local_9 = iVar2 != 0;
    }
    else {
      iVar2 = FUN_0047345c(*(int **)(param_1 + 0x30),1);
      local_9 = iVar2 != 0;
    }
  }
  return local_9;
}

