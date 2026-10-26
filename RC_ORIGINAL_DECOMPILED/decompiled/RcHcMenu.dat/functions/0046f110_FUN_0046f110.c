/*
 * FUN_0046f110 at 0046f110
 * undefined __register FUN_0046f110(int * param_1, int * param_2)
 * Address ranges: 0046f110-0046f13e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4663b4 slot 0 for TParams. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4663b4 slot 0 for TParams.
   Original bytes unchanged; names and types still inferred. */

void FUN_0046f110(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004663b4);
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1);
    return;
  }
  FUN_00412b58(param_1,param_2);
  return;
}

