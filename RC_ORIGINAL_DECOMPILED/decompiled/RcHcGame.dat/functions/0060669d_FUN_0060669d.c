/*
 * FUN_0060669d at 0060669d
 * undefined FUN_0060669d(void)
 * Address ranges: 0060669d-006066f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0060669d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar1;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_006516a8;
  FUN_005ff4d6(&DAT_006a1624);
  uVar1 = FUN_00600c09();
  *(undefined8 *)(extraout_ECX + 2) = uVar1;
  FUN_005ff58f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

