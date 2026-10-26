/*
 * FUN_005f12c0 at 005f12c0
 * undefined FUN_005f12c0(void)
 * Address ranges: 005f12c0-005f12e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f12c0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
    *(undefined4 *)(param_1 + 0x10) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

