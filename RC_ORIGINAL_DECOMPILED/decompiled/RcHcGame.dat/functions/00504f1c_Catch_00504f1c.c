/*
 * Catch@00504f1c at 00504f1c
 * undefined Catch@00504f1c(void)
 * Address ranges: 00504f1c-00504f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Catch_00504f1c(void)

{
  undefined4 uVar1;
  code *pcVar2;
  int unaff_EBP;
  
  FUN_0060a613(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x58));
  uVar1 = FUN_0060b060();
  uVar1 = FUN_005ae390(unaff_EBP + -0x50,s_Couldn_t_Fire_event____s__s__0069e030,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x483,
                                uVar1);
  (*pcVar2)();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_004040a0(1);
  return 0x504e23;
}

