/*
 * Catch@004f8e9b at 004f8e9b
 * undefined Catch@004f8e9b(void)
 * Address ranges: 004f8e9b-004f8ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_004f8e9b(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int unaff_EBP;
  
  uVar1 = FUN_005ae390(unaff_EBP + -0xac,s_Caught_unhandled_exception_durin_0069ce2c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x568,
                                uVar1);
  (*pcVar2)();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004040a0(1);
  return &DAT_004f8ee4;
}

