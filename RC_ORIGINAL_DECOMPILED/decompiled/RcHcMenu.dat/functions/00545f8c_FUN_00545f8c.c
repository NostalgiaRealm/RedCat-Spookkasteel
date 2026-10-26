/*
 * FUN_00545f8c at 00545f8c
 * undefined __register FUN_00545f8c(int * param_1, int * param_2)
 * Address ranges: 00545f8c-00545fe2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 10 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 10 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00545f8c(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(param_2,(int)&LAB_005458f4);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    FUN_00403d94("Assertion failure");
  }
  FUN_004edfc0((int *)param_1[0x21],iVar1);
  FUN_0054a2b0(param_1);
  return;
}

