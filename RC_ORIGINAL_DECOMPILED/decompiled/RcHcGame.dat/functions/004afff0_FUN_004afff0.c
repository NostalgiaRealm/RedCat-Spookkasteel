/*
 * FUN_004afff0 at 004afff0
 * undefined FUN_004afff0(void)
 * Address ranges: 004afff0-004b0015
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004afff0(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x68))(1);
    *(undefined4 *)(param_1 + 0x68) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}

