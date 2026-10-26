/*
 * FUN_005fb96a at 005fb96a
 * undefined FUN_005fb96a(void)
 * Address ranges: 005fb96a-005fba05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fb96a(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar2 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar2 = uVar2 | 4;
    }
    FUN_005fe7e4(uVar2,0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  cVar1 = FUN_00600c43();
  if ((cVar1 == '\0') &&
     (iVar3 = *(int *)(*unaff_ESI + 4), (*(byte *)((int)unaff_ESI + iVar3 + 0xc) & 2) != 0)) {
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

