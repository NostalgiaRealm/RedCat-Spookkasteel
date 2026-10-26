/*
 * FUN_00439f54 at 00439f54
 * undefined __register FUN_00439f54(int * param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 00439f54-00439f7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00439f54(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_14 [4];
  
  puVar2 = local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,local_14,param_3);
  return;
}

