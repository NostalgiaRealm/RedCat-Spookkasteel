/*
 * FUN_0058ef30 at 0058ef30
 * undefined FUN_0058ef30(void)
 * Address ranges: 0058ef30-0058ef5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0058ef30(int param_1,undefined4 param_2)

{
  undefined4 unaff_retaddr;
  
  if (*(undefined4 **)(param_1 + 0x178) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x178))(1);
    *(undefined4 *)(param_1 + 0x178) = unaff_retaddr;
    return;
  }
  *(undefined4 *)(param_1 + 0x178) = param_2;
  return;
}

