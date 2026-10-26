/*
 * FUN_0060998b at 0060998b
 * undefined FUN_0060998b(void)
 * Address ranges: 0060998b-006099fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0060998b(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00651a70;
  FUN_005ff4d6(&DAT_006a1624);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uVar1 = FUN_00600a7c(&DAT_00651888,0);
  extraout_ECX[2] = uVar1;
  uVar1 = FUN_00600a7c(&PTR_DAT_00651884,0);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[3] = uVar1;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

