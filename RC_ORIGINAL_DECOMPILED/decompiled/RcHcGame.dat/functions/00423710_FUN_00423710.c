/*
 * FUN_00423710 at 00423710
 * undefined FUN_00423710(void)
 * Address ranges: 00423710-0042373e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00423710(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0xfc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0xfc))(1);
    *(undefined4 *)(param_1 + 0xfc) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  return;
}

