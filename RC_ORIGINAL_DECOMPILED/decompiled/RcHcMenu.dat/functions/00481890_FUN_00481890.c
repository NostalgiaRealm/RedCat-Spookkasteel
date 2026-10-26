/*
 * FUN_00481890 at 00481890
 * undefined __register FUN_00481890(int param_1, int * param_2, char param_3)
 * Address ranges: 00481890-004818e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot 4 for TSession. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47d4c0 slot 4 for TSession.
   Original bytes unchanged; names and types still inferred. */

void FUN_00481890(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  FUN_0041922c(param_1,(int)param_2,param_3);
  if ((*(char *)(param_1 + 0x43) != '\0') && (param_3 == '\0')) {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0047e718);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0047d7a0);
      if ((char)uVar1 != '\0') {
        param_2[0x1e] = param_1;
      }
    }
    else {
      FUN_00403e04(param_2 + 0x8d,*(undefined4 **)(param_1 + 0x48));
    }
  }
  return;
}

