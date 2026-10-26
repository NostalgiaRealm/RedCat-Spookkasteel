/*
 * FUN_005f4ee0 at 005f4ee0
 * undefined FUN_005f4ee0(void)
 * Address ranges: 005f4ee0-005f4f20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f4ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar1 = FUN_005ec380(param_1 + 0xc);
    (**(code **)(param_1 + 0x30))(uVar1);
    return;
  }
  uVar1 = FUN_005ec380(param_3);
  (**(code **)(param_1 + 0x30))(uVar1);
  return;
}

