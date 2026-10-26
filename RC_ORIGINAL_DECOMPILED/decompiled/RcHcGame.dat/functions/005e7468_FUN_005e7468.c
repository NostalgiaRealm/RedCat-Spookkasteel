/*
 * FUN_005e7468 at 005e7468
 * undefined FUN_005e7468(void)
 * Address ranges: 005e7468-005e7504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e7468(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (unaff_EDI != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_005fe7e4(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_00600c43();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)(iVar3 + 0xc + (int)unaff_ESI) & 2) != 0)) {
    uVar2 = 0;
    if ((*(byte *)((int)unaff_ESI + iVar3 + 4) & 6) == 0) {
      iVar3 = (**(code **)(**(int **)((int)unaff_ESI + iVar3 + 0x28) + 0x2c))();
      if (iVar3 == -1) {
        uVar2 = 4;
      }
    }
    if (uVar2 != 0) {
      uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | uVar2;
      if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
        uVar2 = uVar2 | 4;
      }
      FUN_005fe7e4(uVar2,0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

