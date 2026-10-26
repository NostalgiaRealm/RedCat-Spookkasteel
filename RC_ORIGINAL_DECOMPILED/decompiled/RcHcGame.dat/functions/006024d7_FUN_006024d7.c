/*
 * FUN_006024d7 at 006024d7
 * undefined FUN_006024d7(void)
 * Address ranges: 006024d7-006025d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006024d7(void)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  
  FUN_0060eb4c();
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = (undefined4 *)(unaff_EBP + -0x18);
  while( true ) {
    DAT_0070ff98 = 0;
    uVar4 = FUN_005e7380(unaff_EBP + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar4 = FUN_006035f4(unaff_EBP + -0x38,unaff_EBP + 0xc,unaff_EBP + 0x14,0x800,uVar4);
    uVar4 = FUN_0060f17b(unaff_EBP + -0x38,unaff_EBP + -0x14,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *puVar5 = uVar4;
    std::locale::~locale((locale *)(unaff_EBP + 0x20));
    cVar2 = FUN_006069c8(unaff_EBP + 0x14);
    if (cVar2 != '\0') {
      *puVar1 = *puVar1 | 1;
    }
    if ((*(int *)(unaff_EBP + -0x14) == unaff_EBP + -0x38) || (DAT_0070ff98 != 0)) break;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    puVar5 = puVar5 + 1;
    if (0 < *(int *)(unaff_EBP + -0x10)) goto LAB_006025a7;
    cVar2 = FUN_006069c8(unaff_EBP + 0x14);
    if (cVar2 != '\0') break;
    if (*(char *)(unaff_EBP + 0x10) == '\0') {
      Peek();
    }
    sVar3 = FUN_0060a03a(0x3a);
    if (*(short *)(unaff_EBP + 0x12) != sVar3) break;
    FUN_00605560();
  }
  *puVar1 = *puVar1 | 2;
LAB_006025a7:
  if ((*puVar1 & 2) == 0) {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x18);
  }
  puVar5 = *(undefined4 **)(unaff_EBP + 8);
  *puVar5 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar5[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

