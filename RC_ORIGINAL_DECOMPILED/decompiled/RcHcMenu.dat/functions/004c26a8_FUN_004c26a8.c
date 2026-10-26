/*
 * FUN_004c26a8 at 004c26a8
 * undefined __register FUN_004c26a8(int * param_1, int * param_2)
 * Address ranges: 004c26a8-004c295a;004c299a-004c29d7;004c2a76-004c2ad1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 4 for TAppDAODatabase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4bcac4 slot 4 for
   TAppDAODatabase. Original bytes unchanged; names and types still inferred. */

void FUN_004c26a8(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  int local_1b0 [5];
  int local_19c [4];
  VARIANTARG local_18c;
  VARIANTARG local_17c;
  VARIANTARG local_16c;
  VARIANTARG local_15c;
  byte local_14c [236];
  undefined4 uStackY_60;
  VARIANTARG *pVStackY_5c;
  VARIANTARG *pVVar8;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  VARIANTARG *local_4c;
  int in_stack_ffffffb8;
  VARIANTARG *pVVar9;
  VARIANTARG *pVVar10;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  char *pcStack_34;
  VARIANTARG *pVStack_30;
  char *pcStack_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined4 uStack_20;
  
  uStack_20 = &stack0xfffffffc;
  iVar7 = 0x35;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_004c2ad2;
  local_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  pcStack_2c = (char *)0x4c26e3;
  iVar7 = FUN_00403224(param_2,(int)&DAT_004bca60);
  if (*(int *)(iVar7 + 4) == 0) {
    pcStack_2c = "Unprepared ";
    pVStack_30 = (VARIANTARG *)0x4c26fe;
    FUN_00402fe0(*param_1,local_14c);
    pVStack_30 = (VARIANTARG *)0x4c270c;
    FUN_00403fd4((int *)&local_4c,local_14c);
    pVStack_30 = local_4c;
    pcStack_34 = ".CreateTableFor.";
    puStack_38 = (undefined1 *)0x4c2721;
    FUN_004040f0((int *)&stack0xffffffb8,3);
    puStack_38 = (undefined1 *)0x4c2733;
    FUN_00403d94(in_stack_ffffffb8);
  }
  puStack_38 = (undefined1 *)0x4c2740;
  FUN_00403db0((int *)&local_28);
  puStack_3c = &LAB_004c29d8;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_4c = (VARIANTARG *)0x4c276b;
  pVVar9 = (VARIANTARG *)PTR_DAT_005725ac;
  pVVar10 = (VARIANTARG *)PTR_DAT_005725ac;
  puStack_38 = &stack0xfffffffc;
  FUN_004054ac(&local_15c,puRam0000003c);
  local_4c = &local_15c;
  puStack_50 = (undefined1 *)0x4c2780;
  iVar7 = FUN_00403224(param_2,(int)&DAT_004bca60);
  pVVar8 = local_4c;
  local_4c = (VARIANTARG *)0x4c278f;
  piVar3 = (int *)FUN_004b8cec(*(ULONG *)(iVar7 + 4),pVVar8,PTR_DAT_005725ac,pVVar9,pVVar10);
  local_4c = (VARIANTARG *)0x4c279d;
  bVar1 = FUN_00491e60(0,&stack0xffffffbc);
  if (bVar1) {
    do {
      local_4c = (VARIANTARG *)0x4c27b0;
      uVar4 = FUN_004917c4((int *)0x0,&stack0xffffffbc);
      if ((char)uVar4 != '\0') {
        local_4c = (VARIANTARG *)0x4c27c3;
        piVar5 = (int *)FUN_00492440((int *)0x0,&stack0xffffffbc);
        local_4c = (VARIANTARG *)0x4c27d4;
        FUN_0049145c((int *)0x0,&stack0xffffffbc,(int *)&local_28);
        uStack_20._2_2_ = 10;
        local_4c = (VARIANTARG *)0x4c27e5;
        iVar7 = (**(code **)(*piVar5 + 0x14))(piVar5,&local_24);
        if (iVar7 < 7) {
          if (iVar7 == 6) {
            uStack_20._2_2_ = 5;
            goto LAB_004c2876;
          }
          if (iVar7 == 2) {
            uStack_20._2_2_ = 3;
            goto LAB_004c2876;
          }
          if (iVar7 == 3) {
            uStack_20._2_2_ = 4;
            goto LAB_004c2876;
          }
          if (iVar7 == 4) {
            uStack_20._2_2_ = 6;
            goto LAB_004c2876;
          }
          if (iVar7 == 5) {
            uStack_20._2_2_ = 7;
            goto LAB_004c2876;
          }
        }
        else {
          if (iVar7 == 7) {
            uStack_20._2_2_ = 8;
            goto LAB_004c2876;
          }
          if (iVar7 == 0xb) {
            uStack_20._2_2_ = 1;
            goto LAB_004c2876;
          }
          if (iVar7 == 0x100) {
            if (local_24 == (undefined1 *)0x0) {
              uStack_20._2_2_ = 0xc;
            }
            else {
              uStack_20._2_2_ = 10;
            }
            goto LAB_004c2876;
          }
          if (iVar7 == 0x2000) {
            uStack_20._2_2_ = 0xb;
            goto LAB_004c2876;
          }
        }
        local_4c = (VARIANTARG *)0x4c2876;
        FUN_00459bd4(0x4c2b40);
LAB_004c2876:
        puStack_50 = &LAB_004c295b;
        uStack_54 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_54;
        local_4c = (VARIANTARG *)&stack0xfffffffc;
        FUN_004053dc(&local_16c,local_24);
        pVVar8 = &local_16c;
        pVStackY_5c = (VARIANTARG *)0x4c28ad;
        FUN_004053dc(&local_17c,(int)uStack_20._2_2_);
        pVStackY_5c = &local_17c;
        uStackY_60 = 0x4c28c2;
        FUN_004054ac(&local_18c,local_28);
        pVVar9 = pVStackY_5c;
        pVStackY_5c = (VARIANTARG *)0x4c28d1;
        piVar6 = (int *)FUN_004b813c((ULONG)piVar3,&local_18c,pVVar9,pVVar8);
        if ((*(byte *)(piVar5 + 6) & 0x20) == 0) {
          if ((uStack_20._2_2_ == 10) || (uStack_20._2_2_ == 0xc)) {
            pVStackY_5c = (VARIANTARG *)0x4c291f;
            FUN_004bb1d8((int)piVar6);
          }
        }
        else {
          pVStackY_5c = (VARIANTARG *)0x4c28e8;
          FUN_004bb120((int)piVar6);
          if ((uStack_20._2_2_ == 10) || (uStack_20._2_2_ == 0xc)) {
            pVStackY_5c = (VARIANTARG *)0x4c2902;
            FUN_004bb1d8((int)piVar6);
          }
        }
        if ((*(byte *)(piVar5 + 6) & 8) != 0) {
          pVStackY_5c = (VARIANTARG *)0x4c2935;
          FUN_004bb06c((int)piVar6);
        }
        pVStackY_5c = (VARIANTARG *)0x4c293d;
        iVar7 = FUN_004b7f04((int)piVar3);
        pVStackY_5c = (VARIANTARG *)0x4c2945;
        FUN_004b7564(iVar7,(int)piVar6);
        *in_FS_OFFSET = pVVar8;
        puStack_50 = &DAT_004c2962;
        uStack_54 = 0x4c295a;
        FUN_00403094(piVar6);
        return;
      }
      local_4c = (VARIANTARG *)0x4c29a5;
      cVar2 = FUN_00491eac(0,&stack0xffffffbc);
    } while (cVar2 != '\0');
  }
  local_4c = (VARIANTARG *)0x4c29bb;
  iVar7 = FUN_00403224(param_2,(int)&DAT_004bca60);
  local_4c = (VARIANTARG *)0x4c29c3;
  iVar7 = FUN_004b8640(*(int *)(iVar7 + 4));
  local_4c = (VARIANTARG *)0x4c29cb;
  FUN_004b7564(iVar7,(int)piVar3);
  *in_FS_OFFSET = pVVar9;
  uStack_40 = 0x4c2a7e;
  FUN_00403094(piVar3);
  *in_FS_OFFSET = puStack_3c;
  pcStack_34 = &LAB_004c2ad9;
  puStack_38 = (undefined1 *)0x4c2a96;
  FUN_00403db0(local_1b0);
  puStack_38 = (undefined1 *)0x4c2aa6;
  FUN_00403dd4(local_19c,2);
  puStack_38 = (undefined1 *)0x4c2abc;
  FUN_00404878(&local_18c,&DAT_00401108,4);
  puStack_38 = (undefined1 *)0x4c2ac9;
  FUN_00403dd4((int *)&local_4c,2);
  puStack_38 = (undefined1 *)0x4c2ad1;
  FUN_00403db0((int *)&local_28);
  return;
}

