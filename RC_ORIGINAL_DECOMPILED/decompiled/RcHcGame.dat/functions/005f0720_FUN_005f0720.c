/*
 * FUN_005f0720 at 005f0720
 * undefined FUN_005f0720(void)
 * Address ranges: 005f0720-005f0758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f0720(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_005ef660();
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != *(int **)(param_1 + 0x4c)) {
    do {
      *(int *)(*piVar2 + 0x2c) = iVar3;
      iVar1 = FUN_005ecb70(*(undefined4 *)(*piVar2 + 0x20));
      iVar3 = iVar3 + iVar1;
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int **)(param_1 + 0x4c));
  }
  return;
}

