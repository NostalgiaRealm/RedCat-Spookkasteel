/*
 * FUN_005fecf4 at 005fecf4
 * undefined FUN_005fecf4(void)
 * Address ranges: 005fecf4-005fed65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005fecf4(void)

{
  undefined1 uVar1;
  size_t sVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_FUN_006514cc;
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  uVar1 = *(undefined1 *)(unaff_EBP + 0xb);
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *(undefined1 *)(extraout_ECX + 6) = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(0);
  sVar2 = _strlen(&DAT_006b1580);
  FUN_004040f0(&DAT_006b1580,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_006514c4;
  return extraout_ECX;
}

