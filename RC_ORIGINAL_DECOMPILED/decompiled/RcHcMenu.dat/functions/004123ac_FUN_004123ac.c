/*
 * FUN_004123ac at 004123ac
 * undefined __register FUN_004123ac(undefined4 * param_1)
 * Address ranges: 004123ac-004123dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41077c slot 0 for TList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41077c slot 0 for TList.
   Original bytes unchanged; names and types still inferred. */

void FUN_004123ac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  if (iVar1 < 0x41) {
    if (iVar1 < 9) {
      iVar2 = 4;
    }
    else {
      iVar2 = 0x10;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = iVar1 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  FUN_0041253c(param_1,iVar2 + iVar1);
  return;
}

