/*
 * FUN_004160a4 at 004160a4
 * undefined __register FUN_004160a4(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004160a4-004160e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004160a4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 local_10 [3];
  
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  if ((char)uVar1 == '\x10') {
    FUN_0041586c(param_1,local_10,8);
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    FUN_00416230(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

