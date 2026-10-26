/*
 * Catch@004f8cce at 004f8cce
 * undefined Catch@004f8cce(void)
 * Address ranges: 004f8cce-004f8d58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Catch_004f8cce(void)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int unaff_EBP;
  
  puVar3 = *(undefined1 **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  puVar1 = *(undefined1 **)(unaff_EBP + -0xb8);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  FUN_005ae390(unaff_EBP + -0x24,s_Error___s__compiling_script___s__0069cee4,puVar1,puVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x54d,unaff_EBP + -0x24);
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x550,
                                unaff_EBP + -0x24);
  (*pcVar2)();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004040a0(1);
  return 0x4f8b31;
}

