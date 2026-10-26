/*
 * FUN_00416f68 at 00416f68
 * undefined __register FUN_00416f68(int param_1, int * param_2, uint param_3)
 * Address ranges: 00416f68-00416fc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416f68(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  uint local_c;
  
  local_c = 0;
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  if ((char)uVar1 == '\x06') {
    FUN_0041586c(param_1,&local_c,1);
  }
  else if ((char)uVar1 == '\f') {
    FUN_0041586c(param_1,&local_c,4);
  }
  else {
    FUN_00415400();
  }
  FUN_00403e98(param_2,(undefined4 *)0x0,local_c);
  FUN_0041586c(param_1,(undefined4 *)*param_2,local_c);
  return;
}

