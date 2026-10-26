/*
 * Catch@004be68d at 004be68d
 * undefined Catch@004be68d(void)
 * Address ranges: 004be68d-004be6d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_004be68d(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x24) + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  uVar2 = FUN_005ae390(unaff_EBP + -0x48,s_CAdamApplication__Start___caught_00697984,puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x238,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return &DAT_004be7b7;
}

