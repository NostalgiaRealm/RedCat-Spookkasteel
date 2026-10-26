/*
 * FUN_00601d81 at 00601d81
 * undefined FUN_00601d81(void)
 * Address ranges: 00601d81-00601e5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_00601d81(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x14) = 0x782521;
  *(undefined1 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x24) = *(undefined1 *)(unaff_EBP + 0x1f);
  FUN_004040a0(0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(char *)(unaff_EBP + 0x20) == '\0') {
    *(undefined1 *)(unaff_EBP + -0x12) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  else {
    *(char *)(unaff_EBP + -0x12) = *(char *)(unaff_EBP + 0x20);
    *(undefined1 *)(unaff_EBP + -0x11) = *(undefined1 *)(unaff_EBP + 0x1c);
  }
  iVar5 = 0x10;
  while( true ) {
    FUN_004eeef0(iVar5,0);
    uVar4 = *(undefined4 *)(extraout_ECX + 8);
    *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x1c);
    FUN_004c4700();
    iVar3 = FUN_0060c091(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + 0x1c),
                         unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 0x18),uVar4);
    if (iVar3 != 0) break;
    iVar5 = iVar5 * 2;
  }
  FUN_004c4700();
  iVar5 = *(int *)(unaff_EBP + -0x20);
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    pcVar1 = (char *)(iVar5 + 1);
    iVar5 = iVar5 + 1;
    uVar4 = FUN_0060a03a((int)*pcVar1);
    FUN_006035a1(uVar4);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar2 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0x10);
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

