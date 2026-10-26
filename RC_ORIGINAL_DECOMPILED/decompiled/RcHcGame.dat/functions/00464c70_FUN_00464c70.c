/*
 * FUN_00464c70 at 00464c70
 * undefined FUN_00464c70(void)
 * Address ranges: 00464c70-00464c9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00464c70(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x198) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x198))(1);
    *(undefined4 *)(param_1 + 0x198) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x198) = param_2;
  return;
}

