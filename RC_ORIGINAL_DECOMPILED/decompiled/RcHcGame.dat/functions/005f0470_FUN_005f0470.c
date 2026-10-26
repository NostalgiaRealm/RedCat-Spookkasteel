/*
 * FUN_005f0470 at 005f0470
 * undefined FUN_005f0470(void)
 * Address ranges: 005f0470-005f0495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f0470(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xc))(1);
    *(undefined4 *)(param_1 + 0xc) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

