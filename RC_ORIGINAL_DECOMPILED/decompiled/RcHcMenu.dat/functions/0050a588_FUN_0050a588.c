/*
 * FUN_0050a588 at 0050a588
 * undefined __register FUN_0050a588(int * param_1, byte * param_2)
 * Address ranges: 0050a588-0050a653;0050a684-0050ac60;0050ac82-0050aca6;0050acae-0050ad46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0050a588(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  byte *extraout_EDX_11;
  byte *extraout_EDX_12;
  byte *extraout_EDX_13;
  byte *extraout_EDX_14;
  byte *extraout_EDX_15;
  byte *extraout_EDX_16;
  byte *pbVar7;
  undefined4 extraout_EDX_17;
  undefined4 extraout_EDX_18;
  undefined4 *unaff_EBX;
  uint unaff_ESI;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 fVar8;
  float10 in_ST7;
  float10 fVar9;
  undefined4 *local_1cc;
  VARIANTARG local_1c8;
  byte local_1b8 [256];
  int local_b8;
  int local_b4;
  uint *local_b0;
  uint *local_ac;
  uint *local_a8;
  uint *local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  uint *local_94;
  VARIANTARG local_90;
  uint *local_80;
  VARIANTARG local_7c;
  uint *local_6c;
  uint *local_68 [2];
  undefined4 uStackY_60;
  double dVar10;
  uint *local_54;
  _union_2683 _Stack_50;
  char *local_40;
  byte *local_3c;
  char *local_38;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 auStack_2c [2];
  undefined1 *puStack_24;
  byte *local_c;
  int *local_8;
  
  uVar12 = &stack0xfffffffc;
  uVar13 = &stack0xfffffffc;
  uVar14 = &stack0xfffffffc;
  uVar15 = &stack0xfffffffc;
  uVar16 = &stack0xfffffffc;
  uVar17 = &stack0xfffffffc;
  uVar18 = &stack0xfffffffc;
  uVar19 = &stack0xfffffffc;
  uVar20 = &stack0xfffffffc;
  uVar21 = &stack0xfffffffc;
  uVar22 = &stack0xfffffffc;
  uVar23 = &stack0xfffffffc;
  iVar6 = 0x38;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  LOCK();
  UNLOCK();
  puStack_24 = (undefined1 *)0x50a5b0;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  auStack_2c[1] = &LAB_0050ad47;
  auStack_2c[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = auStack_2c;
  if (local_c == (byte *)0x0) {
    puStack_24 = &stack0xfffffffc;
    iVar6 = FUN_00403224((int *)0x0,(int)&PTR_FUN_00509aec);
    FUN_00501074(iVar6);
    *in_FS_OFFSET = auStack_2c[0];
    puStack_24 = &LAB_0050ad51;
    auStack_2c[1] = 0x50acc6;
    FUN_00403db0((int *)&local_1cc);
    auStack_2c[1] = 0x50acd1;
    FUN_00405bcc(&local_1c8);
    auStack_2c[1] = 0x50ace1;
    FUN_00403dd4(&local_b8,10);
    auStack_2c[1] = 0x50acec;
    FUN_00405bcc(&local_90);
    auStack_2c[1] = 0x50acf4;
    FUN_00403db0((int *)&local_80);
    auStack_2c[1] = 0x50acfc;
    FUN_00405bcc(&local_7c);
    auStack_2c[1] = 0x50ad09;
    FUN_00403dd4((int *)&local_6c,2);
    auStack_2c[1] = 0x50ad11;
    FUN_00405bcc((VARIANTARG *)(local_68 + 1));
    auStack_2c[1] = 0x50ad19;
    FUN_00403db0((int *)&local_54);
    auStack_2c[1] = 0x50ad21;
    FUN_00405bcc((VARIANTARG *)&_Stack_50);
    auStack_2c[1] = 0x50ad2e;
    FUN_00403dd4((int *)&local_40,3);
    auStack_2c[1] = 0x50ad36;
    FUN_00405bcc((VARIANTARG *)&stack0xffffffcc);
    auStack_2c[1] = 0x50ad3e;
    FUN_00403db0((int *)&stack0xffffffe8);
    auStack_2c[1] = 0x50ad46;
    FUN_00403db0((int *)&local_c);
    return;
  }
  bVar1 = 0;
  bVar4 = false;
  bVar3 = false;
  puStack_24 = &stack0xfffffffc;
  do {
    FUN_00403f68((int *)&local_3c,(&PTR_s_Eergisteren_00571e18)[bVar1]);
    FUN_00409690(local_3c,(int *)&local_38);
    uVar11 = local_38;
    FUN_00409690(local_c,(int *)&local_40);
    iVar6 = FUN_0040431c(local_40,(char *)uVar11);
    if (iVar6 == 1) {
      bVar3 = true;
      break;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0xc);
  if (bVar3) {
    switch(bVar1) {
    case 0:
      FUN_0040b0d8();
      in_ST0 = in_ST0 - (float10)2.0;
      FUN_00405414((VARIANTARG *)&_Stack_50);
      FUN_00405bfc((VARIANTARG *)&_Stack_50,7,(VARIANT *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_54,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_54,extraout_EDX,extraout_ECX,uVar12);
      bVar4 = true;
      break;
    case 1:
      FUN_0040b0d8();
      in_ST0 = in_ST0 - (float10)1.0;
      FUN_00405414((VARIANTARG *)(local_68 + 1));
      FUN_00405bfc((VARIANTARG *)(local_68 + 1),7,(VARIANT *)&stack0xffffffcc);
      FUN_00403f68((int *)local_68,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_68[0],extraout_EDX_00,extraout_ECX_00,uVar13);
      bVar4 = true;
      break;
    case 2:
      FUN_0040b0d8();
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_6c,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_6c,extraout_EDX_01,extraout_ECX_01,uVar14);
      bVar4 = true;
      break;
    case 3:
      FUN_0040b0d8();
      in_ST0 = in_ST0 + (float10)1.0;
      FUN_00405414(&local_7c);
      FUN_00405bfc(&local_7c,7,(VARIANT *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_80,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_80,extraout_EDX_02,extraout_ECX_02,uVar15);
      bVar4 = true;
      break;
    case 4:
      FUN_0040b0d8();
      in_ST0 = in_ST0 + (float10)2.0;
      FUN_00405414(&local_90);
      FUN_00405bfc(&local_90,7,(VARIANT *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_94,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_94,extraout_EDX_03,extraout_ECX_03,uVar16);
      bVar4 = true;
      break;
    case 5:
      FUN_0050a534(2);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_98,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_98,extraout_EDX_04,extraout_ECX_04,uVar17);
      bVar4 = true;
      break;
    case 6:
      FUN_0050a534(3);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_9c,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_9c,extraout_EDX_05,extraout_ECX_05,uVar18);
      bVar4 = true;
      break;
    case 7:
      FUN_0050a534(4);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_a0,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_a0,extraout_EDX_06,extraout_ECX_06,uVar19);
      bVar4 = true;
      break;
    case 8:
      FUN_0050a534(5);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_a4,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_a4,extraout_EDX_07,extraout_ECX_07,uVar20);
      bVar4 = true;
      break;
    case 9:
      FUN_0050a534(6);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_a8,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_a8,extraout_EDX_08,extraout_ECX_08,uVar21);
      bVar4 = true;
      break;
    case 10:
      FUN_0050a534(7);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_ac,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_ac,extraout_EDX_09,extraout_ECX_09,uVar22);
      bVar4 = true;
      break;
    case 0xb:
      FUN_0050a534(1);
      FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
      FUN_00403f68((int *)&local_b0,(&PTR_s_Eergisteren_00571e18)[bVar1]);
      FUN_0050a480(local_b0,extraout_EDX_10,extraout_ECX_10,uVar23);
      bVar4 = true;
      break;
    default:
      FUN_00402fe0(*local_8,local_1b8);
      FUN_00403fd4(&local_b8,local_1b8);
      local_38 = " : ";
      local_3c = (byte *)0x50ad90;
      local_40 = (char *)0x50a9f9;
      FUN_004040f0(&local_b4,4);
      local_40 = (char *)0x50aa0e;
      FUN_00403d94(local_b4);
    }
    goto LAB_0050ab96;
  }
  iVar6 = FUN_00404030((int)local_c);
  if (iVar6 == 1) {
    iVar6 = 0;
    pbVar7 = local_c;
    if (*(int *)(local_c + -4) == 0) {
      iVar6 = thunk_FUN_00402874(0);
      pbVar7 = extraout_EDX_11;
    }
    if (pbVar7[iVar6] < 0x30) goto LAB_0050aa71;
    iVar6 = 0;
    pbVar7 = local_c;
    if (*(int *)(local_c + -4) == 0) {
      iVar6 = thunk_FUN_00402874(0);
      pbVar7 = extraout_EDX_12;
    }
    if (((0x39 < pbVar7[iVar6]) || (iVar6 = FUN_00409c44(local_c), iVar6 < 1)) ||
       (iVar6 = FUN_00409c44(local_c), 0x1f < iVar6)) goto LAB_0050aa71;
  }
  else {
LAB_0050aa71:
    iVar6 = FUN_00404030((int)local_c);
    if (iVar6 != 2) goto LAB_0050ab96;
    iVar6 = 0;
    pbVar7 = local_c;
    if (*(int *)(local_c + -4) == 0) {
      iVar6 = thunk_FUN_00402874(0);
      pbVar7 = extraout_EDX_13;
    }
    if (pbVar7[iVar6] < 0x30) goto LAB_0050ab96;
    iVar6 = 0;
    pbVar7 = local_c;
    if (*(int *)(local_c + -4) == 0) {
      iVar6 = thunk_FUN_00402874(0);
      pbVar7 = extraout_EDX_14;
    }
    if (0x39 < pbVar7[iVar6]) goto LAB_0050ab96;
    iVar6 = 1;
    pbVar7 = local_c;
    if (*(uint *)(local_c + -4) < 2) {
      iVar6 = thunk_FUN_00402874(1);
      pbVar7 = extraout_EDX_15;
    }
    if (pbVar7[iVar6] < 0x30) goto LAB_0050ab96;
    iVar6 = 1;
    pbVar7 = local_c;
    if (*(uint *)(local_c + -4) < 2) {
      iVar6 = thunk_FUN_00402874(1);
      pbVar7 = extraout_EDX_16;
    }
    if (((0x39 < pbVar7[iVar6]) || (iVar6 = FUN_00409c44(local_c), iVar6 < 1)) ||
       (iVar6 = FUN_00409c44(local_c), 0x1f < iVar6)) goto LAB_0050ab96;
  }
  FUN_0040b0d8();
  FUN_0040542c((VARIANTARG *)&stack0xffffffcc);
  FUN_004051ec((VARIANTARG *)&stack0xffffffcc);
  local_38 = (char *)0x50ab45;
  fVar8 = in_ST7;
  FUN_0040b090((short *)&stack0xffffffe0,(ushort *)&stack0xffffffe2,(short *)&stack0xffffffe4,
               SUB84((double)in_ST0,0),(int)((ulonglong)(double)in_ST0 >> 0x20));
  bVar4 = true;
  in_ST0 = in_ST1;
  while (uVar5 = FUN_00409c44(local_c), uVar5 != (unaff_ESI & 0xffff)) {
    FUN_004053dc(&local_1c8,1);
    FUN_0040597c((uint *)&stack0xffffffcc,(uint *)&local_1c8);
    FUN_004051ec((VARIANTARG *)&stack0xffffffcc);
    local_38 = (char *)0x50ab86;
    fVar9 = fVar8;
    FUN_0040b090((short *)&stack0xffffffe0,(ushort *)&stack0xffffffe2,(short *)&stack0xffffffe4,
                 SUB84((double)in_ST0,0),(int)((ulonglong)(double)in_ST0 >> 0x20));
    in_ST0 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    in_ST7 = fVar8;
    fVar8 = fVar9;
  }
LAB_0050ab96:
  local_40 = (char *)0x50aba6;
  FUN_00403e48((int *)&stack0xffffffe8,*(int *)PTR_DAT_00572208);
  uVar2 = *PTR_DAT_0057215c;
  local_40 = (char *)0x50abbe;
  FUN_0050b5c4((int)local_8,(int *)&local_1cc);
  local_40 = (char *)0x50abce;
  FUN_00403e04((int *)PTR_DAT_00572208,local_1cc);
  if ((char)local_8[0x9e] != '\x10') {
    *PTR_DAT_0057215c = *(undefined1 *)((int)local_8 + 0x279);
  }
  _Stack_50._12_4_ = &LAB_0050aca7;
  _Stack_50._8_4_ = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&_Stack_50.n2 + 8;
  _Stack_50._0_4_ = &LAB_0050ac61;
  local_54 = (uint *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_54;
  if (bVar4) {
    _Stack_50.decVal.Hi32 = (ULONG)&stack0xfffffffc;
    local_40 = &stack0xfffffffc;
    FUN_004051ec((VARIANTARG *)&stack0xffffffcc);
    dVar10 = (double)in_ST0;
    uStackY_60 = 0x50ac2a;
    iVar6 = FUN_00403224((int *)0x0,(int)&PTR_FUN_00509aec);
    uStackY_60 = 0x50ac2f;
    FUN_00509ec8(iVar6,extraout_EDX_17,extraout_ECX_11,SUB84(dVar10,0),
                 (int)((ulonglong)dVar10 >> 0x20));
  }
  else {
    _Stack_50.decVal.Hi32 = (ULONG)&stack0xfffffffc;
    local_40 = &stack0xfffffffc;
    FUN_0040c53c((int)local_c);
    dVar10 = (double)in_ST0;
    uStackY_60 = 0x50ac4e;
    iVar6 = FUN_00403224((int *)0x0,(int)&PTR_FUN_00509aec);
    uStackY_60 = 0x50ac53;
    FUN_00509ec8(iVar6,extraout_EDX_18,extraout_ECX_12,SUB84(dVar10,0),
                 (int)((ulonglong)dVar10 >> 0x20));
  }
  *in_FS_OFFSET = local_54;
  *in_FS_OFFSET = _Stack_50._8_4_;
  local_40 = (char *)0x50acae;
  _Stack_50._12_4_ = 0x50ac9c;
  FUN_00403e04((int *)PTR_DAT_00572208,unaff_EBX);
  *PTR_DAT_0057215c = uVar2;
  return;
}

