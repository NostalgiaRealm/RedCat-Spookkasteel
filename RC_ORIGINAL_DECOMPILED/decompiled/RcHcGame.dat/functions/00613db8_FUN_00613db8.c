/*
 * FUN_00613db8 at 00613db8
 * undefined FUN_00613db8(void)
 * Address ranges: 00613db8-0061419f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613db8(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 *puVar10;
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
    puVar4 = local_2c;
    FUN_00614fc6(2);
    uVar2 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar2);
    puVar4 = local_1c;
    goto LAB_00614183;
  }
  if ((('5' < cVar1) && (cVar1 < ':')) || (cVar1 == '_')) {
    uVar6 = (int)cVar1 - 0x36;
    pcVar3 = DAT_00710054 + 1;
    if (uVar6 == 0x29) {
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        puVar4 = local_34;
        DAT_00710054 = pcVar3;
        FUN_00614fc6(2);
        uVar2 = FUN_006151fc(puVar4,param_2);
        FUN_00614df0(uVar2);
        puVar4 = local_1c;
        goto LAB_00614183;
      }
      uVar6 = (int)cVar1 - 0x3d;
      DAT_00710054 = DAT_00710054 + 2;
      if (3 < (int)uVar6) {
        bVar9 = SBORROW4(uVar6,7);
        iVar5 = cVar1 + -0x44;
        bVar8 = uVar6 == 7;
        goto LAB_00613e65;
      }
LAB_00613e67:
      uVar6 = 0xffffffff;
    }
    else {
      DAT_00710054 = pcVar3;
      if ((int)uVar6 < 0) goto LAB_00613e67;
      bVar9 = SBORROW4(uVar6,3);
      iVar5 = cVar1 + -0x39;
      bVar8 = uVar6 == 3;
LAB_00613e65:
      if (!bVar8 && bVar9 == iVar5 < 0) goto LAB_00613e67;
    }
    if (uVar6 != 0xffffffff) {
      FUN_00614dc3();
      FUN_00614df0(param_2);
      if ((uVar6 & 2) != 0) {
        puVar4 = local_c;
        puVar10 = local_34;
        FUN_00614e92(&DAT_006b1504);
        uVar2 = FUN_006151fc(puVar10,puVar4);
        FUN_00614df0(uVar2);
        FUN_006154c8(local_1c);
        if (*DAT_00710054 == '\0') {
          puVar4 = local_c;
          puVar10 = local_44;
          FUN_00614fc6(2);
          uVar2 = FUN_006151fc(puVar10,puVar4);
          FUN_00614df0(uVar2);
          puVar4 = local_1c;
        }
        else {
          uVar2 = FUN_00611a1e(local_34);
          puVar4 = local_2c;
          FUN_00614dcd(0x20);
          uVar2 = FUN_006151fc(puVar4,uVar2);
          FUN_00614df0(uVar2);
          puVar4 = (undefined1 *)FUN_006151fc(local_44,local_c);
        }
        FUN_006154c8(puVar4);
        if (*DAT_00710054 == '\0') {
          puVar4 = local_c;
          puVar10 = local_44;
          FUN_00614fc6(2);
          uVar2 = FUN_006151fc(puVar10,puVar4);
          FUN_00614df0(uVar2);
          puVar4 = local_1c;
          goto LAB_00614183;
        }
        if (*DAT_00710054 != '@') goto LAB_00613fe2;
        DAT_00710054 = DAT_00710054 + 1;
        if (((byte)DAT_00710064 & 0x60) == 0x60) {
          uVar2 = FUN_00614a17(local_44);
          FUN_00615450(uVar2);
        }
        else {
          uVar2 = FUN_00614a17(local_44);
          FUN_006154c8(uVar2);
        }
      }
      if ((uVar6 & 4) != 0) {
        if ((~DAT_00710064 & 2) == 0) {
          uVar2 = FUN_00613161(local_44);
          FUN_00615450(uVar2);
        }
        else {
          uVar2 = FUN_00613161(local_44);
          puVar4 = local_3c;
          FUN_00614dcd(0x20);
          uVar2 = FUN_006151fc(puVar4,uVar2);
          FUN_00614df0(uVar2);
          uVar2 = FUN_006151fc(local_2c,local_c);
          FUN_006154c8(uVar2);
        }
      }
      if ((~DAT_00710064 & 2) == 0) {
        uVar2 = FUN_006132ce(local_44);
        FUN_00615450(uVar2);
      }
      else {
        puVar4 = local_c;
        puVar10 = local_44;
        FUN_006132ce(local_3c,puVar10,puVar4);
        uVar2 = FUN_006151fc(puVar10,puVar4);
        FUN_006154c8(uVar2);
      }
      iVar5 = FUN_0061503c();
      if (iVar5 == 0) {
        puVar4 = local_c;
        puVar10 = local_44;
        FUN_00614dcd(0x28);
        uVar2 = FUN_006151fc(puVar10,puVar4);
        FUN_00614df0(uVar2);
        uVar2 = FUN_0061517e(local_34,0x29);
        FUN_006154c8(uVar2);
      }
      iVar7 = 0;
      iVar5 = FUN_00614d0f(8,0);
      if (iVar5 != 0) {
        iVar7 = FUN_00614dc3();
      }
      uVar2 = FUN_0061336a(local_44,iVar7);
      FUN_00614df0(uVar2);
      uVar2 = FUN_00613632(local_44);
      puVar4 = local_3c;
      FUN_00614dcd(0x28);
      uVar2 = FUN_006151fc(puVar4,uVar2);
      FUN_00614df0(uVar2);
      uVar2 = FUN_0061517e(local_2c,0x29);
      FUN_00615373(uVar2);
      if ((((byte)DAT_00710064 & 0x60) != 0x60) && ((uVar6 & 2) != 0)) {
        FUN_00615373(local_14);
      }
      if ((~DAT_00710064 & 0x100) == 0) {
        uVar2 = FUN_006137b4(local_44);
        FUN_00615450(uVar2);
      }
      else {
        uVar2 = FUN_006137b4(local_44);
        FUN_00615373(uVar2);
      }
      if (iVar7 != 0) {
        FUN_006154c8(local_c);
        puVar4 = local_24;
LAB_00614183:
        FUN_00614df0(puVar4);
        return param_1;
      }
      uVar2 = 3;
      goto LAB_00614190;
    }
  }
LAB_00613fe2:
  uVar2 = 1;
LAB_00614190:
  FUN_00614fc6(uVar2);
  return param_1;
}

