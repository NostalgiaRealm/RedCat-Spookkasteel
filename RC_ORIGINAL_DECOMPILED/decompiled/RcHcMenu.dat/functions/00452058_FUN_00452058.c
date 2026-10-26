/*
 * FUN_00452058 at 00452058
 * undefined __register FUN_00452058(int param_1, int * param_2)
 * Address ranges: 00452058-004523ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00452058(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  DWORD extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  LONG *pLVar7;
  tagRECT *ptVar8;
  undefined4 *in_FS_OFFSET;
  byte bVar9;
  undefined4 uStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  LONG local_84 [4];
  tagRECT local_74;
  undefined4 local_64;
  undefined *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  tagRECT local_4c;
  int local_3c;
  undefined4 local_38;
  UINT local_34;
  UINT local_30;
  undefined *local_2c;
  undefined4 local_28;
  bool local_21;
  tagPOINT local_20;
  int local_18;
  int local_14;
  POINT local_10;
  int local_8;
  
  bVar9 = 0;
  local_90 = 0;
  local_94 = (undefined4 *)0x0;
  local_10.x = *param_2;
  local_10.y = param_2[1];
  puStack_a4 = (undefined1 *)0x45208a;
  local_8 = param_1;
  FUN_00404780((int)&local_64,(int)&DAT_00447f60);
  puStack_a8 = &LAB_004523f0;
  uStack_ac = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_ac;
  *(undefined1 *)(local_8 + 0x48) = 0;
  puStack_a4 = &stack0xfffffffc;
  if ((*(char *)(local_8 + 0x78) != '\0') &&
     (puStack_a4 = &stack0xfffffffc, *(int *)(local_8 + 0x50) != 0)) {
    puStack_a4 = &stack0xfffffffc;
    cVar1 = FUN_004483e0();
    if (cVar1 != '\0') {
      piVar3 = FUN_00431178(&local_10,CONCAT31((int3)((uint)extraout_EDX >> 8),1));
      iVar4 = thunk_FUN_0044fca1((int)piVar3);
      if (iVar4 == *(int *)(local_8 + 0x50)) {
        local_64 = *(undefined4 *)(local_8 + 0x50);
        local_5c = local_10.x;
        local_58 = local_10.y;
        iVar4 = FUN_00451eb0();
        local_58 = local_58 + iVar4;
        local_54 = FUN_0044f0c0();
        local_50 = *(int *)(local_8 + 0x4c);
        FUN_0043211c(*(int *)(local_8 + 0x50),local_84);
        pLVar7 = local_84;
        ptVar8 = &local_4c;
        for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          ptVar8->left = *pLVar7;
          pLVar7 = pLVar7 + (uint)bVar9 * -2 + 1;
          ptVar8 = (tagRECT *)((int)ptVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        (**(code **)(**(int **)(local_8 + 0x50) + 0x3c))(*(int **)(local_8 + 0x50),&local_18);
        local_20.x = 0;
        local_20.y = 0;
        piVar3 = *(int **)(*(int *)(local_8 + 0x50) + 0x24);
        if (piVar3 == (int *)0x0) {
          piVar3 = *(int **)(local_8 + 0x50);
          uVar6 = FUN_0040320c(piVar3,(int)&PTR_FUN_0042ebec);
          if (((char)uVar6 != '\0') && (piVar3[0x59] != 0)) {
            ClientToScreen((HWND)piVar3[0x59],&local_20);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x3c))(piVar3,&local_20);
        }
        OffsetRect(&local_4c,local_20.x - local_18,local_20.y - local_14);
        FUN_004322b8(*(int **)(local_8 + 0x50),&local_10.x,&local_8c);
        local_3c = local_8c;
        local_38 = local_88;
        FUN_0044fc6c(*(int *)(local_8 + 0x50),(int *)&local_94);
        FUN_0042fb2c(local_94,&local_90);
        FUN_00403e48((int *)&local_2c,local_90);
        local_34 = 0;
        local_30 = *(UINT *)(local_8 + 100);
        local_60 = PTR_PTR_0056f9d0;
        local_28 = 0;
        iVar4 = FUN_00433700(*(int *)(local_8 + 0x50),0xb030,0,&local_64);
        local_21 = iVar4 == 0;
        uVar6 = extraout_ECX;
        if ((iVar4 == 0) && (*(short *)(local_8 + 0x10a) != 0)) {
          (**(code **)(local_8 + 0x108))
                    (*(undefined4 *)(local_8 + 0x10c),&local_2c,&local_21,&local_64);
          uVar6 = extraout_ECX_00;
        }
        if ((local_21 == false) || (*(int *)(local_8 + 0x50) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
        *(undefined1 *)(local_8 + 0x48) = uVar2;
        if ((*(char *)(local_8 + 0x48) != '\0') && (local_2c != (undefined *)0x0)) {
          FUN_00452004(local_60,local_8,uVar6,(int)&stack0xfffffffc);
          (**(code **)(**(int **)(local_8 + 0x74) + 0x68))
                    (*(int **)(local_8 + 0x74),*(undefined1 *)(*(int *)(local_8 + 0x50) + 0x4f));
          (**(code **)(**(int **)(local_8 + 0x74) + 0xc0))
                    (*(int **)(local_8 + 0x74),local_54,local_2c,&local_74,local_28);
          OffsetRect(&local_74,local_5c,local_58);
          cVar1 = FUN_00403270(*(int **)(local_8 + 0x74),extraout_EDX_00,extraout_ECX_01);
          if (cVar1 != '\0') {
            LVar5 = FUN_0041cda8(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            local_74.left = local_74.left - (LVar5 + 5);
            LVar5 = FUN_0041cda8(*(int **)(*(int *)(local_8 + 0x74) + 0x1f0),local_2c);
            local_74.right = local_74.right - (LVar5 + 5);
          }
          FUN_0043228c(*(int **)(local_8 + 0x50),&local_4c.left,&local_8c);
          *(int *)(local_8 + 0x54) = local_8c;
          *(undefined4 *)(local_8 + 0x58) = local_88;
          FUN_0043228c(*(int **)(local_8 + 0x50),&local_4c.right,&local_8c);
          *(int *)(local_8 + 0x5c) = local_8c;
          *(undefined4 *)(local_8 + 0x60) = local_88;
          FUN_004328a0(*(int *)(local_8 + 0x74),local_50);
          uVar6 = (**(code **)(**(int **)(local_8 + 0x74) + 0xbc))
                            (*(int **)(local_8 + 0x74),&local_74,local_2c,local_28);
          FUN_0044fdb0(uVar6,extraout_EDX_01,extraout_ECX_02);
          if ((int)local_34 < 1) {
            FUN_00451ca4(local_8,local_30,1);
          }
          else {
            FUN_00451ca4(local_8,local_34,0);
          }
          goto LAB_004523c4;
        }
      }
    }
  }
  if ((int)local_34 < 1) {
    FUN_00451e78(local_8);
  }
  else {
    FUN_00451ca4(local_8,local_34,0);
  }
LAB_004523c4:
  *in_FS_OFFSET = uStack_ac;
  puStack_a4 = &LAB_004523f7;
  puStack_a8 = (undefined1 *)0x4523e1;
  FUN_00403dd4((int *)&local_94,2);
  puStack_a8 = (undefined1 *)0x4523ef;
  FUN_0040484c((int)&local_64,(int)&DAT_00447f60);
  return;
}

