/*
 * FUN_005f13b0 at 005f13b0
 * undefined FUN_005f13b0(void)
 * Address ranges: 005f13b0-005f13d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f13b0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x18))(1);
    *(undefined4 *)(param_1 + 0x18) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}

