/*
 * FUN_004aa9cc at 004aa9cc
 * undefined __register FUN_004aa9cc(int * param_1, undefined4 param_2, undefined * param_3, LPRECT param_4, int * param_5)
 * Address ranges: 004aa9cc-004aaa0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot 48 for TGDIHintWindow. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4aa588 slot 48 for
   TGDIHintWindow. Original bytes unchanged; names and types still inferred. */

void FUN_004aa9cc(int *param_1,undefined4 param_2,undefined *param_3,LPRECT param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_004aa7a8(param_1,param_5);
  param_1[0x81] = iVar1;
  iVar1 = FUN_004aa768(param_1);
  FUN_004ab2dc(iVar1,param_2,param_3,param_4,param_5);
  return;
}

