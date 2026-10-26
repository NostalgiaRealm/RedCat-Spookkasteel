/*
 * FUN_004add90 at 004add90
 * undefined __register FUN_004add90(int param_1, undefined4 param_2, LONG * param_3)
 * Address ranges: 004add90-004addc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 48 for TCustomGDIButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac9d8 slot 48 for
   TCustomGDIButton. Original bytes unchanged; names and types still inferred. */

void FUN_004add90(int param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  LONG *pLVar2;
  LONG local_1c [4];
  undefined4 local_c;
  int local_8;
  
  pLVar2 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar2 = *param_3;
    param_3 = param_3 + 1;
    pLVar2 = pLVar2 + 1;
  }
  local_c = param_2;
  local_8 = param_1;
  FUN_004ab470(*(int **)(param_1 + 0x120),local_1c,(int)PTR_DAT_0057242c,0);
  return;
}

