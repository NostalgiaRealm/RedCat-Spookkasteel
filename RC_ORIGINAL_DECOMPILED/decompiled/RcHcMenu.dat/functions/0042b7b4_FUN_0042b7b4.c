/*
 * FUN_0042b7b4 at 0042b7b4
 * undefined __register FUN_0042b7b4(int param_1, int * param_2)
 * Address ranges: 0042b7b4-0042b7d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 0 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 0 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_0042b7b4(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_00434828(param_1,param_2);
  uVar1 = FUN_00403224(param_2,(int)&PTR_FUN_004276e0);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return;
}

