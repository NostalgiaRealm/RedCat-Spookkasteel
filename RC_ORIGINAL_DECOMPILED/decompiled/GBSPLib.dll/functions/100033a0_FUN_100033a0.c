/*
 * FUN_100033a0 at 100033a0
 * undefined FUN_100033a0(void)
 * Address ranges: 100033a0-10003400
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100033a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_10001de0(*(undefined4 *)(param_2 + 0x5c),param_1,0,0x10,0,&param_2,&param_1);
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 != 0) {
    FUN_10001790(param_2);
  }
  if (param_1 != 0) {
    FUN_10001790(param_1);
  }
  return uVar1;
}

