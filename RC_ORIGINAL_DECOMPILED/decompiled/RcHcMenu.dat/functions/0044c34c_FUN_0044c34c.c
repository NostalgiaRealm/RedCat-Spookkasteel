/*
 * FUN_0044c34c at 0044c34c
 * undefined __register FUN_0044c34c(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0044c34c-0044c36d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044c34c(int *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x216);
  FUN_0044c24c(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0xb0))();
  }
  return;
}

