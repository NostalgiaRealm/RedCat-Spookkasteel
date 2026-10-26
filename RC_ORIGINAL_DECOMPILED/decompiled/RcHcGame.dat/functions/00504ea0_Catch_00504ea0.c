/*
 * Catch@00504ea0 at 00504ea0
 * undefined Catch@00504ea0(void)
 * Address ranges: 00504ea0-00504f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Catch_00504ea0(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_0060a613(*(undefined4 *)(unaff_EBP + -0x18),puVar1);
  uVar2 = FUN_0060b060();
  uVar2 = FUN_005ae390(unaff_EBP + -0x50,s_Couldn_t_Fire_event____s__s__0069e030,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x47f,
                                uVar2);
  (*pcVar3)();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_004040a0(1);
  return 0x504e23;
}

