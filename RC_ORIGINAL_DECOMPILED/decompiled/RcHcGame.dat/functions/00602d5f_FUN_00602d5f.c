/*
 * FUN_00602d5f at 00602d5f
 * undefined FUN_00602d5f(void)
 * Address ranges: 00602d5f-00602de8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00602d5f(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int unaff_EBP;
  
  FUN_0060eb4c();
  FUN_006043f5(unaff_EBP + -0x1c,unaff_EBP + 0xc,unaff_EBP + 0x14,*(undefined4 *)(unaff_EBP + 0x1c),
               *(undefined4 *)(unaff_EBP + 0x20));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar3 = FUN_006069c8(unaff_EBP + 0x14);
  puVar1 = *(uint **)(unaff_EBP + 0x24);
  if (cVar3 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    FUN_00605614(unaff_EBP + -0x1c,0,0xffffffff);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_00605987(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

