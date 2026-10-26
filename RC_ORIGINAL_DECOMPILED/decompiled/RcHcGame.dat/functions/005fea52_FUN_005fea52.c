/*
 * FUN_005fea52 at 005fea52
 * undefined FUN_005fea52(void)
 * Address ranges: 005fea52-005feaa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005fea52(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_006514b8;
  iVar1 = extraout_ECX[9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) ||
     ((&DAT_0070fbec)[iVar1] = (&DAT_0070fbec)[iVar1] + -1,
     (char)(&DAT_0070fbec)[extraout_ECX[9]] < '\x01')) {
    FUN_005feb31();
  }
  std::locale::~locale((locale *)(extraout_ECX + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

