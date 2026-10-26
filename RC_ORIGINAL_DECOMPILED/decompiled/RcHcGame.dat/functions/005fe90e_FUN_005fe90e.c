/*
 * FUN_005fe90e at 005fe90e
 * undefined FUN_005fe90e(void)
 * Address ranges: 005fe90e-005fe94a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fe90e(void)

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

