/*
 * FUN_0061dc9e at 0061dc9e
 * undefined FUN_0061dc9e(void)
 * Address ranges: 0061dc9e-0061dcca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061dc9e(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 == 10) && (param_1 < 0)) {
    uVar1 = 1;
    param_3 = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_0061dccb(param_1,param_2,param_3,uVar1);
  return param_2;
}

