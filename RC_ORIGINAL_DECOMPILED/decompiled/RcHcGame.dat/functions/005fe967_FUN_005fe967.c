/*
 * FUN_005fe967 at 005fe967
 * undefined FUN_005fe967(void)
 * Address ranges: 005fe967-005fe9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005fe967(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0060b3a2(iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(extraout_ECX + 3) = uVar1;
  FUN_004040a0(0);
  FUN_0040cc00(iVar2 + 0xc,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_006514a8;
  return extraout_ECX;
}

