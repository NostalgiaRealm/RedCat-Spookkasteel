/*
 * FUN_005ffa8c at 005ffa8c
 * undefined FUN_005ffa8c(void)
 * Address ranges: 005ffa8c-005ffb31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ffa8c(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_0060eb4c();
  DAT_0070ff98 = 0;
  uVar4 = FUN_005e7380(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar4 = FUN_0060012a(unaff_EBP + -0x60,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar4);
  fVar5 = (float10)FUN_00609f07(unaff_EBP + -0x60,unaff_EBP + -0x10,uVar4);
  *(float *)(unaff_EBP + -0x14) = (float)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_00600aa5(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -0x60) || (DAT_0070ff98 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0x24) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

