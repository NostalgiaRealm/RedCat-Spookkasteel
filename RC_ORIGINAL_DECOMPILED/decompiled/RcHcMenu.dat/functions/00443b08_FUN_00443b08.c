/*
 * FUN_00443b08 at 00443b08
 * undefined __register FUN_00443b08(int param_1, char param_2)
 * Address ranges: 00443b08-00443f3a;00443f42-00443f79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443b08(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  PCNZCH pCVar13;
  int iVar14;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int *in_FS_OFFSET;
  undefined1 uVar15;
  int local_44;
  byte *local_40;
  undefined4 *local_3c;
  byte *local_38;
  undefined1 *puVar16;
  int local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  int *local_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar14 = 8;
  do {
    local_8 = 0;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_24;
  uStack_20 = &LAB_00443f7a;
  puVar16 = &stack0xfffffffc;
  if (param_2 == '\0') {
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      local_28 = (undefined1 *)0x443b45;
      cVar1 = FUN_00444124(param_1);
      puVar16 = local_1c;
      if (cVar1 != '\0') goto LAB_00443b4d;
    }
    *in_FS_OFFSET = (int)local_24;
    local_1c = &LAB_00443f81;
    uStack_20 = (undefined1 *)0x443f5c;
    FUN_00403dd4(&local_44,4);
    uStack_20 = (undefined1 *)0x443f69;
    FUN_00403dd4(&local_30,3);
    uStack_20 = (undefined1 *)0x443f71;
    FUN_00403db0((int *)&local_1c);
    uStack_20 = (undefined1 *)0x443f79;
    FUN_00403db0(&local_8);
    return;
  }
LAB_00443b4d:
  local_1c = puVar16;
  local_28 = (undefined1 *)0x443b5b;
  FUN_00403e48(&local_8,(int)PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_0056f8e4);
  local_28 = (undefined1 *)0x443b67;
  piVar3 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
  local_28 = (undefined1 *)0x443b76;
  piVar4 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  local_28 = (undefined1 *)0x443b85;
  local_24 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_01);
  local_28 = (undefined1 *)0x443b94;
  piVar5 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_02);
  local_2c = (undefined4 *)&LAB_00443f3b;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_30;
  local_28 = &stack0xfffffffc;
  iVar14 = FUN_00442fec(param_1);
  if (-1 < iVar14 + -1) {
    iVar14 = 0;
    do {
      puVar16 = (undefined1 *)0x443bc9;
      iVar6 = FUN_00442ffc(param_1,iVar14);
      uVar15 = *(char *)(iVar6 + 0x32) == '\0';
      if (!(bool)uVar15) {
        iVar6 = FUN_00442ffc(param_1,iVar14);
        puVar16 = (undefined1 *)0x443be9;
        FUN_00404140(*(uint **)(iVar6 + 0x24),(uint *)&DAT_00443f94);
        if (!(bool)uVar15) {
          puVar16 = (undefined1 *)0x443bf8;
          iVar6 = FUN_00442ffc(param_1,iVar14);
          if (*(int *)(iVar6 + 0x24) != 0) {
            iVar6 = FUN_00442ffc(param_1,iVar14);
            FUN_00445938(*(int *)(iVar6 + 0x24),(int *)&local_38);
            FUN_00409690(local_38,(int *)&local_28);
            if (local_28 == (undefined *)0x0) {
              puVar16 = (undefined1 *)FUN_00442ffc(param_1,iVar14);
              local_38 = (byte *)0x443c3a;
              iVar6 = FUN_00442ffc(param_1,iVar14);
              local_38 = (byte *)0x443c47;
              FUN_00413c0c(local_24,0,*(undefined4 *)(iVar6 + 0x24),puVar16);
            }
            else {
              puVar16 = (undefined1 *)0x443c57;
              pCVar13 = FUN_0040da1c(local_28,PTR_s_1234567890ABCDEFGHIJKLMNOPQRSTUV_0056f8e4);
              if (pCVar13 != (PCNZCH)0x0) {
                local_38 = (byte *)0x443c64;
                puVar16 = &stack0xfffffffc;
                bVar2 = FUN_004438f4(local_28,extraout_EDX,extraout_ECX_03,(int)&stack0xfffffffc);
                if (!bVar2) {
                  iVar6 = FUN_00442ffc(param_1,iVar14);
                  piVar7 = (int *)(iVar6 + 0x24);
                  local_38 = (byte *)0x443c7f;
                  iVar6 = FUN_00442ffc(param_1,iVar14);
                  local_38 = (byte *)0x443c8a;
                  FUN_004458a0(*(undefined4 **)(iVar6 + 0x24),(int *)&local_3c);
                  FUN_00403e04(piVar7,local_3c);
                  puVar16 = (undefined1 *)FUN_00442ffc(param_1,iVar14);
                  local_38 = (byte *)0x443ca6;
                  iVar6 = FUN_00442ffc(param_1,iVar14);
                  local_38 = (byte *)0x443cb3;
                  FUN_00413c0c(local_24,0,*(undefined4 *)(iVar6 + 0x24),puVar16);
                }
              }
            }
          }
        }
      }
      iVar14 = iVar14 + 1;
    } while (puVar16 != (undefined1 *)0x1);
  }
  FUN_00403e48(&local_30,local_8);
  iVar14 = (**(code **)(*local_24 + 0x14))();
  if (-1 < iVar14 + -1) {
    do {
      FUN_00403e48(&local_8,local_30);
      (**(code **)(*piVar4 + 8))(piVar4,local_24);
      (**(code **)(*piVar3 + 0x40))();
      iVar14 = (**(code **)(*piVar4 + 0x14))();
      iVar14 = iVar14 + -1;
      if (-1 < iVar14) {
        do {
          (**(code **)(*piVar4 + 0xc))(piVar4,iVar14,&local_2c);
          for (iVar6 = 1; iVar10 = FUN_00404030((int)local_2c), iVar6 <= iVar10; iVar6 = iVar6 + 1)
          {
            uVar8 = (uint)*(byte *)((int)local_2c + iVar6 + -1);
            if (((byte)PTR_DAT_005725fc[(int)uVar8 >> 3] >> (uVar8 & 7) & 1) == 0) {
              local_38 = (byte *)0x443d53;
              FUN_00404238((int)local_2c,iVar6,1,(int *)&local_40);
              FUN_00409690(local_40,(int *)&local_28);
              local_38 = (byte *)0x443d67;
              bVar2 = FUN_004438f4(local_28,extraout_EDX_00,extraout_ECX_04,(int)&stack0xfffffffc);
              if (bVar2) {
                if (PTR_DAT_0057261c[8] == '\0') {
                  FUN_004042c0((undefined4 *)&LAB_00443fa0,(int *)&local_2c,iVar6);
                }
                else {
                  FUN_004439a8((int *)&local_2c,local_28,iVar6);
                }
                uVar9 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar14);
                (**(code **)(*piVar3 + 0x38))(piVar3,local_2c,uVar9);
                (**(code **)(*piVar4 + 0x44))(piVar4,iVar14);
                break;
              }
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
          iVar14 = iVar14 + -1;
        } while (iVar14 != -1);
      }
      iVar14 = (**(code **)(*piVar3 + 0x14))();
      if (0 < iVar14) {
        local_38 = (byte *)0x443de6;
        FUN_00443924();
      }
      iVar14 = (**(code **)(*piVar4 + 0x14))();
      if (iVar14 < 1) break;
      iVar6 = 0x443dfb;
      iVar14 = (**(code **)(*piVar4 + 0x14))();
      if (-1 < iVar14 + -1) {
        iVar10 = 0;
        do {
          iVar6 = (**(code **)(*piVar4 + 0x18))(piVar4,iVar10);
          iVar11 = FUN_00413bd8(local_24,iVar6);
          iVar12 = (**(code **)(*local_24 + 0x14))();
          iVar6 = 0x443e30;
          (**(code **)(*local_24 + 0x60))(local_24,iVar11,iVar12 + -1);
          iVar10 = iVar10 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    } while (iVar6 != 1);
  }
  local_38 = (byte *)0x443e49;
  FUN_00443924();
  iVar14 = (**(code **)(*piVar5 + 0x14))();
  uStack_20 = (undefined1 *)CONCAT13(0 < iVar14,(undefined3)uStack_20);
  iVar14 = (**(code **)(*piVar5 + 0x14))();
  if (-1 < iVar14 + -1) {
    iVar14 = 0;
    do {
      (**(code **)(*piVar5 + 0xc))(piVar5,iVar14,&local_2c);
      if ((((PTR_DAT_0057261c[8] != '\0') &&
           (pCVar13 = FUN_0040da1c(&LAB_00443fa0,(undefined *)local_2c), pCVar13 == (PCNZCH)0x0)) &&
          (local_1c != (undefined1 *)0x0)) &&
         (pCVar13 = FUN_0040da1c(&LAB_00443fa0,(undefined *)local_2c), pCVar13 == (PCNZCH)0x0)) {
        piVar7 = &local_44;
        local_38 = (byte *)0x443ebb;
        iVar6 = FUN_00404030((int)local_1c);
        local_38 = (byte *)0x443eca;
        FUN_00404238((int)local_1c,iVar6,1,piVar7);
        FUN_004439a8((int *)&local_2c,local_44,0);
        iVar6 = FUN_00404030((int)local_1c);
        FUN_00404278((int *)&local_1c,iVar6,1);
      }
      iVar6 = (**(code **)(*piVar5 + 0x18))(piVar5,iVar14);
      iVar10 = 0x443f03;
      FUN_00403e04((int *)(iVar6 + 0x24),local_2c);
      iVar14 = iVar14 + 1;
    } while (iVar10 != 1);
  }
  *in_FS_OFFSET = local_30;
  local_28 = (undefined1 *)0x443f42;
  local_2c = (undefined4 *)0x443f22;
  FUN_00403094(piVar5);
  local_2c = (undefined4 *)0x443f2a;
  FUN_00403094(local_24);
  local_2c = (undefined4 *)0x443f32;
  FUN_00403094(piVar4);
  local_2c = (undefined4 *)0x443f3a;
  FUN_00403094(piVar3);
  return;
}

