/*
 * FUN_0048c550 at 0048c550
 * undefined __register FUN_0048c550(int * param_1, VARIANTARG * param_2)
 * Address ranges: 0048c550-0048c571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048c550(int *param_1,VARIANTARG *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x6c))();
  FUN_004053dc(param_2,uVar1);
  return;
}

