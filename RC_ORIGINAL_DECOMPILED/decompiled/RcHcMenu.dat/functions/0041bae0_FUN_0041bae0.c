/*
 * FUN_0041bae0 at 0041bae0
 * undefined __register FUN_0041bae0(int param_1, undefined4 * param_2)
 * Address ranges: 0041bae0-0041baf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bae0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x10);
  puVar3 = param_2;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_2 = 0;
  return;
}

