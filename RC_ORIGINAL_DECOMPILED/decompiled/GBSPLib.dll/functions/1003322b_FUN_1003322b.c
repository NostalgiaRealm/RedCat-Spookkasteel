/*
 * FUN_1003322b at 1003322b
 * undefined FUN_1003322b(void)
 * Address ranges: 1003322b-10033257
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003322b(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_10033258(param_1,param_2,param_3,uVar1);
  return param_2;
}

