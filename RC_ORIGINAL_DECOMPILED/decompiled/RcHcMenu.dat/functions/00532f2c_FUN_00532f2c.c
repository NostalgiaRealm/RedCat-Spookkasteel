/*
 * FUN_00532f2c at 00532f2c
 * undefined __register FUN_00532f2c(int param_1, int param_2)
 * Address ranges: 00532f2c-00532f7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00532f2c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_28 [7];
  int local_c;
  int local_8;
  
  bVar4 = 0;
  *(int *)(param_1 + 0x294) = param_2;
  if (param_2 != 0) {
    local_c = param_2;
    local_8 = param_1;
    iVar1 = FUN_00549b48(*(int *)(param_1 + 0x294));
    FUN_0048f02c(*(int **)(iVar1 + 0x10),0,local_28);
    puVar2 = local_28;
    puVar3 = (undefined4 *)(local_8 + 0x278);
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
  }
  return;
}

