/*
 * FUN_006025d3 at 006025d3
 * undefined FUN_006025d3(void)
 * Address ranges: 006025d3-00602785
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_006025d3(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  
  FUN_0060eb4c();
  iVar5 = *(int *)(unaff_EBP + 0x14);
  uVar4 = FUN_005e7380(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00605f2b(uVar4,0,1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x14));
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_00605987(0);
  uVar2 = *(uint *)(iVar5 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((uVar2 & 0x4000) == 0) {
    uVar4 = FUN_0060a03a((*(char *)(unaff_EBP + 0x1c) != '\0') + '0');
    FUN_0060526c(1,uVar4);
  }
  else {
    if (*(char *)(unaff_EBP + 0x1c) == '\0') {
      uVar4 = FUN_006091ca(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00605614(uVar4,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      uVar4 = FUN_00604359(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00605614(uVar4,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    FUN_00605987(1);
  }
  uVar2 = *(uint *)(iVar5 + 0x14);
  if (((int)uVar2 < 1) || (uVar2 <= *(uint *)(unaff_EBP + -0x24))) {
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
  }
  else {
    *(uint *)(unaff_EBP + 0x1c) = uVar2 - *(int *)(unaff_EBP + -0x24);
  }
  if ((*(uint *)(iVar5 + 0xc) & 0x1c0) != 0x40) {
    iVar6 = *(int *)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x18));
    }
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  puVar7 = *(undefined2 **)(unaff_EBP + -0x28);
  if (puVar7 == (undefined2 *)0x0) {
    puVar7 = &DAT_00651838;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x24);
    do {
      FUN_006035a1(*puVar7);
      puVar7 = puVar7 + 1;
      piVar1 = (int *)(unaff_EBP + 0x14);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(iVar5 + 0x14) = 0;
  iVar5 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x10);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_006035a1(*(undefined4 *)(unaff_EBP + 0x18));
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00605987(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}

