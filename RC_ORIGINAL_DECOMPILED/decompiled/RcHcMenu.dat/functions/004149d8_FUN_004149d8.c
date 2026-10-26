/*
 * FUN_004149d8 at 004149d8
 * undefined __register FUN_004149d8(int * param_1, undefined4 param_2)
 * Address ranges: 004149d8-004149f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004149d8(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1,param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  FUN_0040e13c(BVar1);
  return;
}

