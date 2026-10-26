/*
 * FUN_00402a10 at 00402a10
 * undefined FUN_00402a10(void)
 * Address ranges: 00402a10-00402a56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00402a10(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 == *(int *)(param_1 + 0x18)) {
    if ((param_3 != *(undefined4 **)(param_1 + 0x1c)) && (param_3 != (undefined4 *)0x0)) {
      (**(code **)*param_3)(1);
      return;
    }
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18) = param_2;
    if (puVar1 != param_3) {
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 **)(param_1 + 0x1c) = param_3;
    }
  }
  return;
}

