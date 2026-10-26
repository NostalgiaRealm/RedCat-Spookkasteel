/*
 * FUN_005fe747 at 005fe747
 * undefined FUN_005fe747(void)
 * Address ranges: 005fe747-005fe79f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe747(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004040a0(0);
  sVar1 = _strlen("invalid string position");
  FUN_004040f0("invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005fe655(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_00651434;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_006873f0);
}

