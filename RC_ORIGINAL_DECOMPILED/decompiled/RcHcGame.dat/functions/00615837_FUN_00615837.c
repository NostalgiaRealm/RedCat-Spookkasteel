/*
 * FUN_00615837 at 00615837
 * undefined FUN_00615837(void)
 * Address ranges: 00615837-00615867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00615837(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  FUN_006156c2();
  *param_1 = &PTR_LAB_00652680;
  if ((param_2 != 0) && ((uVar1 = *(uint *)(param_2 + 4) & 0xf, uVar1 == 1 || (uVar1 == 3)))) {
    param_2 = 0;
  }
  param_1[2] = param_2;
  return param_1;
}

