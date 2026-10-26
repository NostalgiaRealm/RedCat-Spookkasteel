/*
 * FUN_0051dbf0 at 0051dbf0
 * undefined __register FUN_0051dbf0(int * param_1)
 * Address ranges: 0051dbf0-0051dc37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x51b87c slot 46 for TDaviGridPanel. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0051dc24) */
/* Recovered original virtual function entry from validated Delphi VMT 0x51b87c slot 46 for
   TDaviGridPanel. Original bytes unchanged; names and types still inferred. */

void FUN_0051dbf0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = FUN_0051dac4(param_1);
  uVar2 = FUN_00520c98(iVar1);
  if ((char)uVar2 != '\0') {
    iVar1 = FUN_0051dac4(param_1);
    iVar1 = FUN_00520c1c(iVar1);
    local_c = *(undefined4 *)(iVar1 + 0x3c);
  }
  FUN_00431f98(param_1,local_c);
  return;
}

