/*
 * FUN_006142ed at 006142ed
 * undefined FUN_006142ed(void)
 * Address ranges: 006142ed-0061476c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_006142ed(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  uint local_8;
  
  if (*DAT_00710054 == '\0') {
    if (param_5 == 0) {
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        if (((*(byte *)(param_2 + 4) & 0x10) == 0) && (iVar2 = FUN_0061503c(), iVar2 == 0)) {
          puVar4 = local_3c;
          FUN_00614fc6(2);
          uVar6 = FUN_006151fc(puVar4,param_4);
          FUN_00614df0(uVar6);
          puVar4 = local_2c;
          FUN_0061517e(local_24,0x20);
          puVar4 = (undefined1 *)FUN_006151fc(puVar4,param_2);
        }
        else {
          puVar4 = local_3c;
          FUN_00614fc6(2);
          uVar6 = FUN_006151fc(puVar4,param_2);
          FUN_00614df0(uVar6);
          puVar4 = local_1c;
        }
        goto LAB_00614750;
      }
      iVar2 = FUN_0061503c();
      if (iVar2 == 0) {
        puVar4 = local_3c;
        FUN_00614fc6(2);
        uVar6 = FUN_006151fc(puVar4,param_4);
        FUN_00614df0(uVar6);
        puVar4 = local_1c;
        goto LAB_00614750;
      }
    }
    uVar6 = 2;
    goto LAB_0061475d;
  }
  uVar5 = (int)*DAT_00710054 - (((*DAT_00710054 < 'A') - 1 & 0x2b) + 0x16);
  FUN_00614dc3();
  if ((~DAT_00710064 & 2) != 0) {
    do {
      if ((uVar5 & 0xc) == 4) {
        iVar2 = FUN_0061503c();
        uVar6 = 7;
        if (iVar2 == 0) {
          uVar6 = FUN_00614cf6(7);
          puVar4 = local_24;
          puVar3 = local_2c;
          goto LAB_00614363;
        }
LAB_0061437e:
        uVar6 = FUN_00614cf6(uVar6);
        FUN_006154a5(uVar6);
      }
      else {
        if ((uVar5 & 0xc) != 8) break;
        iVar2 = FUN_0061503c();
        uVar6 = 8;
        if (iVar2 != 0) goto LAB_0061437e;
        uVar6 = FUN_00614cf6(8);
        puVar4 = local_1c;
        puVar3 = local_c;
LAB_00614363:
        FUN_0061517e(puVar3,0x20);
        uVar6 = FUN_006151bd(puVar4,uVar6);
        FUN_006154c8(uVar6);
      }
      DAT_00710054 = DAT_00710054 + 1;
      uVar5 = (int)*DAT_00710054 - (((*DAT_00710054 < 'A') - 1 & 0x2b) + 0x16);
    } while( true );
  }
  DAT_00710054 = DAT_00710054 + 1;
  if (0x1f < uVar5) {
LAB_0061468e:
    uVar6 = 1;
LAB_0061475d:
    FUN_00614fc6(uVar6);
    return param_1;
  }
  FUN_00614dcd(param_3);
  iVar2 = FUN_0061503c();
  if (iVar2 == 0) {
    puVar4 = local_14;
    puVar3 = local_2c;
    FUN_0061517e(local_24,0x20);
    uVar6 = FUN_006151fc(puVar3,puVar4);
    FUN_006154c8(uVar6);
  }
  if ((uVar5 & 0x10) != 0) {
    if (param_5 != 0) goto LAB_0061468e;
    if ((char)param_3 == '\0') {
      if (*DAT_00710054 != '\0') {
        uVar6 = FUN_00611a1e(local_2c);
        FUN_00615450(uVar6);
      }
    }
    else {
      puVar4 = local_c;
      puVar3 = local_2c;
      FUN_00614e92(&DAT_006b1504);
      uVar6 = FUN_006151fc(puVar3,puVar4);
      FUN_00614df0(uVar6);
      FUN_006154c8(local_1c);
      puVar4 = local_c;
      if (*DAT_00710054 == '\0') {
        puVar3 = local_2c;
        FUN_00614fc6(2);
        uVar6 = FUN_006151fc(puVar3,puVar4);
        FUN_00614df0(uVar6);
        puVar4 = local_1c;
      }
      else {
        puVar3 = local_2c;
        FUN_00611a1e(local_24,puVar3);
        puVar4 = (undefined1 *)FUN_006151fc(puVar3,puVar4);
      }
      FUN_006154c8(puVar4);
    }
    cVar1 = *DAT_00710054;
    if (cVar1 == '\0') {
      FUN_006153d7(2);
    }
    else {
      DAT_00710054 = DAT_00710054 + 1;
      if (cVar1 != '@') goto LAB_0061468e;
    }
  }
  if ((~DAT_00710064 & 2) == 0) {
    if (((byte)uVar5 & 0xc) == 0xc) {
      uVar6 = FUN_00613161(local_2c);
      FUN_00615450(uVar6);
    }
  }
  else if (((byte)uVar5 & 0xc) == 0xc) {
    if (param_5 != 0) goto LAB_0061468e;
    puVar4 = local_c;
    puVar3 = local_2c;
    FUN_00613161(local_24,puVar3,puVar4);
    uVar6 = FUN_006151fc(puVar3,puVar4);
    FUN_006154c8(uVar6);
  }
  if ((uVar5 & 2) != 0) {
    puVar4 = local_c;
    puVar3 = local_2c;
    FUN_00614e92("volatile ");
    uVar6 = FUN_006151fc(puVar3,puVar4);
    FUN_00614df0(uVar6);
    FUN_006154c8(local_1c);
  }
  if ((uVar5 & 1) != 0) {
    puVar4 = local_c;
    puVar3 = local_2c;
    FUN_00614e92("const ");
    uVar6 = FUN_006151fc(puVar3,puVar4);
    FUN_00614df0(uVar6);
    FUN_006154c8(local_1c);
  }
  if (param_5 == 0) {
    iVar2 = FUN_0061503c();
    if (iVar2 == 0) {
      if (((*(byte *)(param_2 + 4) & 0x10) == 0) && (iVar2 = FUN_0061503c(), iVar2 == 0)) {
        puVar4 = local_2c;
        FUN_00614dcd(0x20);
        uVar6 = FUN_006151fc(puVar4,param_4);
        FUN_00614df0(uVar6);
        puVar4 = local_34;
        FUN_0061517e(local_3c,0x20);
        puVar4 = (undefined1 *)FUN_006151fc(puVar4,param_2);
      }
      else {
        puVar4 = local_3c;
        FUN_00614dcd(0x20);
        uVar6 = FUN_006151fc(puVar4,param_2);
        FUN_00614df0(uVar6);
        puVar4 = local_1c;
      }
    }
    else {
      iVar2 = FUN_0061503c();
      if (iVar2 != 0) goto LAB_00614682;
      puVar4 = local_3c;
      FUN_00614dcd(0x20);
      uVar6 = FUN_006151fc(puVar4,param_4);
      FUN_00614df0(uVar6);
      puVar4 = local_1c;
    }
    FUN_00615373(puVar4);
  }
LAB_00614682:
  local_8 = local_8 | 0x10;
  puVar4 = local_c;
LAB_00614750:
  FUN_00614df0(puVar4);
  return param_1;
}

