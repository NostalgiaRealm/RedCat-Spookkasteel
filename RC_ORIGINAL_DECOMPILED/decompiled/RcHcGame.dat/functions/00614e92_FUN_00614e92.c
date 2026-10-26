/*
 * FUN_00614e92 at 00614e92
 * undefined FUN_00614e92(void)
 * Address ranges: 00614e92-00614ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00614e92(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = param_1[1] & 0xffffff80;
  if (param_2 != 0) {
    uVar1 = FUN_0061591e(param_2);
    FUN_00615599(param_2,uVar1);
  }
  return param_1;
}

