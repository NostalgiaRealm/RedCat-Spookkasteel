/*
 * FUN_005ea0b6 at 005ea0b6
 * undefined FUN_005ea0b6(void)
 * Address ranges: 005ea0b6-005ea0f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ea0b6(void)

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

