/*
 * FUN_0041546c at 0041546c
 * undefined __register FUN_0041546c(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 0041546c-0041548e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041546c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  if ((char)param_2 != (char)uVar1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00417170(param_1,extraout_EDX,extraout_ECX);
    FUN_00415400();
  }
  return;
}

