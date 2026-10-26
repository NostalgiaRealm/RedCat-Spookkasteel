/*
 * FUN_006099fd at 006099fd
 * undefined FUN_006099fd(void)
 * Address ranges: 006099fd-00609a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_006099fd(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_006519d8;
  uVar1 = FUN_005ff4d6(&DAT_006a1624);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00608fcc(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

