/*
 * FUN_10014a00 at 10014a00
 * undefined FUN_10014a00(void)
 * Address ranges: 10014a00-10014a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10014a00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x34))(param_2);
  return uVar1;
}

