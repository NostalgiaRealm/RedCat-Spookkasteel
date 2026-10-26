/*
 * FUN_0054a280 at 0054a280
 * undefined FUN_0054a280(void)
 * Address ranges: 0054a280-0054a2ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0054a280(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2 = param_2 + 2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return;
}

