/*
 * FUN_005efa30 at 005efa30
 * undefined FUN_005efa30(void)
 * Address ranges: 005efa30-005efa64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005efa30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != *(int **)(param_1 + 0xc)) {
    do {
      iVar1 = *piVar3;
      uVar2 = FUN_005f5e80(param_2);
      piVar3 = piVar3 + 1;
      **(undefined4 **)(iVar1 + 0x28) = uVar2;
    } while (piVar3 != *(int **)(param_1 + 0xc));
  }
  return;
}

