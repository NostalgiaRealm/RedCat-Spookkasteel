/*
 * FUN_006012a2 at 006012a2
 * undefined FUN_006012a2(void)
 * Address ranges: 006012a2-006019de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_006012a2(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  
  FUN_0060eb4c();
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(uint *)(unaff_EBP + -0x14) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x18);
      *(undefined4 **)(unaff_EBP + -0x10) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_006517fc;
        puVar3 = (undefined4 *)FUN_00600d9a(unaff_EBP + -0x28);
        puVar2[2] = *puVar3;
        puVar2[3] = puVar3[1];
        uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
        puVar2[4] = puVar3[2];
        puVar2[5] = puVar3[3];
      }
      iVar7 = DAT_0070fe48;
      if (DAT_0070fe48 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe48 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe48 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe48 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe48;
      uVar4 = FUN_00605cd2(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe48);
    }
    FUN_005ff427(uVar4,iVar7);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 8;
  *(uint *)(unaff_EBP + -0x10) = uVar1;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_006517d0;
      }
      iVar7 = DAT_0070fe4c;
      if (DAT_0070fe4c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe4c = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe4c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe4c = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe4c;
      puVar2 = (undefined4 *)FUN_00605d89(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe4c);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_006517b0;
      }
      iVar7 = DAT_0070fe3c;
      if (DAT_0070fe3c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe3c = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe3c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe3c = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe3c;
      puVar2 = (undefined4 *)FUN_00605e5a(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe3c);
    }
    FUN_005ff427(puVar2,iVar7);
    if (uVar1 != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar2 = operator_new(0x18);
        *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2[1] = 0;
          uVar4 = *(undefined4 *)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          *puVar2 = &PTR_FUN_00651794;
          FUN_00604370(uVar4);
        }
        bVar5 = DAT_0070fe2c == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar7 = DAT_0070fe2c;
        if (bVar5) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fe2c = DAT_0070fc04;
          iVar7 = DAT_0070fc04;
        }
      }
      else {
        if (DAT_0070fe2c == 0) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fe2c = DAT_0070fc04;
        }
        iVar7 = DAT_0070fe2c;
        puVar2 = (undefined4 *)FUN_00605f2b(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe2c);
      }
      FUN_005ff427(puVar2,iVar7);
    }
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_00651780;
        uVar6 = FUN_00609f1c();
        *(undefined8 *)(puVar2 + 2) = uVar6;
      }
      iVar7 = DAT_0070fe40;
      if (DAT_0070fe40 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe40 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe40 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe40 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe40;
      puVar2 = (undefined4 *)FUN_00605fe2(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe40);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if ((*(byte *)(unaff_EBP + 0xc) & 0x20) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        *puVar2 = &PTR_FUN_0065176c;
        FUN_006043cd(uVar4);
      }
      bVar5 = DAT_0070fe34 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fe34;
      if (bVar5) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe34 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe34 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe34 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe34;
      puVar2 = (undefined4 *)FUN_00606099(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe34);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 4;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_0065175c;
      }
      iVar7 = DAT_0070fe30;
      if (DAT_0070fe30 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe30 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe30 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe30 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe30;
      puVar2 = (undefined4 *)FUN_00606150(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe30);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_0065174c;
      }
      iVar7 = DAT_0070fe5c;
      if (DAT_0070fe5c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe5c = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe5c == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe5c = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe5c;
      puVar2 = (undefined4 *)FUN_00606221(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe5c);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x2c);
      *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        FUN_006052fb(*(undefined4 *)(unaff_EBP + 8),0,0);
        *puVar2 = &PTR_FUN_00651720;
      }
      bVar5 = DAT_0070fe58 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fe58;
      if (bVar5) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe58 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe58 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe58 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe58;
      puVar2 = (undefined4 *)FUN_006062f2(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe58);
    }
    FUN_005ff427(puVar2,iVar7);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puVar2 = operator_new(0x2c);
        *(undefined4 **)(unaff_EBP + -0x18) = puVar2;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_006052fb(*(undefined4 *)(unaff_EBP + 8),0,1);
          *puVar2 = &PTR_FUN_006516f4;
        }
        bVar5 = DAT_0070fe38 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar7 = DAT_0070fe38;
        if (bVar5) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fe38 = DAT_0070fc04;
          iVar7 = DAT_0070fc04;
        }
      }
      else {
        if (DAT_0070fe38 == 0) {
          DAT_0070fc04 = DAT_0070fc04 + 1;
          DAT_0070fe38 = DAT_0070fc04;
        }
        iVar7 = DAT_0070fe38;
        puVar2 = (undefined4 *)FUN_006063b5(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe38);
      }
      FUN_005ff427(puVar2,iVar7);
    }
  }
  uVar1 = *(uint *)(unaff_EBP + 0xc) & 0x10;
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        *puVar2 = &PTR_FUN_006516d4;
        FUN_0060533b(uVar4);
      }
      bVar5 = DAT_0070fe44 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fe44;
      if (bVar5) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe44 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe44 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe44 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe44;
      puVar2 = (undefined4 *)FUN_00606478(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe44);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (uVar1 != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0xc);
      *(undefined4 **)(unaff_EBP + 0xc) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar4 = *(undefined4 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        *puVar2 = &PTR_FUN_006516c8;
        FUN_00603561(uVar4);
      }
      bVar5 = DAT_0070fe54 == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar7 = DAT_0070fe54;
      if (bVar5) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe54 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe54 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe54 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe54;
      puVar2 = (undefined4 *)FUN_0060652f(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe54);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      puVar2 = operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = 0;
        *puVar2 = &PTR_FUN_006516a8;
        uVar6 = FUN_00600c09();
        *(undefined8 *)(puVar2 + 2) = uVar6;
      }
      iVar7 = DAT_0070fe50;
      if (DAT_0070fe50 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe50 = DAT_0070fc04;
        iVar7 = DAT_0070fc04;
      }
    }
    else {
      if (DAT_0070fe50 == 0) {
        DAT_0070fc04 = DAT_0070fc04 + 1;
        DAT_0070fe50 = DAT_0070fc04;
      }
      iVar7 = DAT_0070fe50;
      puVar2 = (undefined4 *)FUN_006065e6(*(undefined4 *)(unaff_EBP + 0x14),0,1,DAT_0070fe50);
    }
    FUN_005ff427(puVar2,iVar7);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

