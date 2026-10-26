/*
 * FUN_00603d6c at 00603d6c
 * undefined FUN_00603d6c(void)
 * Address ranges: 00603d6c-00604050
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00603d6c(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  size_t _MaxCount;
  
  FUN_0060eb4c();
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0x14);
  if (0 < (int)uVar2) {
    if ((uint)(*(int *)(unaff_EBP + 0x20) + *(int *)(unaff_EBP + 0x24)) < uVar2) {
      *(uint *)(unaff_EBP + -0x10) =
           (uVar2 - *(int *)(unaff_EBP + 0x20)) - *(int *)(unaff_EBP + 0x24);
      goto LAB_00603da1;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_00603da1:
  uVar2 = *(uint *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 0x1c0;
  if (uVar2 == 0x40) {
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    if (uVar2 == 0x100) {
      if ((*(int *)(unaff_EBP + 0x24) != 0) &&
         ((cVar1 = **(char **)(unaff_EBP + 0x1c), cVar1 == '+' || (cVar1 == '-')))) {
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
        uVar6 = FUN_0060a03a((int)cVar1);
        FUN_006035a1(uVar6);
        *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 1;
        *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) + -1;
        *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
      }
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x1c);
    }
    else {
      iVar10 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x10);
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x18));
      }
      uVar6 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar8 = *(undefined4 *)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  _MaxCount = *(size_t *)(unaff_EBP + 0x24);
  puVar3 = (undefined4 *)FUN_0060e6d3();
  pvVar4 = _memchr(*(void **)(unaff_EBP + 0x1c),(int)*(char *)*puVar3,_MaxCount);
  if (pvVar4 != (void *)0x0) {
    uVar5 = FUN_005e7380(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar5 = FUN_00605f2b(uVar5,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar5;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    iVar10 = (int)pvVar4 - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar9 = iVar10 + 1;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar6 = FUN_0060a03a((int)**(char **)(unaff_EBP + 0x10));
      FUN_006035a1(uVar6);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar6 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 4))();
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    FUN_006035a1(uVar6);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
    uVar6 = *(undefined4 *)(unaff_EBP + 0xc);
    uVar8 = *(undefined4 *)(unaff_EBP + 0x10);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar9;
  }
  pvVar4 = _memchr(*(void **)(unaff_EBP + 0x1c),0x65,*(size_t *)(unaff_EBP + 0x24));
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    iVar10 = (int)pvVar4 - *(int *)(unaff_EBP + 0x1c);
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x1c);
    iVar9 = iVar10 + 1;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar8;
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar6 = FUN_0060a03a((int)**(char **)(unaff_EBP + 0x10));
      FUN_006035a1(uVar6);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    }
    uVar6 = FUN_0060a03a(0x30);
    iVar10 = *(int *)(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x28);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      FUN_006035a1(uVar6);
    }
    *(undefined4 *)(unaff_EBP + 0x20) = 0;
    pcVar7 = &DAT_006a161c;
    if ((*(byte *)(*(int *)(unaff_EBP + 0x14) + 0xc) & 4) == 0) {
      pcVar7 = &DAT_006b0fac;
    }
    cVar1 = *pcVar7;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
    uVar6 = FUN_0060a03a((int)cVar1);
    FUN_006035a1(uVar6);
    *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + iVar9;
    uVar6 = *(undefined4 *)(unaff_EBP + -0x28);
    uVar8 = *(undefined4 *)(unaff_EBP + -0x24);
    *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x24) - iVar9;
  }
  pcVar7 = *(char **)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
  iVar10 = *(int *)(unaff_EBP + 0x24);
  *(undefined4 *)(unaff_EBP + 0x10) = uVar8;
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    uVar6 = FUN_0060a03a((int)*pcVar7);
    FUN_006035a1(uVar6);
    pcVar7 = pcVar7 + 1;
  }
  uVar6 = FUN_0060a03a(0x30);
  iVar10 = *(int *)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x10);
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_006035a1(uVar6);
  }
  iVar10 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(*(int *)(unaff_EBP + 0x14) + 0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
  for (; iVar10 != 0; iVar10 = iVar10 + -1) {
    FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + -0x18);
  puVar3[1] = *(undefined4 *)(unaff_EBP + -0x14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

