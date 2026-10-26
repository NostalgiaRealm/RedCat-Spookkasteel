/*
 * FUN_006158ad at 006158ad
 * undefined FUN_006158ad(void)
 * Address ranges: 006158ad-006158d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_006158ad(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_006156c2();
  *param_1 = &PTR_LAB_0065268c;
  param_1[2] = param_2;
  if (param_2 == 2) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  param_1[3] = uVar1;
  return param_1;
}

