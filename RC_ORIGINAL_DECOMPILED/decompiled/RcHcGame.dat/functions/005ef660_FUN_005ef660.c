/*
 * FUN_005ef660 at 005ef660
 * undefined FUN_005ef660(void)
 * Address ranges: 005ef660-005ef699
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ef660(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = *(int **)(param_1 + 0x34);
  if (piVar2 != *(int **)(param_1 + 0x30)) {
    do {
      piVar2 = piVar2 + -1;
      iVar1 = FUN_005ecb70(*(undefined4 *)(*piVar2 + 0x20));
      iVar3 = iVar3 - iVar1;
      *(int *)(*piVar2 + 0x2c) = iVar3;
    } while (piVar2 != *(int **)(param_1 + 0x30));
  }
  return;
}

