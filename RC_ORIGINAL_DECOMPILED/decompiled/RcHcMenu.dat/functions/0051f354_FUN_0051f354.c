/*
 * FUN_0051f354 at 0051f354
 * undefined __register FUN_0051f354(int * param_1, undefined1 param_2, int param_3, int param_4)
 * Address ranges: 0051f354-0051f934
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051f354(int *param_1,undefined1 param_2,int param_3,int param_4)

{
  char cVar1;
  POINT pt;
  POINT pt_00;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  BOOL BVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar7;
  undefined4 extraout_EDX;
  LONG *pLVar8;
  RECT *pRVar9;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar10;
  byte bVar11;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_44;
  int local_40;
  RECT local_3c;
  int local_2c;
  uint *local_28;
  int local_24;
  uint local_20;
  LONG local_1c;
  LONG local_18;
  char local_12;
  char local_11;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  bVar11 = 0;
  puStack_54 = &stack0xfffffffc;
  local_28 = (uint *)0x0;
  puStack_58 = &LAB_0051f935;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  cVar1 = (char)param_1[0x94];
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  if (cVar1 == '\0') {
    FUN_0041160c(param_3,param_4,&local_1c);
    local_24 = 0;
    local_12 = '\0';
    local_11 = '\0';
    uVar3 = FUN_0051e5f0((int)local_8);
    uVar4 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (-1 < (int)uVar4) {
      local_2c = uVar4 + 1;
      local_20 = 0;
      do {
        local_24 = FUN_0051e404(local_8,local_20);
        if (*(char *)(local_24 + 6) != '\0') {
          pLVar8 = (LONG *)(local_24 + 0x14);
          pRVar9 = &local_3c;
          for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            pRVar9->left = *pLVar8;
            pLVar8 = pLVar8 + (uint)bVar11 * -2 + 1;
            pRVar9 = (RECT *)((int)pRVar9 + ((uint)bVar11 * -2 + 1) * 4);
          }
          uVar3 = local_3c.right - 3;
          if (SBORROW4(local_3c.right,3)) {
            uVar3 = thunk_FUN_00402874(uVar3);
          }
          if ((int)uVar3 < local_10) {
            uVar3 = local_3c.right + 3;
            if (SCARRY4(local_3c.right,3)) {
              uVar3 = thunk_FUN_00402874(uVar3);
            }
            if (local_10 < (int)uVar3) {
              local_12 = '\x01';
              break;
            }
          }
        }
        local_20 = local_20 + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
    if (local_12 == '\0') {
      uVar3 = FUN_0051e5f0((int)local_8);
      uVar4 = uVar3 - 1;
      if (SBORROW4(uVar3,1)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if (-1 < (int)uVar4) {
        local_2c = uVar4 + 1;
        local_20 = 0;
        do {
          local_24 = FUN_0051e404(local_8,local_20);
          if (((*(char *)(local_24 + 5) != '\0') && (*(char *)(local_24 + 8) == '\0')) ||
             (*(char *)(local_24 + 7) != '\0')) {
            pLVar8 = (LONG *)(local_24 + 0x14);
            pRVar9 = &local_3c;
            for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
              pRVar9->left = *pLVar8;
              pLVar8 = pLVar8 + (uint)bVar11 * -2 + 1;
              pRVar9 = (RECT *)((int)pRVar9 + ((uint)bVar11 * -2 + 1) * 4);
            }
            pt.y = local_18;
            pt.x = local_1c;
            BVar6 = PtInRect(&local_3c,pt);
            if (BVar6 != 0) {
              local_11 = '\x01';
              break;
            }
          }
          local_20 = local_20 + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
    }
    FUN_00403e48((int *)&local_28,local_8[0x1c]);
    FUN_00403db0(local_8 + 0x1c);
    if (local_12 == '\0') {
      if (local_11 == '\0') {
        local_8[0x90] = 0;
        local_8[0x85] = 0;
        uVar3 = FUN_0051e5f0((int)local_8);
        uVar4 = uVar3 - 1;
        if (SBORROW4(uVar3,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        if (-1 < (int)uVar4) {
          local_2c = uVar4 + 1;
          local_20 = 0;
          do {
            local_24 = FUN_0051e404(local_8,local_20);
            pLVar8 = (LONG *)(local_24 + 0x14);
            pRVar9 = &local_3c;
            for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
              pRVar9->left = *pLVar8;
              pLVar8 = pLVar8 + (uint)bVar11 * -2 + 1;
              pRVar9 = (RECT *)((int)pRVar9 + ((uint)bVar11 * -2 + 1) * 4);
            }
            if ((local_3c.left < local_10) && (local_10 < local_3c.right)) {
              FUN_00403e04(local_8 + 0x1c,*(undefined4 **)(local_24 + 0x38));
              break;
            }
            local_20 = local_20 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
        FUN_00432904((int)local_8,0);
      }
      else {
        local_8[0x90] = 0;
        local_8[0x85] = local_24;
        if ((*(char *)(local_24 + 5) == '\0') || (*(char *)(local_24 + 8) != '\0')) {
          FUN_00403e04(local_8 + 0x1c,*(undefined4 **)(local_24 + 0x38));
          FUN_00432904((int)local_8,0);
        }
        else {
          FUN_00403e04(local_8 + 0x1c,*(undefined4 **)(local_24 + 0x38));
          FUN_00432904((int)local_8,0x2a);
        }
      }
    }
    else {
      local_8[0x90] = local_24;
      local_8[0x85] = 0;
      FUN_00432904((int)local_8,-0xe);
    }
    if ((char)local_8[0x9c] != '\0') {
      uVar10 = local_8[0x1c] == 0;
      FUN_00432858((int)local_8,!(bool)uVar10);
      FUN_00404140((uint *)local_8[0x1c],local_28);
      if ((!(bool)uVar10) && (*(char *)((int)local_8 + 0x89) != '\0')) {
        uVar3 = local_3c.left + 4;
        if (SCARRY4(local_3c.left,4)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        local_8[0x9a] = uVar3;
        uVar3 = local_3c.top - 0x12;
        if (SBORROW4(local_3c.top,0x12)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        local_8[0x9b] = uVar3;
        FUN_0043228c(local_8,local_8 + 0x9a,&local_44);
        local_8[0x9a] = local_44;
        local_8[0x9b] = local_40;
      }
    }
    goto LAB_0051f90d;
  }
  if (cVar1 == '\x01') {
    puStack_54 = &stack0xfffffffc;
    if (param_3 < 0) {
      puStack_54 = &stack0xfffffffc;
      iVar5 = FUN_0051e1b8(param_1);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x27c) + 0x20c);
      uVar3 = iVar5 - 1;
      if (SBORROW4(iVar5,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      iVar5 = FUN_0051e1b8(local_8);
      FUN_0051e704(*(int **)(iVar5 + 0x27c),uVar3);
    }
    iVar5 = FUN_00432178(local_8);
    if (iVar5 < local_10) {
      iVar5 = FUN_0051e1b8(local_8);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x27c) + 0x20c);
      uVar3 = iVar5 + 1;
      if (SCARRY4(iVar5,1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      iVar5 = FUN_0051e1b8(local_8);
      FUN_0051e704(*(int **)(iVar5 + 0x27c),uVar3);
    }
    FUN_0041160c(local_10,param_4,&local_44);
    piVar2 = &local_44;
    iVar5 = FUN_0051e1b8(local_8);
    FUN_00521134(iVar5,piVar2);
    (**(code **)(*local_8 + 0x80))();
    goto LAB_0051f90d;
  }
  if (cVar1 == '\x02') {
    puStack_54 = &stack0xfffffffc;
    piVar2 = (int *)FUN_0051e1b8(param_1);
    FUN_00520fc8(piVar2,local_8[0x92],extraout_ECX);
    local_8[0x92] = local_10;
    uVar3 = local_8[0x91] + 2;
    if (SCARRY4(local_8[0x91],2)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (local_8[0x92] < (int)uVar3) {
      uVar3 = local_8[0x91] + 2;
      if (SCARRY4(local_8[0x91],2)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      local_8[0x92] = uVar3;
    }
    piVar2 = (int *)FUN_0051e1b8(local_8);
    FUN_00520fc8(piVar2,local_8[0x92],extraout_ECX_00);
    goto LAB_0051f90d;
  }
  puStack_54 = &stack0xfffffffc;
  if (cVar1 != '\x03') goto LAB_0051f90d;
  puStack_54 = &stack0xfffffffc;
  if ((*(char *)(param_1[0x85] + 5) == '\0') ||
     (puStack_54 = &stack0xfffffffc, *(char *)(param_1[0x85] + 8) != '\0')) {
LAB_0051f8b0:
    FUN_0041160c(local_10,param_4,&local_44);
    pt_00.y = local_40;
    pt_00.x = local_44;
    BVar6 = PtInRect((RECT *)(local_8[0x85] + 0x14),pt_00);
    if (BVar6 == 0) {
      *(undefined1 *)(local_8[0x85] + 0x25) = 0;
      *(undefined1 *)(local_8 + 0x94) = 0;
      FUN_0051f14c(local_8,local_8[0x85]);
      local_8[0x85] = 0;
    }
  }
  else {
    uVar3 = param_1[0x86] - param_3;
    puStack_54 = &stack0xfffffffc;
    if (SBORROW4(param_1[0x86],param_3)) {
      puStack_54 = &stack0xfffffffc;
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar7 = (int)uVar3 >> 0x1f;
    uVar4 = (uVar3 ^ uVar7) - uVar7;
    if (SBORROW4(uVar3 ^ uVar7,uVar7)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if ((int)uVar4 < 6) {
      uVar3 = local_8[0x87] - param_4;
      if (SBORROW4(local_8[0x87],param_4)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      uVar7 = (int)uVar3 >> 0x1f;
      uVar4 = (uVar3 ^ uVar7) - uVar7;
      if (SBORROW4(uVar3 ^ uVar7,uVar7)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if ((int)uVar4 < 6) goto LAB_0051f8b0;
    }
    *(undefined1 *)(local_8 + 0x94) = 1;
    *(undefined1 *)(local_8[0x85] + 0x25) = 2;
    FUN_0051f14c(local_8,local_8[0x85]);
    FUN_0041160c(local_10,param_4,&local_44);
    piVar2 = &local_44;
    iVar5 = FUN_0051e1b8(local_8);
    FUN_00521134(iVar5,piVar2);
    FUN_0051d91c((int *)local_8[0x80],local_8[0xf]);
    FUN_0051d6ac((int *)local_8[0x82],local_8[0x85]);
    FUN_0043262c((int *)local_8[0x82],CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_01);
  }
LAB_0051f90d:
  FUN_00433d10((int)local_8,local_9,local_10,param_4);
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_0051f93c;
  puStack_58 = (undefined1 *)0x51f934;
  FUN_00403db0((int *)&local_28);
  return;
}

