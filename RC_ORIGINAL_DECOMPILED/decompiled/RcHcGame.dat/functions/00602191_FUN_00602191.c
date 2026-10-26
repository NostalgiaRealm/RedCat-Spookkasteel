/*
 * FUN_00602191 at 00602191
 * undefined FUN_00602191(void)
 * Address ranges: 00602191-0060223a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00602191(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_EBP;
  
  FUN_0060eb4c();
  DAT_0070ff98 = 0;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  uVar5 = FUN_005e7380(unaff_EBP + 0x1c);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar6 = FUN_006035f4(unaff_EBP + -0x30,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar6,uVar5);
  uVar6 = FUN_0060ef5c(unaff_EBP + -0x30,unaff_EBP + -0x10,uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar4 = FUN_006069c8(unaff_EBP + 0x14);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x30) || (DAT_0070ff98 != 0)) {
    *puVar2 = *puVar2 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = uVar6;
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

