/*
 * FUN_004143d8 at 004143d8
 * undefined __register FUN_004143d8(int param_1, int param_2, int param_3)
 * Address ranges: 004143d8-004143fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004143d8(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 8);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + param_3 * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar2;
  *puVar2 = uVar3;
  uVar3 = puVar1[1];
  puVar1[1] = puVar2[1];
  puVar2[1] = uVar3;
  return;
}

