/*
 * Catch@00605bb3 at 00605bb3
 * undefined Catch@00605bb3(void)
 * Address ranges: 00605bb3-00605bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_00605bb3(void)

{
  int iVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 8) + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  pvVar2 = operator_new(iVar1 * 2);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return &DAT_00605bd4;
}

