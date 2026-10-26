/*
 * FUN_005fefc4 at 005fefc4
 * undefined FUN_005fefc4(void)
 * Address ranges: 005fefc4-005ff2e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005fefc4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  
  FUN_0060eb4c();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x10) = uVar2;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar3 = &PTR_FUN_006515b4;
        FUN_005ff2e9(uVar4);
      }
      bVar5 = DAT_0070fc14 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fc14;
      if (bVar5) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc14 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fc14 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc14 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fc14;
      puVar3 = (undefined4 *)FUN_006004d8(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fc14);
    }
    FUN_005ff427(puVar3,iVar7);
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_00651588;
      }
      iVar7 = DAT_0070fc10;
      if (DAT_0070fc10 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc10 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fc10 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc10 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fc10;
      puVar3 = (undefined4 *)FUN_00600592(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fc10);
    }
    FUN_005ff427(puVar3,iVar7);
  }
  if (uVar2 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(8);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_00651568;
      }
      iVar7 = DAT_0070fc1c;
      if (DAT_0070fc1c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc1c = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fc1c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc1c = DAT_0070fc04;
      }
      iVar7 = DAT_0070fc1c;
      puVar3 = (undefined4 *)FUN_00600663(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fc1c);
    }
    FUN_005ff427(puVar3,iVar7);
    if (uVar2 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar3 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + 0x10) = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[1] = 0;
          uVar4 = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *puVar3 = &PTR_FUN_0065154c;
          FUN_00600416(uVar4);
        }
        bVar5 = DAT_0070fc18 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar7 = DAT_0070fc18;
        if (bVar5) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fc18 = DAT_0070fc04;
          iVar7 = DAT_0070fc04;
        }
      }
      else {
        if (DAT_0070fc18 == 0) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fc18 = DAT_0070fc04;
        }
        iVar7 = DAT_0070fc18;
        puVar3 = (undefined4 *)FUN_00600734(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fc18);
      }
      FUN_005ff427(puVar3,iVar7);
    }
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar3 = operator_new(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_0065152c;
        uVar6 = FUN_00600c09();
        *(undefined8 *)(puVar3 + 2) = uVar6;
      }
      iVar7 = DAT_0070fc0c;
      if (DAT_0070fc0c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc0c = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fc0c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fc0c = DAT_0070fc04;
      }
      iVar7 = DAT_0070fc0c;
      puVar3 = (undefined4 *)FUN_006007eb(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fc0c);
    }
    FUN_005ff427(puVar3,iVar7);
  }
  FUN_006071bc(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),iVar1,
               *(undefined4 *)(unaff_EBP + 0x14));
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  FUN_006012a2(*(undefined4 *)(unaff_EBP + 8),uVar2,iVar1,*(undefined4 *)(unaff_EBP + 0x14));
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | uVar2;
  uVar4 = FUN_005fef00(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0040cc00(uVar4,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004040a0(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}

