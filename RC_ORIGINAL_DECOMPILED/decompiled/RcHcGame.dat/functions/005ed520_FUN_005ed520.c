/*
 * FUN_005ed520 at 005ed520
 * undefined FUN_005ed520(void)
 * Address ranges: 005ed520-005ed541
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ed520(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 0x1c))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(param_1 + 0xc));
  }
  return;
}

