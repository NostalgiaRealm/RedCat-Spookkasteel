/*
 * FUN_004ccdd8 at 004ccdd8
 * undefined __register FUN_004ccdd8(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 004ccdd8-004cce23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ccdd8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [7];
  undefined4 local_2c [7];
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  puVar2 = local_2c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  puVar2 = local_2c;
  puVar3 = local_48;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_50 = param_2;
  local_4c = param_3;
  FUN_004ccce0(local_8,&local_50);
  return;
}

