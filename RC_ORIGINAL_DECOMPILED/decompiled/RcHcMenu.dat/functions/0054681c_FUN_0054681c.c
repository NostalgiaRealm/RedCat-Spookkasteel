/*
 * FUN_0054681c at 0054681c
 * int * __register FUN_0054681c(int param_1)
 * Address ranges: 0054681c-00546860
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 13 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 13 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

int * FUN_0054681c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = FUN_00546ee8((int *)&LAB_005458f4,'\x01',param_1);
  piVar2 = FUN_004eee74(*(int *)(param_1 + 0x84));
  iVar3 = FUN_00403224(piVar1,(int)&LAB_005458f4);
  *(int **)(iVar3 + 0xc) = piVar2;
  return piVar1;
}

