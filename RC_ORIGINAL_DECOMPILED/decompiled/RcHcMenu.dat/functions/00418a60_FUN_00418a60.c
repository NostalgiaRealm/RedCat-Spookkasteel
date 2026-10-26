/*
 * FUN_00418a60 at 00418a60
 * undefined __register FUN_00418a60(void)
 * Address ranges: 00418a60-00418af4;00418b0d-00418c87;00418ca9-00418cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418a60(void)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  uint extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  int in_stack_00000004;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 *local_20;
  undefined4 *local_1c;
  BSTR local_18;
  _union_2683 local_14;
  
  puStack_30 = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  local_18 = (BSTR)0x0;
  local_1c = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  puStack_34 = &LAB_00418cd4;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  uStack_3c._0_2_ = 0x8a91;
  uStack_3c._2_2_ = 0x41;
  FUN_0040ff18(*(int **)(in_stack_00000004 + -8),*(int *)(in_stack_00000004 + -0xc),
               (VARIANT *)&local_14.n2);
  puStack_40 = (undefined1 *)0x418a97;
  uStack_3c = &stack0xfffffffc;
  cVar3 = FUN_004189d4();
  if (cVar3 != '\0') goto LAB_00418ca9;
  uStack_3c._0_2_ = 0x8aa8;
  uStack_3c._2_2_ = 0x41;
  bVar4 = FUN_00405df8((int)&local_14);
  if (bVar4) {
    uStack_3c._0_2_ = 0x8abe;
    uStack_3c._2_2_ = 0x41;
    piVar6 = FUN_0040cfa8((int *)&DAT_00410444,'\x01',(undefined4 *)PTR_PTR_00572348);
    uStack_3c._0_2_ = 0x8ac3;
    uStack_3c._2_2_ = 0x41;
    FUN_0040382c(piVar6);
  }
  uStack_3c._0_2_ = (undefined2)in_stack_00000004;
  uStack_3c._2_2_ = (undefined2)((uint)in_stack_00000004 >> 0x10);
  puStack_40 = (undefined1 *)0x418acc;
  FUN_00417fe0();
  uStack_3c._0_2_ = 0x8ad5;
  uStack_3c._2_2_ = 0x41;
  uVar5 = FUN_00405bf8((undefined2 *)&local_14);
  uVar5 = uVar5 & 0xfff;
  if (uVar5 < 7) {
    if (uVar5 == 6) {
      uStack_3c._0_2_ = 0x8bfa;
      uStack_3c._2_2_ = 0x41;
      FUN_00405248((VARIANTARG *)&local_14.n2);
      lVar1 = (longlong)ROUND(in_ST0);
      puStack_40 = (undefined1 *)lVar1;
      uStack_3c._0_2_ = (undefined2)((ulonglong)lVar1 >> 0x20);
      uStack_3c._2_2_ = (undefined2)((ulonglong)lVar1 >> 0x30);
      uStack_44 = 0x418c0c;
      FUN_00417ca0(*(int *)(in_stack_00000004 + -4),extraout_EDX_01,extraout_ECX_05);
      goto LAB_00418ca9;
    }
    switch(uVar5) {
    case 0:
      uStack_3c._0_2_ = 0x8b47;
      uStack_3c._2_2_ = 0x41;
      FUN_00418ed0(*(int *)(in_stack_00000004 + -4),0xd,extraout_ECX);
      break;
    case 1:
      uStack_3c._0_2_ = 0x8b59;
      uStack_3c._2_2_ = 0x41;
      FUN_00418ed0(*(int *)(in_stack_00000004 + -4),0,extraout_ECX);
      break;
    case 2:
    case 3:
switchD_00418aee_caseD_2:
      uStack_3c._0_2_ = 0x8ba2;
      uStack_3c._2_2_ = 0x41;
      uVar7 = FUN_0040514c((VARIANTARG *)&local_14.n2);
      uStack_3c._0_2_ = 0x8baf;
      uStack_3c._2_2_ = 0x41;
      FUN_00417dac(*(int *)(in_stack_00000004 + -4),uVar7,extraout_ECX_02);
      break;
    case 4:
      uStack_3c._0_2_ = 0x8bbc;
      uStack_3c._2_2_ = 0x41;
      FUN_004051ec((VARIANTARG *)&local_14.n2);
      uStack_3c = (undefined1 *)(float)in_ST0;
      puStack_40 = (undefined1 *)0x418bce;
      FUN_00417c7c(*(int *)(in_stack_00000004 + -4),extraout_EDX,extraout_ECX_03);
      break;
    case 5:
      uStack_3c._0_2_ = 0x8bdb;
      uStack_3c._2_2_ = 0x41;
      FUN_004051ec((VARIANTARG *)&local_14.n2);
      uStack_44 = SUB104(in_ST0,0);
      puStack_40 = (undefined1 *)((unkuint10)in_ST0 >> 0x20);
      uStack_3c._0_2_ = (undefined2)((unkuint10)in_ST0 >> 0x40);
      FUN_00417c58(*(int *)(in_stack_00000004 + -4),extraout_EDX_00,extraout_ECX_04);
      break;
    default:
      goto switchD_00418aee_default;
    }
  }
  else {
    if (uVar5 < 0xc) {
      if (uVar5 == 0xb) {
        uStack_3c._0_2_ = 0x8c35;
        uStack_3c._2_2_ = 0x41;
        bVar4 = FUN_004051b8((VARIANTARG *)&local_14.n2);
        if (bVar4) {
          uStack_3c._0_2_ = 0x8c46;
          uStack_3c._2_2_ = 0x41;
          FUN_00418ed0(*(int *)(in_stack_00000004 + -4),9,extraout_ECX_07);
        }
        else {
          uStack_3c._0_2_ = 0x8c55;
          uStack_3c._2_2_ = 0x41;
          FUN_00418ed0(*(int *)(in_stack_00000004 + -4),8,extraout_ECX_07);
        }
        goto LAB_00418ca9;
      }
      if (uVar5 == 7) {
        uStack_3c._0_2_ = 0x8c19;
        uStack_3c._2_2_ = 0x41;
        FUN_004051ec((VARIANTARG *)&local_14.n2);
        dVar2 = (double)in_ST0;
        puStack_40 = SUB84(dVar2,0);
        uStack_3c._0_2_ = (undefined2)((ulonglong)dVar2 >> 0x20);
        uStack_3c._2_2_ = (undefined2)((ulonglong)dVar2 >> 0x30);
        uStack_44 = 0x418c2b;
        FUN_00417cc4(*(int *)(in_stack_00000004 + -4),extraout_EDX_02,extraout_ECX_06);
        goto LAB_00418ca9;
      }
      if (uVar5 == 8) {
        uStack_3c._0_2_ = 0x8b69;
        uStack_3c._2_2_ = 0x41;
        FUN_004052e0(&local_18,(VARIANTARG *)&local_14.n2);
        uStack_3c._0_2_ = 0x8b77;
        uStack_3c._2_2_ = 0x41;
        FUN_00418e94(*(int *)(in_stack_00000004 + -4),(undefined4 *)local_18,extraout_ECX_00);
        goto LAB_00418ca9;
      }
    }
    else {
      if (uVar5 == 0x11) goto switchD_00418aee_caseD_2;
      if (uVar5 == 0x100) {
        uStack_3c._0_2_ = 0x8b87;
        uStack_3c._2_2_ = 0x41;
        FUN_004052a4((int *)&local_1c,(VARIANTARG *)&local_14.n2);
        uStack_3c._0_2_ = 0x8b95;
        uStack_3c._2_2_ = 0x41;
        FUN_00418e38(*(int *)(in_stack_00000004 + -4),local_1c,extraout_ECX_01);
        goto LAB_00418ca9;
      }
    }
switchD_00418aee_default:
    puStack_40 = &LAB_00418c88;
    uStack_44 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_44;
    uStack_3c = &stack0xfffffffc;
    FUN_004052a4((int *)&local_20,(VARIANTARG *)&local_14.n2);
    FUN_00418e38(*(int *)(in_stack_00000004 + -4),local_20,extraout_ECX_08);
    *in_FS_OFFSET = uStack_44;
  }
LAB_00418ca9:
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_00418cdb;
  puStack_34 = (undefined1 *)0x418cc3;
  FUN_00403dd4((int *)&local_20,2);
  puStack_34 = (undefined1 *)0x418ccb;
  FUN_00404474(&local_18);
  puStack_34 = (undefined1 *)0x418cd3;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

