/*
 * FUN_005ff32e at 005ff32e
 * undefined FUN_005ff32e(void)
 * Address ranges: 005ff32e-005ff426
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005ff32e(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 *extraout_ECX;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_0060eb4c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_FUN_006514cc;
  iVar1 = *(int *)(unaff_EBP + 8);
  extraout_ECX[2] = 0;
  extraout_ECX[3] = *(undefined4 *)(iVar1 + 0xc);
  extraout_ECX[4] = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(iVar1 + 0x14);
  *(undefined1 *)(extraout_ECX + 6) = *(undefined1 *)(iVar1 + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(0);
  FUN_0040cc00(iVar1 + 0x18,0,0xffffffff);
  *extraout_ECX = &PTR_FUN_006514c4;
  bVar6 = iVar1 == DAT_0070fbfc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar6) {
    uVar3 = FUN_005ff4d6(&DAT_006a1624);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_005fefc4(uVar3,0x3f,extraout_ECX,0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_005ff58f();
  }
  else {
    iVar5 = extraout_ECX[3];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar5 != 0) {
      pvVar4 = _malloc(iVar5 << 2);
      extraout_ECX[2] = pvVar4;
      if (pvVar4 == (void *)0x0) {
        FUN_006011d8();
      }
      iVar5 = extraout_ECX[3];
      while (iVar5 != 0) {
        iVar5 = iVar5 + -1;
        iVar2 = *(int *)(*(int *)(iVar1 + 8) + iVar5 * 4);
        *(int *)(extraout_ECX[2] + iVar5 * 4) = iVar2;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
          *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

