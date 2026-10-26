/*
 * FUN_005fe655 at 005fe655
 * undefined FUN_005fe655(void)
 * Address ranges: 005fe655-005fe6b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005fe655(void)

{
  undefined1 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_006b3f70;
  FUN_0060b365(unaff_EBP + -0x10);
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = *puVar1;
  FUN_004040a0(0);
  FUN_0040cc00(puVar1,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_00651424;
  return extraout_ECX;
}

