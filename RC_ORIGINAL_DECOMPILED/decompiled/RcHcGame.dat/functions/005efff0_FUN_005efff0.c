/*
 * FUN_005efff0 at 005efff0
 * undefined FUN_005efff0(void)
 * Address ranges: 005efff0-005f001a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005efff0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  if (puVar1 != *(undefined4 **)(param_1 + 0x4c)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x58))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0x4c));
  }
  return;
}

