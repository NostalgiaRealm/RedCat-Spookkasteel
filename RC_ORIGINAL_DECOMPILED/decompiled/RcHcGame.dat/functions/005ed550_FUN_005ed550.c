/*
 * FUN_005ed550 at 005ed550
 * undefined FUN_005ed550(void)
 * Address ranges: 005ed550-005ed57a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ed550(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x20))(param_2);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  return;
}

