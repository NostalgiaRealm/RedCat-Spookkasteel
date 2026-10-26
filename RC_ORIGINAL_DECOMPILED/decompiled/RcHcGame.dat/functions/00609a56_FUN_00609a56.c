/*
 * FUN_00609a56 at 00609a56
 * undefined FUN_00609a56(void)
 * Address ranges: 00609a56-00609ac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00609a56(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_006519cc;
  FUN_005ff4d6(&DAT_006a1624);
  puVar1 = (undefined4 *)FUN_00603589(unaff_EBP + 8);
  extraout_ECX[2] = *puVar1;
  *puVar1 = 0;
  FUN_0060b25d(*(undefined4 *)(unaff_EBP + 8));
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

