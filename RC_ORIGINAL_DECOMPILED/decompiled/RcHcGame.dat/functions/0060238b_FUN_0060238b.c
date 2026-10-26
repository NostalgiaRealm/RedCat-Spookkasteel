/*
 * FUN_0060238b at 0060238b
 * undefined FUN_0060238b(void)
 * Address ranges: 0060238b-00602430
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060238b(void)

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
  uVar4 = FUN_006039c3(unaff_EBP + -100,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar4);
  fVar5 = (float10)FUN_00609ecb(unaff_EBP + -100,unaff_EBP + -0x10,uVar4);
  *(double *)(unaff_EBP + -0x18) = (double)fVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  std::locale::~locale((locale *)(unaff_EBP + 0x1c));
  cVar3 = FUN_006069c8(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x20);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if ((*(int *)(unaff_EBP + -0x10) == unaff_EBP + -100) || (DAT_0070ff98 != 0)) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    **(undefined8 **)(unaff_EBP + 0x24) = *(undefined8 *)(unaff_EBP + -0x18);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

