/*
 * Catch@0056aea7 at 0056aea7
 * undefined Catch@0056aea7(void)
 * Address ranges: 0056aea7-0056af0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_0056aea7(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  puVar1 = *(undefined1 **)(unaff_EBP + -0x38);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  puVar2 = (undefined4 *)FUN_005a1d60(puVar1,*(undefined4 *)(unaff_EBP + -0x1c));
  uVar3 = FUN_005ae390(unaff_EBP + -0x6c,s_Catch_Exception_at_SavePoint_____006a4314,*puVar2,
                       puVar2[1],puVar2[2],puVar2[3]);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_005aff00(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004040a0(1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

