/*
 * FUN_00422c60 at 00422c60
 * undefined __register FUN_00422c60(int param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00422c60-00422c88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 21 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 21 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422c60(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_00422a34(param_1,param_2,param_3);
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 0xc);
  iVar2 = FUN_004147cc(piVar1);
  FUN_0041483c(param_2,piVar1[1],iVar2);
  return;
}

