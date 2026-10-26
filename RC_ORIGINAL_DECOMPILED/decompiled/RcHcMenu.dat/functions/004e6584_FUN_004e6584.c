/*
 * FUN_004e6584 at 004e6584
 * bool __register FUN_004e6584(int param_1, undefined4 * param_2)
 * Address ranges: 004e6584-004e65c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 29 for TAppObjCachedMemList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4e310c slot 29 for
   TAppObjCachedMemList. Original bytes unchanged; names and types still inferred. */

bool FUN_004e6584(int param_1,undefined4 *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte local_2c [36];
  int local_8;
  
  pbVar2 = local_2c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 4;
  }
  local_8 = param_1;
  iVar1 = FUN_00492440(*(int **)(param_1 + 0x1c),local_2c);
  return (*(byte *)(iVar1 + 0x19) & 0x10) == 0;
}

