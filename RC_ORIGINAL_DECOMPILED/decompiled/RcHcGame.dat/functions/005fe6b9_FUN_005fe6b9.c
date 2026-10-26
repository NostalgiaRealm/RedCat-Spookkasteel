/*
 * FUN_005fe6b9 at 005fe6b9
 * undefined FUN_005fe6b9(void)
 * Address ranges: 005fe6b9-005fe6f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe6b9(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_00651424;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

