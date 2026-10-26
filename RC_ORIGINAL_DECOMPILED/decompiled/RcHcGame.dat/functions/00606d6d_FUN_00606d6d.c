/*
 * FUN_00606d6d at 00606d6d
 * undefined FUN_00606d6d(void)
 * Address ranges: 00606d6d-00606dcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00606d6d(void)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 10) = *(undefined1 *)(unaff_EBP + 0xc);
  *extraout_ECX = &PTR_FUN_0065185c;
  uVar1 = FUN_005ff4d6(&DAT_006a1624);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006059f2(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

