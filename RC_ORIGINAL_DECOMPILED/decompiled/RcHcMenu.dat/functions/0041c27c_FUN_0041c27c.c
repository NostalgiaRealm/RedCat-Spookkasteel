/*
 * FUN_0041c27c at 0041c27c
 * undefined __register FUN_0041c27c(int param_1, undefined4 * param_2)
 * Address ranges: 0041c27c-0041c298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c27c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar3 = param_2;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = 0;
  param_2[2] = 0;
  return;
}

