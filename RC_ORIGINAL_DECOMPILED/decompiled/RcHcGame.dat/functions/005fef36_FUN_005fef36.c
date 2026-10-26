/*
 * FUN_005fef36 at 005fef36
 * undefined FUN_005fef36(void)
 * Address ranges: 005fef36-005fefc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005fef36(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar3 = *extraout_ECX;
  if (1 < *(uint *)(iVar3 + 4)) {
    iVar1 = *(int *)(iVar3 + 4);
    if ((iVar1 != 0) && (iVar1 != -1)) {
      *(int *)(iVar3 + 4) = iVar1 + -1;
    }
    pvVar2 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = pvVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005ff32e(*extraout_ECX);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *extraout_ECX = iVar3;
  }
  FUN_005ff427(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    sVar4 = _strlen(&DAT_006b1580);
    FUN_004040f0(&DAT_006b1580,sVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

