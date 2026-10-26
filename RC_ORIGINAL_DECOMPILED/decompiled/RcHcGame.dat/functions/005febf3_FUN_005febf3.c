/*
 * FUN_005febf3 at 005febf3
 * undefined FUN_005febf3(void)
 * Address ranges: 005febf3-005fecab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005febf3(void)

{
  void *pvVar1;
  size_t sVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar3 = DAT_0070fc00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    pvVar1 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x10) = pvVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (pvVar1 == (void *)0x0) {
      DAT_0070fc00 = 0;
    }
    else {
      DAT_0070fc00 = FUN_005fecf4(0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0060a57b(FUN_005fecac);
    *(undefined4 *)(DAT_0070fc00 + 0x10) = 0x3f;
    sVar2 = _strlen(&DAT_006a1624);
    FUN_004040f0(&DAT_006a1624,sVar2);
    DAT_0070fbfc = DAT_0070fc00;
    if (*(int *)(DAT_0070fc00 + 4) != -1) {
      *(int *)(DAT_0070fc00 + 4) = *(int *)(DAT_0070fc00 + 4) + 1;
    }
    _DAT_0070fbf8 = DAT_0070fbfc;
    iVar3 = DAT_0070fc00;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}

