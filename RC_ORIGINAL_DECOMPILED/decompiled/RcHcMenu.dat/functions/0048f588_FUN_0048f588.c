/*
 * FUN_0048f588 at 0048f588
 * bool __register FUN_0048f588(int param_1, int * param_2)
 * Address ranges: 0048f588-0048f5b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 1 for TAppOrderPropRef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 1 for
   TAppOrderPropRef. Original bytes unchanged; names and types still inferred. */

bool FUN_0048f588(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0048e468);
  return *(char *)(iVar1 + 4) == *(char *)(param_1 + 4);
}

