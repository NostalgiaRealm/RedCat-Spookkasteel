/*
 * FUN_004394ac at 004394ac
 * undefined __register FUN_004394ac(int * param_1, int * param_2)
 * Address ranges: 004394ac-004394db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 0 for TCustomGroupBox. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4246cc slot 0 for
   TCustomGroupBox. Original bytes unchanged; names and types still inferred. */

void FUN_004394ac(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_00434464(param_1,param_2);
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0043d40c);
  if ((char)uVar1 != '\0') {
    FUN_0043dd58(param_2,param_1[0x54]);
  }
  return;
}

