/*
 * FUN_005e5f03 at 005e5f03
 * undefined FUN_005e5f03(void)
 * Address ranges: 005e5f03-005e5fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e5f03(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_EDI;
  
  piVar1 = *(int **)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar3 = *(uint *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_EDI + *(int *)(*unaff_EDI + 4) + 0x28) == 0) {
      uVar3 = uVar3 | 4;
    }
    FUN_005fe7e4(uVar3,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar2 = FUN_00600c43();
  if ((cVar2 == '\0') &&
     (iVar4 = *(int *)(*piVar1 + 4), (*(byte *)(iVar4 + 0xc + (int)piVar1) & 2) != 0)) {
    uVar3 = 0;
    if ((*(byte *)((int)piVar1 + iVar4 + 4) & 6) == 0) {
      iVar4 = (**(code **)(**(int **)((int)piVar1 + iVar4 + 0x28) + 0x2c))();
      if (iVar4 == -1) {
        uVar3 = 4;
      }
    }
    if (uVar3 != 0) {
      uVar3 = *(uint *)((int)piVar1 + *(int *)(*piVar1 + 4) + 4) | uVar3;
      if (*(int *)((int)piVar1 + *(int *)(*piVar1 + 4) + 0x28) == 0) {
        uVar3 = uVar3 | 4;
      }
      FUN_005fe7e4(uVar3,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

