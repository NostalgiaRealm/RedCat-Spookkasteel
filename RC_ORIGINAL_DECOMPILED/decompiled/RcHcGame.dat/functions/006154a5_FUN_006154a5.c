/*
 * FUN_006154a5 at 006154a5
 * undefined FUN_006154a5(void)
 * Address ranges: 006154a5-006154c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_006154a5(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffff8f;
  uVar1 = FUN_0061591e(param_2);
  FUN_00615599(param_2,uVar1);
  return param_1;
}

