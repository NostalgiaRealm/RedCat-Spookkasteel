/*
 * FUN_0048f05c at 0048f05c
 * undefined __register FUN_0048f05c(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0048f05c-0048f08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048f05c(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  puVar1 = (undefined4 *)FUN_0045d430(param_1,param_2);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + (uint)bVar3 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
  }
  return;
}

