/*
 * FUN_006071bc at 006071bc
 * undefined FUN_006071bc(void)
 * Address ranges: 006071bc-00607637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006071bc(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  FUN_0060eb4c();
  iVar7 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (iVar7 == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00651a84;
        uVar5 = FUN_00609f1c();
        *(undefined8 *)(puVar2 + 2) = uVar5;
      }
      iVar6 = DAT_0070fee4;
      if (DAT_0070fee4 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fee4 = DAT_0070fc04;
        iVar6 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fee4 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fee4 = DAT_0070fc04;
      }
      iVar6 = DAT_0070fee4;
      puVar2 = (undefined4 *)FUN_00609333(iVar7,0,1,DAT_0070fee4);
    }
    FUN_005ff427(puVar2,iVar6);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (iVar7 == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar1 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        *puVar2 = &PTR_FUN_00651a70;
        FUN_0060814c(uVar1);
      }
      bVar4 = DAT_0070fed8 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar6 = DAT_0070fed8;
      if (bVar4) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed8 = DAT_0070fc04;
        iVar6 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fed8 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed8 = DAT_0070fc04;
      }
      iVar6 = DAT_0070fed8;
      puVar2 = (undefined4 *)FUN_006093ea(iVar7,0,1,DAT_0070fed8);
    }
    FUN_005ff427(puVar2,iVar6);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar3 != 0) {
    if (iVar7 == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00651a60;
      }
      iVar6 = DAT_0070fee0;
      if (DAT_0070fee0 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fee0 = DAT_0070fc04;
        iVar6 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fee0 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fee0 = DAT_0070fc04;
      }
      iVar6 = DAT_0070fee0;
      puVar2 = (undefined4 *)FUN_006094a1(iVar7,0,1,DAT_0070fee0);
    }
    FUN_005ff427(puVar2,iVar6);
  }
  if (uVar3 != 0) {
    if (iVar7 == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00651a50;
      }
      iVar6 = DAT_0070fec8;
      if (DAT_0070fec8 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fec8 = DAT_0070fc04;
        iVar6 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fec8 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fec8 = DAT_0070fc04;
      }
      iVar6 = DAT_0070fec8;
      puVar2 = (undefined4 *)FUN_00609572(iVar7,0,1,DAT_0070fec8);
    }
    FUN_005ff427(puVar2,iVar6);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 8;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_00608f8c(*(undefined4 *)(unaff_EBP + 8),0,0);
        *puVar2 = &PTR_FUN_00651a24;
      }
      bVar4 = DAT_0070fedc == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fedc;
      if (bVar4) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fedc = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fedc == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fedc = DAT_0070fc04;
      }
      iVar7 = DAT_0070fedc;
      puVar2 = (undefined4 *)FUN_00609643(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fedc);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_00608f8c(*(undefined4 *)(unaff_EBP + 8),0,1);
        *puVar2 = &PTR_FUN_006519f8;
      }
      bVar4 = DAT_0070fecc == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fecc;
      if (bVar4) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fecc = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fecc == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fecc = DAT_0070fc04;
      }
      iVar7 = DAT_0070fecc;
      puVar2 = (undefined4 *)FUN_00609706(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fecc);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  uVar3 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar1 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        *puVar2 = &PTR_FUN_006519d8;
        FUN_00608fcc(uVar1);
      }
      bVar4 = DAT_0070fed0 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fed0;
      if (bVar4) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed0 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fed0 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed0 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fed0;
      puVar2 = (undefined4 *)FUN_006097c9(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fed0);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (uVar3 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0x14) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar1 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *puVar2 = &PTR_FUN_006519cc;
        FUN_00603561(uVar1);
      }
      bVar4 = DAT_0070fed4 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fed4;
      if (bVar4) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed4 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fed4 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fed4 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fed4;
      puVar2 = (undefined4 *)FUN_00609880(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fed4);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

