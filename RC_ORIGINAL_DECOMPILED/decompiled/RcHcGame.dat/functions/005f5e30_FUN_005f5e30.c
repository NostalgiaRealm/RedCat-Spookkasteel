/*
 * FUN_005f5e30 at 005f5e30
 * undefined FUN_005f5e30(void)
 * Address ranges: 005f5e30-005f5e7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f5e30(short *param_1,undefined4 param_2)

{
  undefined2 extraout_var;
  short sVar1;
  
  FUN_005e9da0((char)*param_1);
  if ((*param_1 != 0xff) && (sVar1 = 0, 0 < *param_1)) {
    do {
      FUN_005e9da0((char)param_1[sVar1 * 2 + 2]);
      FUN_005e6ef0(param_2,CONCAT22(extraout_var,param_1[sVar1 + 0xc]));
      sVar1 = sVar1 + 1;
    } while (sVar1 < *param_1);
  }
  return;
}

