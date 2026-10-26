/*
 * FUN_10002d30 at 10002d30
 * undefined __cdecl FUN_10002d30(undefined4 * param_1, int * param_2)
 * Address ranges: 10002d30-10002d52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002d30(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = *param_2;
  *param_1 = 0x7c;
  (**(code **)(iVar1 + 0x58))(param_2,param_1);
  return;
}

