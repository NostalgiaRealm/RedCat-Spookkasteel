/*
 * FUN_004d3910 at 004d3910
 * undefined __register FUN_004d3910(int * param_1, int * param_2, undefined4 param_3, int param_4, int * param_5, int * param_6, char * param_7, char * param_8, undefined4 * param_9)
 * Address ranges: 004d3910-004d3d7f;004d3d91-004d3e0d;004d3e18-004d3e41;004d3e49-004d3eca;004d3ed2-004d3f79;004d3f81-004d3f9f;004d3fa7-004d3fe4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d3910(int *param_1,int *param_2,undefined4 param_3,int param_4,int *param_5,int *param_6
                 ,char *param_7,char *param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iVar13;
  char **ppcVar14;
  uint *in_FS_OFFSET;
  undefined4 local_180;
  VARIANT local_17c;
  undefined *local_16c;
  undefined *local_168;
  int local_164;
  int local_160;
  byte local_15c [236];
  undefined4 uStackY_70;
  int *piVar15;
  char *pcVar16;
  uint local_5c;
  undefined1 *local_58;
  undefined4 auStack_50 [2];
  char *local_40 [5];
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  iVar13 = 0x2f;
  do {
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  LOCK();
  UNLOCK();
  local_20 = (int *)0x0;
  ppcVar14 = local_40;
  for (iVar13 = 7; uVar12 = local_20, iVar13 != 0; iVar13 = iVar13 + -1) {
    *ppcVar14 = (char *)*param_9;
    param_9 = param_9 + 1;
    ppcVar14 = ppcVar14 + 1;
  }
  uStack_24 = &LAB_004d3fe5;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_28;
  uStack_2c = 0x4d3954;
  local_20 = (int *)&stack0xfffffffc;
  iVar13 = FUN_00494858(param_2);
  uStack_2c = 0x4d3959;
  bVar3 = FUN_004918fc(iVar13);
  if (!bVar3) {
    uStack_2c = 0x4d396d;
    FUN_00402fe0(*param_1,local_15c);
    uStack_2c = 0x4d397b;
    FUN_00403fd4((int *)&local_5c,local_15c);
    uStack_2c = local_5c;
    local_40[4] = ".CascadeDeleteAppObj: ";
    local_40[3] = "The object does not have a corresponding table in the database";
    local_40[2] = (char *)0x4d3995;
    FUN_004040f0((int *)&local_58,3);
    local_40[2] = (char *)0x4d39a7;
    FUN_00403d94(local_58);
  }
  local_40[2] = (char *)0x4d39af;
  piVar6 = (int *)FUN_004949bc(param_2);
  local_40[2] = (char *)0x4d39b4;
  cVar4 = (**(code **)(*piVar6 + 0x4c))();
  if (cVar4 == '\0') {
    local_40[2] = (char *)0x4d39c8;
    FUN_00402fe0(*param_1,local_15c);
    local_40[2] = (char *)0x4d39d9;
    FUN_00403fd4(&local_164,local_15c);
    local_40[2] = (char *)local_164;
    local_40[1] = ".CascadeDeleteAppObj: ";
    local_40[0] = "PrimaryKey not initialized";
    FUN_004040f0(&local_160,3);
    FUN_00403d94(local_160);
  }
  *param_8 = '\0';
  local_40[1] = &LAB_004d3fa0;
  local_40[0] = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)local_40;
  ppcVar14 = local_40;
  local_40[2] = &stack0xfffffffc;
  piVar6 = (int *)FUN_004d372c(param_1,param_2,(int *)uVar12,ppcVar14);
  FUN_004d5dc0(piVar6);
  cVar4 = (**(code **)(*piVar6 + 0x3c))();
  if (cVar4 == '\0') {
    auStack_50[1] = 0x4d3a5b;
    FUN_004d38e4();
    FUN_004038cc();
  }
  else {
    FUN_00404e28((VARIANT *)&stack0xffffffac,(VARIANTARG *)PTR_DAT_00572140);
    piVar7 = (int *)FUN_00493e2c((int *)uVar12,(byte *)local_40);
    iVar13 = FUN_00403224(piVar7,(int)&PTR_FUN_0048cd88);
    local_20._0_3_ = CONCAT12(*(byte *)(iVar13 + 0x40),(ushort)local_20);
    if ((param_5 == (int *)0x0) && ((*(byte *)(iVar13 + 0x40) & 4) != 0)) {
      FUN_00403d94("Cannot change because [aCascadingDeleteDialog] is nil");
    }
    puVar2 = (undefined1 *)local_20;
    if (((uint)local_20 & 0x70000) == 0) {
      auStack_50[1] = 0x4d3ac9;
      FUN_004d3890();
      *param_8 = '\x01';
      auStack_50[1] = 0x4d3ad6;
      FUN_004d38e4();
      FUN_004038cc();
    }
    else {
      if ((DAT_00574604 < 1) &&
         (((((uint)local_20 & 0x80000) == 0 && (param_5 != (int *)0x0)) ||
          (((uint)local_20 & 0x40000) != 0)))) {
        if (param_5 == (int *)0x0) {
          local_20._0_2_ = (ushort)(byte)local_20;
        }
        else {
          auStack_50[1] = (int)&local_20 + 2;
          auStack_50[0] = &stack0xffffffac;
          uVar5 = (**(code **)(*param_5 + 0x30))(param_5,param_1,param_2);
          local_20._0_2_ = CONCAT11(uVar5,(byte)local_20);
        }
        if (((uint)local_20 & 0x10000) == 0) {
          if (((uint)local_20 & 0x20000) == 0) {
            local_20 = (int *)CONCAT13(2,(undefined3)local_20);
          }
          else {
            local_20 = (int *)CONCAT13(1,(undefined3)local_20);
          }
        }
        else {
          local_20 = (int *)((uint)local_20 & 0xffffff);
        }
      }
      else {
        local_20._0_2_ = CONCAT11(1,(byte)local_20);
        if (((uint)puVar2 & 0x20000) == 0) {
          if (((uint)puVar2 & 0x10000) == 0) {
            local_20 = (int *)CONCAT13(3,(undefined3)local_20);
            FUN_00403d94("Assertion failure");
          }
          else {
            local_20 = (int *)((uint)local_20 & 0xffffff);
          }
        }
        else {
          local_20 = (int *)CONCAT13(1,(undefined3)local_20);
        }
      }
      if (local_20._3_1_ == '\x02') {
        uVar8 = FUN_00405c08((short *)&stack0xffffffac);
        if ((char)uVar8 != '\0') {
          FUN_00403d94("Assertion failure");
        }
      }
      if (local_20._1_1_ != '\0') {
        if (local_20._3_1_ != '\0') {
          if (local_20._3_1_ == '\x01') {
            auStack_50[1] = &LAB_004d3ecb;
            auStack_50[0] = *in_FS_OFFSET;
            *in_FS_OFFSET = (uint)auStack_50;
            iVar13 = FUN_00494858((int *)uVar12);
            piVar7 = (int *)(**(code **)(*(int *)(iVar13 + 0x34) + 0x38))(*(int *)(iVar13 + 0x34),1)
            ;
            (**(code **)(*piVar6 + 0x44))();
            do {
              FUN_004d6cb4(piVar6,piVar7);
              FUN_00493be4(piVar7);
              piVar11 = (int *)FUN_00494c5c(piVar7,(byte *)local_40);
              (**(code **)(*piVar11 + 0x60))();
              local_58 = (undefined1 *)0x4d3ea9;
              FUN_004d2358(param_1,piVar7,0,2);
              local_58 = (undefined1 *)0x4d3eb1;
              cVar4 = (**(code **)(*piVar6 + 0x50))();
            } while (cVar4 != '\0');
            *in_FS_OFFSET = auStack_50[0];
            auStack_50[1] = 0x4d3eca;
            FUN_00403094(piVar7);
            return;
          }
          if (local_20._3_1_ != '\x02') {
            FUN_00459bd4(0x4d4114);
            *in_FS_OFFSET = (uint)ppcVar14;
            local_40[1] = (char *)0x4d3fa7;
            local_40[0] = &stack0xfffffffc;
            FUN_004d38e4();
            return;
          }
          auStack_50[1] = &LAB_004d3f7a;
          auStack_50[0] = *in_FS_OFFSET;
          *in_FS_OFFSET = (uint)auStack_50;
          iVar13 = FUN_00494858((int *)uVar12);
          piVar7 = (int *)(**(code **)(*(int *)(iVar13 + 0x34) + 0x38))(*(int *)(iVar13 + 0x34),1);
          (**(code **)(*piVar6 + 0x44))();
          do {
            FUN_004d6cb4(piVar6,piVar7);
            FUN_00493be4(piVar7);
            piVar11 = (int *)FUN_00494c5c(piVar7,(byte *)local_40);
            FUN_004964d0(piVar11,(undefined4 *)&stack0xffffffac);
            uVar12 = FUN_0040320c(param_1,(int)&PTR_FUN_004bcbdc);
            if ((char)uVar12 == '\0') {
              local_58 = (undefined1 *)0x4d3f58;
              FUN_004d2358(param_1,piVar7,0,0);
            }
            else {
              local_58 = (undefined1 *)0x4d3f47;
              FUN_004d2358(param_1,piVar7,0,2);
            }
            local_58 = (undefined1 *)0x4d3f60;
            cVar4 = (**(code **)(*piVar6 + 0x50))();
          } while (cVar4 != '\0');
          *in_FS_OFFSET = auStack_50[0];
          auStack_50[1] = 0x4d3f79;
          FUN_00403094(piVar7);
          return;
        }
        if (DAT_00574604 < 1) {
          if (*param_7 == '\0') {
            if (((uint)local_20 & 0x80000) == 0) {
              uVar8 = local_40;
              auStack_50[1] = 0x4d3c03;
              auStack_50[1] = FUN_00494858((int *)uVar12);
              auStack_50[0] = (undefined1 *)0x4d3c0c;
              iVar13 = FUN_00494858(param_2);
              uVar1 = auStack_50[1];
              auStack_50[1] = 0x4d3c17;
              iVar13 = FUN_004ccd48(param_6,iVar13,uVar1,(undefined4 *)uVar8);
              local_20 = (int *)CONCAT31(local_20._1_3_,iVar13 < 0);
              if (iVar13 < 0) {
                uVar8 = local_40;
                auStack_50[1] = 0x4d3c2f;
                auStack_50[1] = FUN_00494858((int *)uVar12);
                auStack_50[0] = (undefined1 *)0x4d3c38;
                uVar9 = FUN_00494858(param_2);
                uVar1 = auStack_50[1];
                auStack_50[1] = 0x4d3c43;
                FUN_004ccdd8(param_6,uVar9,uVar1,(undefined4 *)uVar8);
              }
            }
            else {
              local_20 = (int *)((uint)local_20._1_3_ << 8);
            }
          }
          else {
            local_20 = (int *)CONCAT31(local_20._1_3_,1);
          }
        }
        else {
          local_20 = (int *)((uint)local_20._1_3_ << 8);
        }
        if ((byte)local_20 != '\0') {
          if (((uint)local_20 & 0x80000) == 0) {
            (**(code **)(*piVar6 + 0x44))();
            auStack_50[1] = 0x4d3cac;
            uVar8 = (**(code **)(*piVar6 + 0x50))();
            FUN_004cd880(param_2,(int *)uVar12,uVar8,(int *)ppcVar14);
            uVar8 = FUN_004579dc(local_16c,'\0');
            if ((char)uVar8 != '\x06') {
              *param_8 = '\x01';
              *param_7 = '\0';
              auStack_50[1] = 0x4d3cdc;
              FUN_004d38e4();
              FUN_004038cc();
              goto LAB_004d3fa7;
            }
          }
          else {
            FUN_004cd7c0(param_2,(int *)&local_168);
            uVar8 = FUN_004579dc(local_168,'\0');
            if ((char)uVar8 != '\x06') {
              *param_8 = '\x01';
              *param_7 = '\0';
              auStack_50[1] = 0x4d3c8a;
              FUN_004d38e4();
              FUN_004038cc();
              goto LAB_004d3fa7;
            }
          }
          *param_7 = '\0';
        }
        cVar4 = FUN_004d3668((int *)uVar12);
        if (cVar4 == '\0') {
          auStack_50[1] = &LAB_004d3d80;
          auStack_50[0] = *in_FS_OFFSET;
          *in_FS_OFFSET = (uint)auStack_50;
          piVar6 = (int *)FUN_00494858((int *)uVar12);
          piVar6 = (int *)FUN_0049206c(piVar6);
          piVar7 = (int *)FUN_004949bc(param_2);
          FUN_00496550(piVar7,&local_17c);
          uVar8 = &local_17c;
          local_58 = (undefined1 *)0x4d3d40;
          piVar7 = (int *)FUN_00494c5c(piVar6,(byte *)local_40);
          FUN_004964d0(piVar7,(undefined4 *)uVar8);
          local_58 = (undefined1 *)0x4d3d55;
          local_180 = FUN_00494c5c(piVar6,(byte *)local_40);
          local_58 = (undefined1 *)0x4d3d6b;
          FUN_004d2c0c(param_1,&local_180,0,(int *)uVar12);
          *in_FS_OFFSET = uVar12;
          auStack_50[1] = &DAT_004d3d87;
          auStack_50[0] = &stack0xfffffffc;
          FUN_004d38e4();
          return;
        }
        auStack_50[1] = &LAB_004d3e42;
        auStack_50[0] = *in_FS_OFFSET;
        *in_FS_OFFSET = (uint)auStack_50;
        iVar13 = FUN_00494858((int *)uVar12);
        piVar7 = (int *)(**(code **)(*(int *)(iVar13 + 0x34) + 0x38))(*(int *)(iVar13 + 0x34),1);
        (**(code **)(*piVar6 + 0x44))();
        do {
          local_58 = &LAB_004d3e0e;
          local_5c = *in_FS_OFFSET;
          *in_FS_OFFSET = (uint)&local_5c;
          FUN_004d6cb4(piVar6,piVar7);
          uStack_24 = (undefined1 *)((uint)uStack_24 & 0xffffff);
          uVar10 = param_4 + 1;
          piVar11 = param_5;
          piVar15 = param_6;
          pcVar16 = param_8;
          if (SCARRY4(param_4,1)) {
            uVar10 = thunk_FUN_00402874(uVar10);
          }
          uStackY_70 = 0x4d3e04;
          FUN_004d414c(param_1,piVar7,(char *)((int)&uStack_24 + 3),uVar10,piVar11,piVar15,pcVar16);
          *in_FS_OFFSET = uVar10;
          if (*param_8 != '\0') break;
          cVar4 = (**(code **)(*piVar6 + 0x50))(piVar6,*piVar6,piVar15);
        } while (cVar4 != '\0');
        *in_FS_OFFSET = (uint)pcVar16;
        local_58 = (undefined1 *)0x4d3f8b;
        local_5c = 0x4d3e41;
        FUN_00403094(piVar7);
        return;
      }
      *param_8 = '\x01';
      auStack_50[1] = 0x4d3baf;
      FUN_004d38e4();
      FUN_004038cc();
    }
  }
LAB_004d3fa7:
  *in_FS_OFFSET = (uint)local_40[2];
  local_40[4] = &LAB_004d3fec;
  local_40[3] = (char *)0x4d3fbf;
  FUN_00405bcc(&local_17c);
  local_40[3] = (char *)0x4d3fcf;
  FUN_00403dd4((int *)&local_16c,4);
  local_40[3] = (char *)0x4d3fdc;
  FUN_00403dd4((int *)&local_5c,2);
  local_40[3] = (char *)0x4d3fe4;
  FUN_00405bcc((VARIANTARG *)&stack0xffffffac);
  return;
}

