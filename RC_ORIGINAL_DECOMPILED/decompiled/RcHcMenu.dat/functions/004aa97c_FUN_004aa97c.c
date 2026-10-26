/*
 * FUN_004aa97c at 004aa97c
 * undefined __register FUN_004aa97c(int * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004aa97c-004aa9c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004aa97c(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1c [4];
  undefined4 local_c;
  int *local_8;
  
  puVar2 = local_1c;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_c = param_3;
  local_8 = param_1;
  iVar1 = FUN_004aa768(param_1);
  FUN_004aafc8(iVar1,local_1c,local_c,param_4);
  (**(code **)(*local_8 + 0xb8))(local_8,local_1c,local_c);
  return;
}

