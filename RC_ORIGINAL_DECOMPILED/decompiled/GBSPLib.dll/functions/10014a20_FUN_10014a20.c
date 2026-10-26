/*
 * FUN_10014a20 at 10014a20
 * undefined FUN_10014a20(void)
 * Address ranges: 10014a20-10014a3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10014a20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x38))(param_2);
  return uVar1;
}

