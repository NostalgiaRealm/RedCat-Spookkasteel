/*
 * FUN_006020cd at 006020cd
 * undefined FUN_006020cd(void)
 * Address ranges: 006020cd-00602190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006020cd(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int iVar7;
  
  FUN_0060eb4c();
  DAT_0070ff98 = 0;
  iVar7 = *(int *)(unaff_EBP + 0x1c);
  uVar4 = FUN_005e7380(unaff_EBP + 0x1c);
  uVar5 = *(undefined4 *)(iVar7 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar5 = FUN_006035f4(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  iVar7 = unaff_EBP + -0x2f;
  if (*(char *)(unaff_EBP + -0x30) != '-') {
    iVar7 = unaff_EBP + -0x30;
  }
  iVar6 = FUN_0060f17b(iVar7,unaff_EBP + -0x10,uVar5);
  cVar3 = FUN_006069c8(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == iVar7) || (DAT_0070ff98 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    if (*(char *)(unaff_EBP + -0x30) == '-') {
      iVar6 = -iVar6;
    }
    **(int **)(unaff_EBP + 0x24) = iVar6;
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

