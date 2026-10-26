/*
 * FUN_00416fc8 at 00416fc8
 * undefined __register FUN_00416fc8(int param_1, int * param_2, uint param_3)
 * Address ranges: 00416fc8-0041700d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416fc8(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  UINT local_c;
  
  local_c = 0;
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  if ((char)uVar1 != '\x12') {
    FUN_00415400();
  }
  FUN_0041586c(param_1,&local_c,4);
  FUN_0040471c(param_2,local_c);
  FUN_0041586c(param_1,(undefined4 *)*param_2,local_c * 2);
  return;
}

