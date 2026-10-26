/*
 * FUN_005ff4d6 at 005ff4d6
 * undefined FUN_005ff4d6(void)
 * Address ranges: 005ff4d6-005ff58e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005ff4d6(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined1 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x10] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x20] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x30] = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  pcVar1 = (char *)FUN_0060cb19(0,0);
  *(char **)(unaff_EBP + -0x10) = pcVar1;
  sVar2 = _strlen(pcVar1);
  FUN_004040f0(*(undefined4 *)(unaff_EBP + -0x10),sVar2);
  if (*(int *)(unaff_EBP + 8) != 0) {
    pcVar1 = (char *)FUN_0060cb19(0,*(undefined4 *)(unaff_EBP + 8));
    if (pcVar1 != (char *)0x0) goto LAB_005ff56b;
  }
  pcVar1 = &DAT_006b1580;
LAB_005ff56b:
  sVar2 = _strlen(pcVar1);
  FUN_004040f0(pcVar1,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

