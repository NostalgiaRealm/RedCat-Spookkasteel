/*
 * FUN_005e7601 at 005e7601
 * undefined FUN_005e7601(void)
 * Address ranges: 005e7601-005e763d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e7601(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  uint unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (unaff_EDI != 0) {
    uVar1 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | unaff_EDI;
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    FUN_005fe7e4(uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

