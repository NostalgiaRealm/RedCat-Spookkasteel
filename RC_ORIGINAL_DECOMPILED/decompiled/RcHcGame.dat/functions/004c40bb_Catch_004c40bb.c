/*
 * Catch@004c40bb at 004c40bb
 * undefined Catch@004c40bb(void)
 * Address ranges: 004c40bb-004c4103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_004c40bb(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(unaff_EBP + -0x78);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  uVar2 = FUN_005ae390(unaff_EBP + -0x34,s_CAdamApplication__InitializeMult_006985e8,puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x6ae,uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_004040a0(1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

