/*
 * FUN_004f6458 at 004f6458
 * undefined __register FUN_004f6458(int * param_1, int * param_2)
 * Address ranges: 004f6458-004f648b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 43 for TPageControl. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4f304c slot 43 for
   TPageControl. Original bytes unchanged; names and types still inferred. */

void FUN_004f6458(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004f2a94);
  if (((char)uVar1 != '\0') && (param_1 == (int *)param_2[0x7d])) {
    FUN_004f6404(param_1,param_2);
  }
  FUN_00438658((int)param_1);
  return;
}

