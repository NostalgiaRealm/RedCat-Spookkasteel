/*
 * FUN_0042d770 at 0042d770
 * undefined __register FUN_0042d770(int * param_1, int * param_2)
 * Address ranges: 0042d770-0042d7ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42d23c slot 2 for TClipboard. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42d23c slot 2 for
   TClipboard. Original bytes unchanged; names and types still inferred. */

void FUN_0042d770(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
  if ((char)uVar1 != '\0') {
    FUN_0042d668((int)param_1,(int)param_2);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a91c);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    FUN_0042d6ec((int)param_1,param_2);
  }
  return;
}

