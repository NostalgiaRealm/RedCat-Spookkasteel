/*
 * FUN_004b42c8 at 004b42c8
 * undefined __register FUN_004b42c8(int * param_1)
 * Address ranges: 004b42c8-004b48af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b42c8(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined3 uVar8;
  undefined4 *puVar9;
  undefined4 unaff_EDI;
  undefined4 *puVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  bool bVar12;
  undefined4 local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  undefined4 *local_168;
  char *local_164;
  int local_160;
  byte local_15c [256];
  int local_5c;
  int local_58;
  VARIANT local_54;
  char *pcStack_30;
  undefined1 *puStack_2c;
  undefined1 *local_28;
  undefined4 uStack_24;
  int *local_20;
  undefined4 *local_1c;
  int iVar13;
  int local_c;
  
  bVar11 = 0;
  local_1c = (undefined4 *)&stack0xfffffffc;
  iVar6 = 0x30;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = (int *)&LAB_004b48f7;
  uVar5 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_24._0_3_ = (uint3)uVar5;
  uStack_24._0_3_ = (uint3)uStack_24 & 0xffff;
  uStack_24 = CONCAT13(1,(uint3)uStack_24);
  local_28 = (undefined1 *)0x4b42fb;
  FUN_00403db0((int *)&stack0xffffffe8);
  iVar13 = 0;
  iVar6 = 0;
  local_28 = (undefined1 *)0x4b4311;
  local_20 = (int *)FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX);
  puStack_2c = &LAB_004b48b0;
  pcStack_30 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_30;
  local_28 = &stack0xfffffffc;
  iVar2 = FUN_004b17b8(param_1[8]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_28 = (undefined1 *)(uVar3 + 1);
    local_c = 0;
    do {
      piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
      uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b25f4);
      if ((char)uVar5 == '\0') {
        piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
        uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b2750);
        if ((char)uVar5 == '\0') {
          piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
          uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b2664);
          if ((char)uVar5 == '\0') {
            piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
            uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b27b0);
            uVar8 = (undefined3)((uint)param_1 >> 8);
            if ((char)uVar5 == '\0') {
              piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
              uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b2824);
              if ((char)uVar5 == '\0') {
                FUN_00402fe0(*param_1,local_15c);
                FUN_00403fd4(&local_180,local_15c);
                pcStack_30 = "Unknown condition type";
                FUN_004040f0(&local_17c,3);
                FUN_00403d94(local_17c);
              }
              else {
                piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
                iVar2 = FUN_00403224(piVar4,(int)&PTR_FUN_004b2824);
                FUN_00403e48((int *)&local_1c,*(int *)(iVar2 + 4));
                FUN_00403f58(&local_174,CONCAT31(uVar8,*(undefined1 *)((int)param_1 + 0x11)));
                FUN_00403f58(&local_178,CONCAT31(uVar8,*(undefined1 *)((int)param_1 + 0x12)));
                FUN_004040f0((int *)&stack0xffffffe8,4);
                if (uStack_24._2_1_ == '\0') {
                  local_54.n1._12_4_ = 0x4b479f;
                  iVar2 = FUN_0046f194(param_1[0xd],0,local_1c,3);
                  local_54.n1._12_4_ = 0x4b47ae;
                  piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
                  local_54.n1._12_4_ = 0x4b47b9;
                  iVar7 = FUN_00403224(piVar4,(int)&PTR_FUN_004b2824);
                  FUN_00470a54(iVar2,(VARIANTARG *)(iVar7 + 8));
                }
                else {
                  piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
                  iVar2 = FUN_00403224(piVar4,(int)&PTR_FUN_004b2824);
                  FUN_0040503c(&local_54,(VARIANTARG *)(iVar2 + 8),7);
                  local_54.n1._12_4_ = 0x4b4783;
                  iVar2 = FUN_0046f194(param_1[0xd],9,local_1c,3);
                  FUN_00470a54(iVar2,&local_54);
                }
                uStack_24 = uStack_24 & 0xffffff;
              }
            }
            else {
              FUN_00409bd8(iVar13,(int *)&local_168);
              uVar3 = FUN_0040407c((int *)&local_1c,(undefined4 *)"param",local_168);
              bVar12 = SCARRY4(iVar13,1);
              iVar13 = iVar13 + 1;
              if (bVar12) {
                thunk_FUN_00402874(uVar3);
              }
              FUN_00403f58(&local_16c,CONCAT31(uVar8,*(undefined1 *)((int)param_1 + 0x11)));
              FUN_00403f58(&local_170,CONCAT31(uVar8,*(undefined1 *)((int)param_1 + 0x12)));
              FUN_004040f0((int *)&stack0xffffffe8,4);
              if (uStack_24._2_1_ == '\0') {
                local_54.n1._12_4_ = 0x4b4690;
                iVar2 = FUN_0046f194(param_1[0xd],0,local_1c,3);
                local_54.n1._12_4_ = 0x4b469f;
                piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
                local_54.n1._12_4_ = 0x4b46aa;
                iVar7 = FUN_00403224(piVar4,(int)&PTR_FUN_004b27b0);
                FUN_00470a54(iVar2,(VARIANTARG *)(iVar7 + 8));
              }
              else {
                piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
                iVar2 = FUN_00403224(piVar4,(int)&PTR_FUN_004b27b0);
                FUN_0040503c(&local_54,(VARIANTARG *)(iVar2 + 8),7);
                local_54.n1._12_4_ = 0x4b4674;
                iVar2 = FUN_0046f194(param_1[0xd],9,local_1c,3);
                FUN_00470a54(iVar2,&local_54);
              }
              uStack_24 = uStack_24 & 0xffffff;
            }
          }
          else {
            iVar2 = FUN_004b60b8((int *)param_1[8],local_c);
            FUN_00404038((int *)&stack0xffffffe8,*(undefined4 **)(iVar2 + 4));
            uStack_24 = uStack_24 & 0xffffff;
          }
        }
        else {
          piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
          iVar2 = FUN_00403224(piVar4,(int)&PTR_FUN_004b2750);
          puVar9 = (undefined4 *)(iVar2 + 4);
          puVar10 = (undefined4 *)&stack0xffffffbc;
          for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
          }
          FUN_004b3b04((int)param_1,(undefined4 *)&stack0xffffffbc,&local_160);
          FUN_0049145c((int *)param_1[7],&stack0xffffffbc,(int *)&local_164);
          pcStack_30 = local_164;
          FUN_004040f0((int *)&stack0xffffffe8,4);
          if (uStack_24._3_1_ != '\0') {
            piVar4 = (int *)FUN_00492440((int *)param_1[7],&stack0xffffffbc);
            uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_004b1968);
            if ((char)uVar5 != '\0') {
              uStack_24._0_3_ = CONCAT12(1,(undefined2)uStack_24);
              uStack_24 = (uint)(uint3)uStack_24;
            }
          }
          uStack_24 = uStack_24 & 0xffffff;
        }
      }
      else {
        iVar2 = FUN_004b60b8((int *)param_1[8],local_c);
        FUN_00404038((int *)&stack0xffffffe8,*(undefined4 **)(iVar2 + 4));
        piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
        uVar3 = (**(code **)(*piVar4 + 4))(piVar4,DAT_00574464);
        if ((char)uVar3 != '\0') {
          bVar12 = SCARRY4(iVar6,1);
          iVar6 = iVar6 + 1;
          if (bVar12) {
            thunk_FUN_00402874(uVar3);
          }
        }
        piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
        uVar3 = (**(code **)(*piVar4 + 4))(piVar4,DAT_00574468);
        if ((char)uVar3 != '\0') {
          bVar12 = SBORROW4(iVar6,1);
          iVar6 = iVar6 + -1;
          if (bVar12) {
            thunk_FUN_00402874(uVar3);
          }
          if (iVar6 < 0) {
            FUN_00402fe0(*param_1,local_15c);
            FUN_00403fd4(&local_5c,local_15c);
            FUN_004040f0(&local_58,3);
            FUN_00403d94(local_58);
          }
        }
        piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
        cVar1 = (**(code **)(*piVar4 + 4))(piVar4,DAT_00574464);
        if (cVar1 == '\0') {
          piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
          cVar1 = (**(code **)(*piVar4 + 4))(piVar4,DAT_00574438);
          if (cVar1 == '\0') {
            piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
            cVar1 = (**(code **)(*piVar4 + 4))(piVar4,DAT_0057443c);
            if (cVar1 == '\0') {
              piVar4 = (int *)FUN_004b60b8((int *)param_1[8],local_c);
              cVar1 = (**(code **)(*piVar4 + 4))(piVar4,DAT_00574488);
              if (cVar1 == '\0') goto LAB_004b481e;
            }
          }
        }
        uStack_24._0_3_ = (uint3)uStack_24 & 0xffff;
        uStack_24 = CONCAT13(1,(uint3)uStack_24);
      }
LAB_004b481e:
      if (iVar6 == 0) {
        (**(code **)(*local_20 + 0x34))(local_20,unaff_EDI);
        FUN_00403db0((int *)&stack0xffffffe8);
      }
      local_c = local_c + 1;
      local_28 = local_28 + -1;
    } while (local_28 != (undefined1 *)0x0);
  }
  iVar6 = (**(code **)(*local_20 + 0x14))();
  if (0 < iVar6) {
    iVar6 = (**(code **)(*local_20 + 0x14))();
    uVar3 = iVar6 - 1;
    if (SBORROW4(iVar6,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_28 = (undefined1 *)(uVar3 + 1);
      local_c = 0;
      do {
        (**(code **)(*local_20 + 0xc))(local_20,local_c,&local_184);
        (**(code **)(*(int *)param_1[0x17] + 0x34))((int *)param_1[0x17],local_184);
        local_c = local_c + 1;
        local_28 = (undefined1 *)((int)local_28 + -1);
      } while (local_28 != (undefined1 *)0x0);
    }
  }
  *in_FS_OFFSET = pcStack_30;
  local_28 = &LAB_004b48b7;
  puStack_2c = (undefined1 *)0x4b48af;
  FUN_00403094(local_20);
  return;
}

