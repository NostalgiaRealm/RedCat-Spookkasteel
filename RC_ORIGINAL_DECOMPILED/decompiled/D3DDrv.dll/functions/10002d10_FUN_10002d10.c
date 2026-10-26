/*
 * FUN_10002d10 at 10002d10
 * undefined __cdecl FUN_10002d10(undefined4 * param_1, int * param_2)
 * Address ranges: 10002d10-10002d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10002d10(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 0x7c;
  (**(code **)(*param_2 + 0x58))(param_2,param_1);
  return;
}

