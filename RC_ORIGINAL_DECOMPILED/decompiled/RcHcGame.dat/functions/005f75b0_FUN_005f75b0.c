/*
 * FUN_005f75b0 at 005f75b0
 * undefined FUN_005f75b0(void)
 * Address ranges: 005f75b0-005f75d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f75b0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}

