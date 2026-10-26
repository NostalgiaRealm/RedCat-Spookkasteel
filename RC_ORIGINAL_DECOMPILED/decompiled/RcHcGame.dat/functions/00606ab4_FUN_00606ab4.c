/*
 * FUN_00606ab4 at 00606ab4
 * undefined FUN_00606ab4(void)
 * Address ranges: 00606ab4-00606b25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00606ab4(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_0065176c;
  FUN_005ff4d6(&DAT_006a1624);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_006068bd(&DAT_00651888,0);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_006068bd(&PTR_DAT_00651884,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

