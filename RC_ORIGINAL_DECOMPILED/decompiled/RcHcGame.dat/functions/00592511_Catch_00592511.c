/*
 * Catch@00592511 at 00592511
 * undefined Catch@00592511(void)
 * Address ranges: 00592511-0059255b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_00592511(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  uVar2 = FUN_005ae390(unaff_EBP + -0x48,s_WinMain___caught_CDaviException__006a647c,puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0040cc00(uVar2,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004040a0(1);
  return &DAT_005925ef;
}

