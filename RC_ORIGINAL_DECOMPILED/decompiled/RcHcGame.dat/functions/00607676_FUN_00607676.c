/*
 * FUN_00607676 at 00607676
 * undefined FUN_00607676(void)
 * Address ranges: 00607676-00607744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00607676(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_004040a0(0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar4 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc);
  uVar3 = uVar4;
  while( true ) {
    FUN_004eeef0(uVar3,0);
    FUN_004c4700();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_004c4700();
    if (uVar4 <= (-(uint)(iVar1 != 0) & *(int *)(unaff_EBP + -0x18) + iVar1) -
                 *(int *)(unaff_EBP + -0x1c)) {
      FUN_0060eb70(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar4);
    }
    if (uVar4 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar3 = uVar4 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_00608126(uVar4);
  puVar2 = *(undefined1 **)(unaff_EBP + 8);
  *puVar2 = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_004040a0(0);
  FUN_0040cc00(unaff_EBP + -0x20,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

