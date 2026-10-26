/*
 * FUN_006068fb at 006068fb
 * undefined FUN_006068fb(void)
 * Address ranges: 006068fb-0060695a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_006068fb(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_006517fc;
  FUN_005ff4d6(&DAT_006a1624);
  puVar1 = (undefined4 *)FUN_00600d9a(unaff_EBP + -0x20);
  extraout_ECX[2] = *puVar1;
  extraout_ECX[3] = puVar1[1];
  extraout_ECX[4] = puVar1[2];
  extraout_ECX[5] = puVar1[3];
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

