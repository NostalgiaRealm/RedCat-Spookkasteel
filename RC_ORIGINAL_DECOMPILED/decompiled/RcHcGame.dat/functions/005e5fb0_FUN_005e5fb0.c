/*
 * FUN_005e5fb0 at 005e5fb0
 * undefined FUN_005e5fb0(void)
 * Address ranges: 005e5fb0-005e6012
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e5fb0(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  cVar2 = FUN_00600c43();
  if (cVar2 == '\0') {
    piVar1 = *(int **)(param_1 + 4);
    iVar3 = *(int *)(*piVar1 + 4);
    if ((*(byte *)(iVar3 + 0xc + (int)piVar1) & 2) != 0) {
      uVar4 = 0;
      if ((*(byte *)((int)piVar1 + iVar3 + 4) & 6) == 0) {
        iVar3 = (**(code **)(**(int **)((int)piVar1 + iVar3 + 0x28) + 0x2c))();
        if (iVar3 == -1) {
          uVar4 = 4;
        }
      }
      if (uVar4 != 0) {
        uVar4 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar4;
        if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
          uVar4 = uVar4 | 4;
        }
        FUN_005fe7e4(uVar4,0);
      }
    }
  }
  return;
}

