/*
 * FUN_004218d4 at 004218d4
 * undefined __register FUN_004218d4(int param_1, int * param_2)
 * Address ranges: 004218d4-004218f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 20 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 20 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_004218d4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004147cc(param_2);
  iVar2 = FUN_004147b0(param_2);
  FUN_00421f94(param_1,param_2,iVar1 - iVar2);
  return;
}

