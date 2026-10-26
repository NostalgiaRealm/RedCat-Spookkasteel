/*
 * FUN_0048f5b8 at 0048f5b8
 * undefined __register FUN_0048f5b8(int param_1, int * param_2)
 * Address ranges: 0048f5b8-0048f5de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 2 for TAppOrderPropRef. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x48e468 slot 2 for
   TAppOrderPropRef. Original bytes unchanged; names and types still inferred. */

void FUN_0048f5b8(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00403224(param_2,(int)&PTR_FUN_0048e468);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(iVar1 + 4);
  return;
}

