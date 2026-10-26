/*
 * FUN_0041706c at 0041706c
 * undefined __register FUN_0041706c(undefined4 param_1, undefined4 param_2, uint param_3, int param_4)
 * Address ranges: 0041706c-00417093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041706c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *piVar2;
  
  piVar2 = (int *)(param_4 + -4);
  while( true ) {
    bVar1 = FUN_004155a0(*piVar2,param_2,param_3);
    if (bVar1) break;
    FUN_00417170(*piVar2,extraout_EDX_00,extraout_ECX_00);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_004162e8(*piVar2,extraout_EDX_00,extraout_ECX_00);
  return;
}

