/*
 * FUN_00515040 at 00515040
 * undefined FUN_00515040(void)
 * Address ranges: 00515040-00515073
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00515040(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(param_2 + 4);
  if (puVar2 != puVar1) {
    param_2 = param_2 - (int)puVar2;
    do {
      *(undefined4 *)(param_2 + (int)puVar2) = *puVar2;
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  return;
}

