/*
 * FUN_00416f2c at 00416f2c
 * undefined __register FUN_00416f2c(int param_1, int * param_2, uint param_3)
 * Address ranges: 00416f2c-00416f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00416f2c(int param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  FUN_0041586c(param_1,&local_c,1);
  FUN_00403e98(param_2,(undefined4 *)0x0,local_c & 0xff);
  puVar1 = (undefined4 *)FUN_00404200(param_2);
  FUN_0041586c(param_1,puVar1,local_c & 0xff);
  return;
}

