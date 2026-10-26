/*
 * FUN_005f0430 at 005f0430
 * undefined FUN_005f0430(void)
 * Address ranges: 005f0430-005f0455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f0430(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 8))(1);
    *(undefined4 *)(param_1 + 8) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

