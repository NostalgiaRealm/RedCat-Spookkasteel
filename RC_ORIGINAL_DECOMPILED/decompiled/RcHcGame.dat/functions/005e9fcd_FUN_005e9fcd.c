/*
 * FUN_005e9fcd at 005e9fcd
 * undefined FUN_005e9fcd(void)
 * Address ranges: 005e9fcd-005ea00a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e9fcd(void)

{
  uint uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(uint *)(unaff_EBP + -0x18) != 0) {
    uVar1 = *(uint *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 4) | *(uint *)(unaff_EBP + -0x18);
    if (*(int *)((int)unaff_ESI + *(int *)(*unaff_ESI + 4) + 0x28) == 0) {
      uVar1 = uVar1 | 4;
    }
    FUN_005fe7e4(uVar1,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

