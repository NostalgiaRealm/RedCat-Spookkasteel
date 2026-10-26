/*
 * FUN_004e2548 at 004e2548
 * undefined __register FUN_004e2548(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004e2548-004e2578
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2548(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  puVar3 = (undefined4 *)FUN_004e24f8(param_1,param_2);
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  return;
}

