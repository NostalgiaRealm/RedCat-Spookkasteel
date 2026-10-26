/*
 * FUN_005ffc7e at 005ffc7e
 * undefined FUN_005ffc7e(void)
 * Address ranges: 005ffc7e-005ffd71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ffc7e(void)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_0060eb4c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar4 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0070ff98 = 0;
    uVar3 = FUN_005e7380(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_005ffd95(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar3);
    uVar3 = FUN_0060f17b(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar4 = uVar3;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    cVar2 = FUN_00600aa5(unaff_EBP + 0x14);
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0070ff98 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar4 = puVar4 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_005ffd46;
    cVar2 = FUN_00600aa5(unaff_EBP + 0x14);
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek();
    }
    if (*(char *)(unaff_EBP + 0x11) != ':') break;
    FUN_0060045f();
  }
  *puVar1 = *puVar1 | 2;
LAB_005ffd46:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *puVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar4[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

