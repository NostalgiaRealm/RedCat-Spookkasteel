/*
 * FUN_005fe5fb at 005fe5fb
 * undefined FUN_005fe5fb(void)
 * Address ranges: 005fe5fb-005fe653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe5fb(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_004040a0(0);
  sVar1 = _strlen("string too long");
  FUN_004040f0("string too long",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005fe655(unaff_EBP + -0x20);
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_00651404;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_00688c88);
}

