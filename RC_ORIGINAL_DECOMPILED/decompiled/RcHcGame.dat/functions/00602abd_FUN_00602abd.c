/*
 * FUN_00602abd at 00602abd
 * undefined FUN_00602abd(void)
 * Address ranges: 00602abd-00602b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_00602abd(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_00605987(0);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uVar4 = *(int *)(unaff_EBP + 0x10) - *(int *)(unaff_EBP + 0xc) >> 1;
  uVar3 = uVar4;
  while( true ) {
    FUN_0060526c(uVar3,0);
    FUN_006058d2();
    iVar1 = *(int *)(unaff_EBP + -0x1c);
    FUN_006058d2();
    if (uVar4 <= (uint)((int)((-(uint)(iVar1 != 0) & iVar1 + *(int *)(unaff_EBP + -0x18) * 2) -
                             *(int *)(unaff_EBP + -0x1c)) >> 1)) {
      FUN_0060eb70(*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + 0xc),uVar4 * 2);
    }
    if (uVar4 <= *(uint *)(unaff_EBP + -0x18)) break;
    uVar3 = uVar4 - *(int *)(unaff_EBP + -0x18);
  }
  FUN_006052d5(uVar4);
  puVar2 = *(undefined1 **)(unaff_EBP + 8);
  *puVar2 = *(undefined1 *)(unaff_EBP + -0x20);
  FUN_00605987(0);
  FUN_00605614(unaff_EBP + -0x20,0,0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00605987(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}

