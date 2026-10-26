/*
 * FUN_004c15e4 at 004c15e4
 * undefined __register FUN_004c15e4(int * param_1, int * param_2, undefined4 param_3, char param_4)
 * Address ranges: 004c15e4-004c1948;004c1950-004c1a7d;004c1a85-004c1ba6;004c1bae-004c1c05;004c1c5a-004c1c7e;004c1c86-004c1d50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 12 for TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004c1c6d) */
/* WARNING: Removing unreachable block (ram,0x004c1be6) */
/* WARNING: Removing unreachable block (ram,0x004c1b23) */
/* Recovered original virtual function entry from validated Delphi VMT 0x4bcbdc slot 12 for
   TAppDAODatabaseConnection. Original bytes unchanged; names and types still inferred. */

void FUN_004c15e4(int *param_1,int *param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int *unaff_EDI;
  uint *in_FS_OFFSET;
  undefined1 uVar10;
  int local_220;
  VARIANT local_21c;
  undefined4 *local_20c;
  VARIANTARG local_208;
  VARIANT local_1f8;
  VARIANT local_1e8;
  undefined4 *local_1d8;
  VARIANTARG local_1d4;
  VARIANT local_1c4;
  VARIANT local_1b4;
  undefined4 *local_1a4;
  VARIANTARG local_1a0;
  LPCSTR local_190;
  OLECHAR local_18c [2];
  VARIANTARG local_188;
  uint local_178;
  int local_174;
  byte local_170 [256];
  int local_70;
  VARIANT local_6c;
  byte local_5c [8];
  undefined4 uStackY_54;
  VARIANTARG *pVStackY_50;
  uint uStackY_4c;
  VARIANTARG *pVVar11;
  VARIANTARG *pVVar12;
  undefined4 *puVar13;
  undefined4 uStack_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  uint local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  local_20 = &stack0xfffffffc;
  iVar9 = 0x43;
  do {
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_004c1d51;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&local_28;
  puVar2 = &stack0xfffffffc;
  if (param_1[0x14] == 0) {
    uStack_2c = (undefined1 *)0x4c162a;
    FUN_00402fe0(*param_1,local_170);
    uStack_2c = (undefined1 *)0x4c1638;
    FUN_00403fd4(&local_70,local_170);
    uStack_2c = (undefined1 *)0x4c1645;
    FUN_00404038(&local_70,(undefined4 *)": No database open.");
    uStack_2c = (undefined1 *)0x4c1657;
    FUN_00403d94(local_70);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  uStack_2c = (undefined1 *)0x4c165f;
  piVar7 = (int *)FUN_004949bc(param_2);
  uStack_2c = (undefined1 *)0x4c1664;
  cVar3 = (**(code **)(*piVar7 + 0x4c))();
  if (cVar3 == '\0') {
    uStack_2c = (undefined1 *)0x4c1678;
    FUN_00402fe0(*param_1,local_170);
    uStack_2c = (undefined1 *)0x4c1689;
    FUN_00403fd4(&local_174,local_170);
    uStack_2c = (undefined1 *)0x4c1699;
    FUN_00404038(&local_174,(undefined4 *)": No primary key defined; update impossible.");
    uStack_2c = (undefined1 *)0x4c16ae;
    FUN_00403d94(local_174);
  }
  uStack_2c = (undefined1 *)0x4c16bf;
  iVar9 = FUN_00403224((int *)param_1[1],(int)&PTR_FUN_004bcac4);
  if (*(char *)(iVar9 + 0x2c) != '\0') {
    uStack_2c = (undefined1 *)0x4c16d9;
    FUN_00403d94("Cannot update because the database is opened readonly.");
  }
  local_24 = (undefined1 *)0x0;
  local_28 = 0;
  local_30 = &LAB_004c1c7f;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_34;
  puVar13 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&stack0xffffffc0;
  uStack_2c = &stack0xfffffffc;
  piVar7 = (int *)FUN_004949bc(param_2);
  FUN_00496550(piVar7,&local_6c);
  iVar9 = FUN_00494858(param_2);
  piVar7 = (int *)(**(code **)(*param_1 + 0x54))(param_1,*(undefined4 *)(iVar9 + 0x34));
  local_28 = FUN_00403224(piVar7,(int)&DAT_004bcb7c);
  if (*(char *)(local_28 + 8) == '\0') {
    *(undefined1 *)(local_28 + 8) = 1;
    local_24 = *(undefined1 **)(local_28 + 4);
  }
  else {
    uStackY_4c = 0x4c175b;
    pVVar11 = (VARIANTARG *)PTR_DAT_005725ac;
    pVVar12 = (VARIANTARG *)PTR_DAT_005725ac;
    iVar9 = FUN_00494858(param_2);
    uStackY_4c = 0x4c1769;
    FUN_004045b8((BSTR)&local_178,*(LPCSTR *)(iVar9 + 0x3c));
    uStackY_4c = local_178;
    pVStackY_50 = (VARIANTARG *)0x4c1780;
    FUN_004053dc(&local_188,1);
    uVar1 = uStackY_4c;
    uStackY_4c = 0x4c1792;
    local_24 = (undefined1 *)FUN_004b9204(param_1[0x14],uVar1,&local_188,pVVar11,pVVar12);
    uStack_2c = (undefined1 *)CONCAT13(1,(undefined3)uStack_2c);
  }
  iVar9 = FUN_00494858(param_2);
  FUN_004c4da4(param_1,*(undefined4 **)(iVar9 + 0x3c));
  FUN_004045b8(local_18c,local_190);
  FUN_004b9e84((int)local_24);
  FUN_004bc4f4((int)local_24,"=",&local_6c);
  sVar6 = FUN_004ba054((int)local_24);
  if (sVar6 == 0) {
    uStack_34 = CONCAT13(1,(undefined3)uStack_34);
    if (param_4 == '\0') {
      bVar4 = FUN_004940cc(param_2,local_5c);
      if (bVar4) {
        do {
          piVar7 = (int *)FUN_00494858(param_2);
          uVar8 = FUN_004917c4(piVar7,local_5c);
          if ((char)uVar8 != '\0') {
            puVar13 = (undefined4 *)&stack0xffffffe4;
            uStackY_4c = 0x4c186a;
            FUN_00494e38(param_2,local_5c,'\0',puVar13,&local_20);
            if ((local_20[0x18] & 8) == 0) {
              uStackY_4c = 0x4c187f;
              bVar5 = FUN_00495bac((int)unaff_EDI);
              if (bVar5 != 0) {
                uStackY_4c = 0x4c188f;
                cVar3 = (**(code **)(*unaff_EDI + 0x4c))();
                if ((cVar3 != '\0') && (cVar3 = FUN_00496c8c(unaff_EDI), cVar3 != '\0')) {
                  piVar7 = (int *)FUN_00494858(param_2);
                  FUN_0049145c(piVar7,local_5c,(int *)&local_1a4);
                  FUN_004054ac(&local_1a0,local_1a4);
                  pVVar11 = &local_1a0;
                  iVar9 = FUN_004ba1d8((int)local_24);
                  piVar7 = (int *)FUN_004bb34c(iVar9,pVVar11);
                  uVar10 = 1;
                  uStackY_4c = *in_FS_OFFSET;
                  *in_FS_OFFSET = (uint)&uStackY_4c;
                  pVStackY_50 = (VARIANTARG *)0x4c1902;
                  FUN_004bae4c((int)piVar7,&local_1b4);
                  pVStackY_50 = &local_1b4;
                  uStackY_54 = 0x4c1917;
                  FUN_00495bcc(unaff_EDI,&local_1c4);
                  pVVar11 = pVStackY_50;
                  pVStackY_50 = (VARIANTARG *)0x4c1923;
                  FUN_00405abc(pVVar11,&local_1c4);
                  if ((bool)uVar10) {
                    *in_FS_OFFSET = uStackY_4c;
                    FUN_00403094(piVar7);
                    return;
                  }
                  uStack_34 = uStack_34 & 0xffffff;
                  pVStackY_50 = (VARIANTARG *)0x4c192e;
                  FUN_004038cc();
                  break;
                }
              }
            }
          }
          cVar3 = FUN_004940f4(param_2,local_5c);
        } while (cVar3 != '\0');
      }
    }
    else if ((param_4 == '\x01') && (bVar4 = FUN_004940cc(param_2,local_5c), bVar4)) {
      do {
        piVar7 = (int *)FUN_00494858(param_2);
        uVar8 = FUN_004917c4(piVar7,local_5c);
        if ((char)uVar8 != '\0') {
          puVar13 = (undefined4 *)&stack0xffffffe4;
          uStackY_4c = 0x4c19b2;
          FUN_00494e38(param_2,local_5c,'\0',puVar13,&local_20);
          if ((local_20[0x18] & 8) == 0) {
            uStackY_4c = 0x4c19c7;
            bVar5 = FUN_00495bac((int)unaff_EDI);
            if (bVar5 != 0) {
              uStackY_4c = 0x4c19d7;
              cVar3 = (**(code **)(*unaff_EDI + 0x4c))();
              if (cVar3 != '\0') {
                piVar7 = (int *)FUN_00494858(param_2);
                FUN_0049145c(piVar7,local_5c,(int *)&local_1d8);
                FUN_004054ac(&local_1d4,local_1d8);
                pVVar11 = &local_1d4;
                iVar9 = FUN_004ba1d8((int)local_24);
                piVar7 = (int *)FUN_004bb34c(iVar9,pVVar11);
                uVar10 = 1;
                uStackY_4c = *in_FS_OFFSET;
                *in_FS_OFFSET = (uint)&uStackY_4c;
                pVStackY_50 = (VARIANTARG *)0x4c1a3a;
                FUN_004bae4c((int)piVar7,&local_1e8);
                pVStackY_50 = &local_1e8;
                uStackY_54 = 0x4c1a4f;
                FUN_00495bcc(unaff_EDI,&local_1f8);
                pVVar11 = pVStackY_50;
                pVStackY_50 = (VARIANTARG *)0x4c1a5b;
                FUN_00405abc(pVVar11,&local_1f8);
                if ((bool)uVar10) {
                  *in_FS_OFFSET = uStackY_4c;
                  FUN_00403094(piVar7);
                  return;
                }
                uStack_34 = uStack_34 & 0xffffff;
                pVStackY_50 = (VARIANTARG *)0x4c1a66;
                FUN_004038cc();
                break;
              }
            }
          }
        }
        cVar3 = FUN_004940f4(param_2,local_5c);
      } while (cVar3 != '\0');
    }
    if (uStack_34._3_1_ == '\0') {
      *in_FS_OFFSET = (uint)puVar13;
      *in_FS_OFFSET = uStack_34;
      *(undefined1 *)(local_28 + 8) = 0;
      return;
    }
    FUN_004ba508((int)local_24);
    bVar4 = FUN_004940cc(param_2,local_5c);
    if (bVar4) {
      do {
        piVar7 = (int *)FUN_00494858(param_2);
        uVar8 = FUN_004917c4(piVar7,local_5c);
        if ((char)uVar8 != '\0') {
          puVar13 = (undefined4 *)&stack0xffffffe4;
          uStackY_4c = 0x4c1aea;
          FUN_00494e38(param_2,local_5c,'\0',puVar13,&local_20);
          if ((local_20[0x18] & 8) == 0) {
            uStackY_4c = 0x4c1aff;
            cVar3 = (**(code **)(*unaff_EDI + 0x4c))();
            if ((cVar3 != '\0') && (cVar3 = FUN_00496c8c(unaff_EDI), cVar3 != '\0')) {
              piVar7 = (int *)FUN_00494858(param_2);
              FUN_0049145c(piVar7,local_5c,(int *)&local_20c);
              FUN_004054ac(&local_208,local_20c);
              pVVar11 = &local_208;
              iVar9 = FUN_004ba1d8((int)local_24);
              piVar7 = (int *)FUN_004bb34c(iVar9,pVVar11);
              uStackY_4c = *in_FS_OFFSET;
              *in_FS_OFFSET = (uint)&uStackY_4c;
              pVStackY_50 = (VARIANTARG *)0x4c1b83;
              FUN_00496550(unaff_EDI,&local_21c);
              pVStackY_50 = (VARIANTARG *)0x4c1b91;
              FUN_004baf6c((int)piVar7,&local_21c);
              *in_FS_OFFSET = uStackY_4c;
              FUN_00403094(piVar7);
              return;
            }
          }
        }
        cVar3 = FUN_004940f4(param_2,local_5c);
      } while (cVar3 != '\0');
    }
    FUN_004bab68((int)local_24);
    *in_FS_OFFSET = (uint)puVar13;
    FUN_004038cc();
  }
  else {
    FUN_00459bd4(0x4c1e38);
    *in_FS_OFFSET = (uint)puVar13;
    FUN_004038cc();
  }
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_004c1d5b;
  local_24 = (undefined1 *)0x4c1c9e;
  FUN_00403db0(&local_220);
  local_24 = (undefined1 *)0x4c1ca9;
  FUN_00405bcc(&local_21c);
  local_24 = (undefined1 *)0x4c1cb4;
  FUN_00403db0((int *)&local_20c);
  local_24 = (undefined1 *)0x4c1cca;
  FUN_00404878(&local_208,&DAT_00401108,3);
  local_24 = (undefined1 *)0x4c1cd5;
  FUN_00403db0((int *)&local_1d8);
  local_24 = (undefined1 *)0x4c1ceb;
  FUN_00404878(&local_1d4,&DAT_00401108,3);
  local_24 = (undefined1 *)0x4c1cf6;
  FUN_00403db0((int *)&local_1a4);
  local_24 = (undefined1 *)0x4c1d01;
  FUN_00405bcc(&local_1a0);
  local_24 = (undefined1 *)0x4c1d0c;
  FUN_00403db0((int *)&local_190);
  local_24 = (undefined1 *)0x4c1d17;
  FUN_00404474((undefined4 *)local_18c);
  local_24 = (undefined1 *)0x4c1d22;
  FUN_00405bcc(&local_188);
  local_24 = (undefined1 *)0x4c1d2d;
  FUN_00404474(&local_178);
  local_24 = (undefined1 *)0x4c1d38;
  FUN_00403db0(&local_174);
  local_24 = (undefined1 *)0x4c1d40;
  FUN_00403db0(&local_70);
  local_24 = (undefined1 *)0x4c1d48;
  FUN_00405bcc(&local_6c);
  local_24 = (undefined1 *)0x4c1d50;
  FUN_00403db0((int *)&local_30);
  return;
}

