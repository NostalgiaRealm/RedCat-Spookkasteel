/*
 * FUN_00608f8c at 00608f8c
 * undefined FUN_00608f8c(void)
 * Address ranges: 00608f8c-00608fcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00608f8c(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 0xc);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0x10);
  *extraout_ECX = &PTR_FUN_00651a98;
  FUN_006091f8(uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

