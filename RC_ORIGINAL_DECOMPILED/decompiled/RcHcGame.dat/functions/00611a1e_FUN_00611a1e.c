/*
 * FUN_00611a1e at 00611a1e
 * undefined FUN_00611a1e(void)
 * Address ranges: 00611a1e-00611cc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611a1e(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 local_c4 [16];
  undefined1 local_b4 [8];
  undefined1 local_ac [8];
  undefined1 local_a4 [16];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [16];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [16];
  undefined1 local_c [4];
  byte local_8;
  
  FUN_00614dc3();
  bVar2 = false;
  while ((((local_8 & 0xf) == 0 && (*DAT_00710054 != '\0')) && (*DAT_00710054 != '@'))) {
    iVar3 = FUN_0061503c();
    if (iVar3 == 0) {
      puVar8 = local_c;
      puVar7 = local_c4;
      FUN_00614e92(&DAT_006b1504);
      uVar4 = FUN_006151fc(puVar7,puVar8);
      FUN_00614df0(uVar4);
      FUN_006154c8(local_24);
      if (bVar2) {
        puVar8 = local_c;
        puVar7 = local_cc;
        FUN_00614dcd(0x5b);
        uVar4 = FUN_006151fc(puVar7,puVar8);
        FUN_00614df0(uVar4);
        FUN_006154c8(local_3c);
        bVar2 = false;
      }
    }
    if (*DAT_00710054 == '?') {
      pcVar5 = DAT_00710054 + 1;
      cVar1 = *pcVar5;
      if (cVar1 == '$') {
        puVar8 = local_ac;
        puVar7 = local_34;
        goto LAB_00611c3b;
      }
      if (cVar1 == '%') {
        do {
          pcVar6 = pcVar5;
          pcVar5 = pcVar6 + 1;
        } while (*pcVar5 != '@');
        DAT_00710054 = pcVar6 + 2;
        puVar8 = local_c;
        puVar7 = local_8c;
        FUN_00614e92("`anonymous namespace\'");
        uVar4 = FUN_006151fc(puVar7,puVar8);
        FUN_00614df0(uVar4);
        puVar8 = local_1c;
        goto LAB_00611c49;
      }
      if (cVar1 == '?') {
        if ((DAT_00710064 & 0x1000) == 0) {
          DAT_00710054 = pcVar5;
          uVar4 = FUN_006113d2(local_b4);
          puVar8 = local_94;
          FUN_00614dcd(0x60);
          uVar4 = FUN_006151fc(puVar8,uVar4);
          FUN_00614df0(uVar4);
          puVar9 = local_c;
          puVar8 = local_5c;
          FUN_0061517e(local_6c,0x27);
          goto LAB_00611c42;
        }
        DAT_00710054 = pcVar5;
        FUN_006113d2(local_7c);
      }
      else if (cVar1 == 'I') {
        DAT_00710054 = DAT_00710054 + 2;
        puVar8 = local_c;
        puVar7 = local_74;
        puVar9 = local_4c;
        uVar4 = 0x5d;
        FUN_00611577(local_84,puVar9,0x5d,puVar7,puVar8);
        FUN_0061517e(puVar9,uVar4);
        uVar4 = FUN_006151fc(puVar7,puVar8);
        FUN_006154c8(uVar4);
        bVar2 = true;
      }
      else {
        if ((DAT_00710064 & 0x1000) == 0) {
          puVar9 = local_c;
          puVar8 = local_d4;
          DAT_00710054 = pcVar5;
          FUN_006149cc(local_64,puVar8,puVar9);
          goto LAB_00611c42;
        }
        DAT_00710054 = pcVar5;
        FUN_006149cc(local_a4);
      }
    }
    else {
      puVar8 = local_44;
      puVar7 = local_2c;
LAB_00611c3b:
      puVar9 = local_c;
      FUN_00611577(puVar7,puVar8,puVar9);
LAB_00611c42:
      puVar8 = (undefined1 *)FUN_006151fc(puVar8,puVar9);
LAB_00611c49:
      FUN_006154c8(puVar8);
    }
  }
  if (*DAT_00710054 == '\0') {
    iVar3 = FUN_0061503c();
    if (iVar3 == 0) {
      puVar8 = local_c;
      puVar7 = local_2c;
      puVar9 = local_44;
      puVar10 = &DAT_006b1504;
      FUN_00614fc6(2);
      FUN_006151bd(puVar9,puVar10);
      uVar4 = FUN_006151fc(puVar7,puVar8);
      FUN_006154c8(uVar4);
      goto LAB_00611cb5;
    }
    uVar4 = 2;
  }
  else {
    if (*DAT_00710054 == '@') goto LAB_00611cb5;
    uVar4 = 1;
  }
  FUN_00615520(uVar4);
LAB_00611cb5:
  FUN_00614df0(local_c);
  return param_1;
}

