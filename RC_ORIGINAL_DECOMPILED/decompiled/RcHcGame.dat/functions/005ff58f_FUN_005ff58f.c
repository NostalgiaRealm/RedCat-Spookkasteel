/*
 * FUN_005ff58f at 005ff58f
 * undefined FUN_005ff58f(void)
 * Address ranges: 005ff58f-005ff603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ff58f(void)

{
  int iVar1;
  undefined1 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    puVar2 = *(undefined1 **)(extraout_ECX + 0x24);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
    FUN_0060cb19(0,puVar2);
  }
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

