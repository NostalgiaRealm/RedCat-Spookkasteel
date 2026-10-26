/*
 * FUN_00606a60 at 00606a60
 * undefined FUN_00606a60(void)
 * Address ranges: 00606a60-00606ab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00606a60(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_00651780;
  FUN_005ff4d6(&DAT_006a1624);
  uVar1 = FUN_00609f1c();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

