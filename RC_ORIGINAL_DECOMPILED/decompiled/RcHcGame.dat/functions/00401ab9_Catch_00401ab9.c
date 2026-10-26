/*
 * Catch@00401ab9 at 00401ab9
 * undefined Catch@00401ab9(void)
 * Address ranges: 00401ab9-00401ad9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_00401ab9(void)

{
  uint uVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  uVar1 = *(int *)(unaff_EBP + 8) + 2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  pvVar2 = operator_new(uVar1);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return &DAT_00401ada;
}

