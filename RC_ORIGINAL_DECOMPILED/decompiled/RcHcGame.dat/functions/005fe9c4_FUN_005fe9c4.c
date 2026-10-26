/*
 * FUN_005fe9c4 at 005fe9c4
 * undefined FUN_005fe9c4(void)
 * Address ranges: 005fe9c4-005fea00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe9c4(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_006514a8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

