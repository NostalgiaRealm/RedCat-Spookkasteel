/*
 * FUN_0041f0d8 at 0041f0d8
 * undefined __register FUN_0041f0d8(int * param_1, int * param_2)
 * Address ranges: 0041f0d8-0041f132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot 2 for TPicture. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41aa00 slot 2 for TPicture.
   Original bytes unchanged; names and types still inferred. */

void FUN_0041f0d8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_0041ef20(param_1,(undefined4 *)0x0);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a91c);
    if ((char)uVar1 == '\0') {
      FUN_00412a74(param_1,param_2);
    }
    else {
      FUN_0041ef20(param_1,param_2);
    }
  }
  else {
    FUN_0041ef20(param_1,(undefined4 *)param_2[1]);
  }
  return;
}

