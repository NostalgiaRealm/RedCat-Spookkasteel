/*
 * FUN_00611630 at 00611630
 * undefined FUN_00611630(void)
 * Address ranges: 00611630-006119f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611630(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 local_bc [8];
  undefined1 local_b4 [16];
  undefined1 local_a4 [8];
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [4];
  uint local_8;
  
  FUN_00614dc3();
  FUN_00614dc3();
  bVar3 = false;
  cVar2 = *DAT_00710054;
  pcVar4 = DAT_00710054 + 1;
  if (cVar2 < 'B') {
    if (cVar2 == 'A') {
LAB_006119d1:
      cVar2 = *DAT_00710054;
      DAT_00710054 = pcVar4;
      FUN_006154a5((&PTR_LAB_00651e30)[cVar2]);
      pcVar4 = DAT_00710054;
      if (!bVar3) goto switchD_006117ed_caseD_51;
      iVar6 = FUN_0061503c();
      if (iVar6 == 0) {
        local_8 = local_8 | 0x20;
      }
LAB_006119bc:
      puVar5 = local_c;
LAB_006119bf:
      FUN_00614df0(puVar5);
      return param_1;
    }
    if (cVar2 == '\0') {
LAB_00611702:
      pcVar4 = pcVar4 + -1;
LAB_00611708:
      DAT_00710054 = pcVar4;
      uVar7 = 2;
      goto LAB_00611787;
    }
    if ('/' < cVar2) {
      if (cVar2 < '2') {
        DAT_00710054 = pcVar4;
        uVar7 = FUN_00611577(local_94);
        FUN_006154c8(uVar7);
        DAT_00710054 = pcVar4;
        iVar6 = FUN_0061503c();
        if ((iVar6 != 0) || (DAT_00710054[-1] != '1')) goto LAB_006119bc;
        puVar5 = local_c;
        puVar10 = local_14;
        FUN_00614dcd(0x7e);
        uVar7 = FUN_006151fc(puVar10,puVar5);
        FUN_00614df0(uVar7);
LAB_006119b3:
        FUN_006154c8(local_24);
        goto LAB_006119bc;
      }
      if (cVar2 < ':') {
        uVar7 = *(undefined4 *)("GAIsProcessorFeaturePresent" + *DAT_00710054 * 4 + 6);
        DAT_00710054 = pcVar4;
        goto LAB_00611977;
      }
    }
  }
  else {
    if (cVar2 == 'B') {
      bVar3 = true;
      goto LAB_006119d1;
    }
    if (cVar2 < 'C') goto switchD_006117ed_caseD_57;
    if (cVar2 < '[') goto LAB_006119d1;
    if (cVar2 == '_') {
      iVar6 = (int)*pcVar4;
      pcVar4 = DAT_00710054 + 2;
      if (0x50 < iVar6) {
        switch(iVar6) {
        case 0x51:
          goto switchD_006117ed_caseD_51;
        case 0x52:
          pcVar1 = DAT_00710054 + 1;
          DAT_00710054 = pcVar4;
          FUN_006154a5(*(undefined4 *)(&DAT_00651ec0 + *pcVar1 * 4));
          FUN_006154a5((&PTR_DAT_00651f6c)[*DAT_00710054]);
          pcVar4 = DAT_00710054;
          cVar2 = *DAT_00710054;
          DAT_00710054 = DAT_00710054 + 1;
          if (cVar2 == '0') {
            uVar7 = FUN_006133a8(local_8c,0);
            FUN_00614df0(uVar7);
            puVar10 = local_1c;
            puVar5 = local_9c;
            puVar9 = local_c;
            puVar8 = local_34;
            FUN_0061517e(local_2c,0x20);
            FUN_006151fc(puVar8,puVar9);
          }
          else {
            if (cVar2 == '1') {
              uVar7 = FUN_006151fc(local_a4,local_1c);
              FUN_00614df0(uVar7);
              puVar5 = local_64;
              uVar7 = 0x2c;
              FUN_00611cc9(local_3c,puVar5,0x2c);
              uVar7 = FUN_0061517e(puVar5,uVar7);
              FUN_00615373(uVar7);
              puVar5 = local_74;
              uVar7 = 0x2c;
              FUN_00611cc9(local_b4,puVar5,0x2c);
              uVar7 = FUN_0061517e(puVar5,uVar7);
              FUN_00615373(uVar7);
              puVar5 = local_44;
              uVar7 = 0x2c;
              FUN_00611cc9(local_4c,puVar5,0x2c);
              uVar7 = FUN_0061517e(puVar5,uVar7);
              FUN_00615373(uVar7);
              puVar5 = local_5c;
              uVar7 = 0x29;
              FUN_00611d36(local_6c,puVar5,0x29);
              uVar7 = FUN_0061517e(puVar5,uVar7);
              FUN_00615373(uVar7);
              puVar5 = (undefined1 *)FUN_0061517e(local_7c,0x27);
              goto LAB_006119bf;
            }
            if ((cVar2 < '2') || ('4' < cVar2)) goto LAB_00611708;
            puVar5 = local_54;
LAB_006117dc:
            puVar10 = local_1c;
          }
          puVar5 = (undefined1 *)FUN_006151fc(puVar5,puVar10);
          goto LAB_006119bf;
        case 0x53:
        case 0x54:
        case 0x58:
        case 0x59:
switchD_006117ed_caseD_53:
          uVar7 = *(undefined4 *)(&DAT_00651ec0 + DAT_00710054[1] * 4);
LAB_006117ff:
          DAT_00710054 = pcVar4;
          FUN_00614e92(uVar7);
          return param_1;
        case 0x55:
        case 0x56:
          goto switchD_006117ed_caseD_55;
        default:
          goto switchD_006117ed_caseD_57;
        }
      }
      if (iVar6 == 0x50) {
        pcVar1 = DAT_00710054 + 1;
        DAT_00710054 = pcVar4;
        FUN_006154a5(*(undefined4 *)(&DAT_00651ec0 + *pcVar1 * 4));
        uVar7 = FUN_00611630(local_bc);
        FUN_006154c8(uVar7);
        iVar6 = FUN_0061503c();
        if ((iVar6 != 0) || (iVar6 = FUN_0061506c(), pcVar4 = DAT_00710054, iVar6 == 0)) {
          puVar5 = local_84;
          goto LAB_006117dc;
        }
      }
      else if (iVar6 < 0x3a) {
        if (0x36 < iVar6) {
          uVar7 = *(undefined4 *)(L"null)" + DAT_00710054[1] * 2 + 3);
          goto LAB_006117ff;
        }
        if (iVar6 == 0) goto LAB_00611702;
        if ((0x2f < iVar6) && (iVar6 < 0x37)) {
          uVar7 = *(undefined4 *)(L"null)" + DAT_00710054[1] * 2 + 3);
          DAT_00710054 = pcVar4;
          goto LAB_00611977;
        }
      }
      else if ((0x40 < iVar6) && ((iVar6 < 0x4b || ((0x4b < iVar6 && (iVar6 < 0x50))))))
      goto switchD_006117ed_caseD_53;
    }
  }
switchD_006117ed_caseD_57:
  DAT_00710054 = pcVar4;
  uVar7 = 1;
LAB_00611787:
  FUN_00614fc6(uVar7);
  return param_1;
switchD_006117ed_caseD_55:
  uVar7 = *(undefined4 *)(&DAT_00651ec0 + DAT_00710054[1] * 4);
  DAT_00710054 = pcVar4;
LAB_00611977:
  FUN_006154a5(uVar7);
  pcVar4 = DAT_00710054;
switchD_006117ed_caseD_51:
  DAT_00710054 = pcVar4;
  iVar6 = FUN_0061503c();
  if (iVar6 == 0) {
    puVar5 = local_c;
    puVar10 = local_2c;
    FUN_00614e92("operator");
    uVar7 = FUN_006151fc(puVar10,puVar5);
    FUN_00614df0(uVar7);
    goto LAB_006119b3;
  }
  goto LAB_006119bc;
}

