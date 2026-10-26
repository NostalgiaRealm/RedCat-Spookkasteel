/*
 * FUN_005ff604 at 005ff604
 * undefined FUN_005ff604(void)
 * Address ranges: 005ff604-005ff7ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005ff604(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int unaff_EBP;
  
  FUN_0060eb4c();
  *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  if ((*(uint *)(iVar1 + 0xc) & 0x4000) == 0) {
    DAT_0070ff98 = 0;
    uVar7 = FUN_005e7380(unaff_EBP + -0x14);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    uVar5 = FUN_005ffd95(unaff_EBP + -0x48,unaff_EBP + 0xc,unaff_EBP + 0x14,uVar5,uVar7);
    uVar8 = FUN_0060f17b(unaff_EBP + -0x48,unaff_EBP + -0x18,uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + -0x14));
    if (((*(int *)(unaff_EBP + -0x18) != unaff_EBP + -0x48) && (DAT_0070ff98 == 0)) && (uVar8 < 2))
    {
      *(uint *)(unaff_EBP + -0x10) = uVar8;
    }
  }
  else {
    uVar5 = FUN_005e7380(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00600734(uVar5,0,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    std::locale::~locale((locale *)(unaff_EBP + 0x1c));
    *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x1f);
    FUN_004040a0(0);
    FUN_005ae2a0(1,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar5 = FUN_005e8bf0(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0045db40(uVar5,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004040a0(1);
    FUN_004eeef0(1,0);
    uVar5 = FUN_005e8c10(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0045db40(uVar5,0,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_004040a0(1);
    puVar6 = *(undefined1 **)(unaff_EBP + -0x24);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar5 = FUN_006008a2(unaff_EBP + 0xc,unaff_EBP + 0x14,2,puVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
    FUN_004040a0(1);
  }
  cVar4 = FUN_00600aa5(unaff_EBP + 0x14);
  puVar2 = *(uint **)(unaff_EBP + 0x20);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  if (*(int *)(unaff_EBP + -0x10) < 0) {
    *puVar2 = *puVar2 | 2;
  }
  else {
    *(bool *)*(undefined4 *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x10) != 0;
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  puVar3[1] = *(undefined4 *)(unaff_EBP + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

