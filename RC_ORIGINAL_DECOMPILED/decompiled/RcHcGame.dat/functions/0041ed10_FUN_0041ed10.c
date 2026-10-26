/*
 * FUN_0041ed10 at 0041ed10
 * undefined FUN_0041ed10(void)
 * Address ranges: 0041ed10-0041ed5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_0041ed10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  puVar3 = param_2;
  while (puVar3 = puVar3 + 3, puVar3 != puVar1) {
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2 = puVar2 + 3;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0xc;
  return param_2;
}

