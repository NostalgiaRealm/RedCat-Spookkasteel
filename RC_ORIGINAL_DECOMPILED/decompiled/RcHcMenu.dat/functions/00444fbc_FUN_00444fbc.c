/*
 * FUN_00444fbc at 00444fbc
 * undefined __register FUN_00444fbc(undefined4 * param_1, UINT * param_2)
 * Address ranges: 00444fbc-00445301;00445326-0044541c;00445466-004454e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x440744 slot 4 for TPopupList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x440744 slot 4 for
   TPopupList. Original bytes unchanged; names and types still inferred. */

void FUN_00444fbc(undefined4 *param_1,UINT *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ULONG_PTR UVar5;
  UINT UVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  uint *local_34;
  int *local_30;
  UINT local_2c;
  UINT local_28;
  UINT local_24;
  HDC local_20;
  int local_1c;
  int *local_18;
  char local_11;
  int *local_10;
  HMENU local_c;
  undefined4 *local_8;
  
  puStack_44 = &stack0xfffffffc;
  local_34 = (uint *)0x0;
  puStack_48 = &LAB_004454e9;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  UVar6 = *param_2;
  local_8 = param_1;
  if ((int)UVar6 < 0x112) {
    if (UVar6 == 0x111) {
      iVar7 = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar7 + -1) {
        iVar8 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_00412384(local_8,iVar8);
          bVar1 = FUN_00444400(iVar4);
          if (bVar1) goto LAB_004454d3;
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if (UVar6 == 0x2b) {
      local_28 = param_2[2];
      iVar7 = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar7 + -1) {
        iVar8 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_00412384(local_8,iVar8);
          local_10 = (int *)FUN_00444360(iVar4);
          if (local_10 != (int *)0x0) {
            local_18 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX);
            *in_FS_OFFSET = &stack0xffffffa8;
            local_1c = SaveDC(*(HDC *)(local_28 + 0x18));
            uVar2 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff9c;
            FUN_0041cfec(local_18,*(int *)(local_28 + 0x18));
            FUN_0041ce68((int)local_18);
            FUN_004457ac(local_10,(int)local_18,(undefined4 *)(local_28 + 0x1c),
                         CONCAT22((short)(local_28 >> 0x10),*(undefined2 *)(local_28 + 0x10)));
            *in_FS_OFFSET = uVar2;
            FUN_0041cfec(local_18,0);
            RestoreDC(*(HDC *)(local_28 + 0x18),local_1c);
            return;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
          local_10 = (int *)0x0;
        } while (iVar7 != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x2c) {
      local_2c = param_2[2];
      iVar7 = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar7 + -1) {
        iVar8 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          iVar4 = FUN_00412384(local_8,iVar8);
          local_10 = (int *)FUN_00444360(iVar4);
          if (local_10 != (int *)0x0) {
            local_20 = GetWindowDC((HWND)local_8[4]);
            *in_FS_OFFSET = &stack0xffffffa8;
            local_18 = FUN_0041c468((int *)&PTR_FUN_0042dc98,'\x01',extraout_ECX_00);
            *in_FS_OFFSET = &stack0xffffff9c;
            local_1c = SaveDC(local_20);
            *in_FS_OFFSET = &stack0xffffff90;
            FUN_0041cfec(local_18,(int)local_20);
            FUN_0041ce68((int)local_18);
            piVar3 = (int *)(local_2c + 0x10);
            FUN_00442c40(local_10,local_18,(int *)(local_2c + 0xc),piVar3);
            *in_FS_OFFSET = piVar3;
            FUN_0041cfec(local_18,0);
            RestoreDC(local_20,local_1c);
            return;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
          local_10 = (int *)0x0;
        } while (iVar7 != 0);
        local_10 = (int *)0x0;
      }
    }
    else if (UVar6 == 0x53) {
      local_24 = param_2[2];
      iVar7 = param_1[2];
      puStack_44 = &stack0xfffffffc;
      if (-1 < iVar7 + -1) {
        iVar8 = 0;
        puStack_44 = &stack0xfffffffc;
        do {
          piVar3 = (int *)FUN_00412384(local_8,iVar8);
          iVar4 = (**(code **)(*piVar3 + 0x34))();
          if (iVar4 == *(int *)(local_24 + 0xc)) {
            iVar4 = FUN_00412384(local_8,iVar8);
            local_10 = *(int **)(iVar4 + 0x28);
          }
          else {
            iVar4 = FUN_00412384(local_8,iVar8);
            local_10 = (int *)FUN_00444360(iVar4);
          }
          if (local_10 != (int *)0x0) {
            piVar3 = (int *)FUN_00412384(local_8,iVar8);
            UVar5 = FUN_00444390(piVar3,*(int *)(local_24 + 8),'\x01');
            if (UVar5 == 0) {
              piVar3 = (int *)FUN_00412384(local_8,iVar8);
              UVar5 = FUN_00444390(piVar3,*(int *)(local_24 + 0xc),'\0');
            }
            iVar7 = *(int *)(*(int *)PTR_DAT_005725f0 + 0x60);
            if (iVar7 != 0) {
              if (UVar5 == 0) {
                UVar5 = *(ULONG_PTR *)(iVar7 + 0x150);
              }
              if ((*(byte *)(iVar7 + 0x210) & 8) == 0) {
                FUN_00451840(*(int *)PTR_DAT_005723fc,UVar5);
              }
              else {
                FUN_0045184c(*(int *)PTR_DAT_005723fc,8,UVar5);
              }
            }
            goto LAB_004454d3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  else if (UVar6 == 0x117) {
    iVar7 = param_1[2];
    puStack_44 = &stack0xfffffffc;
    if (-1 < iVar7 + -1) {
      iVar8 = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        piVar3 = (int *)FUN_00412384(local_8,iVar8);
        uVar2 = FUN_0044441c(piVar3);
        if ((char)uVar2 != '\0') goto LAB_004454d3;
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (UVar6 == 0x11f) {
    local_11 = (*(byte *)((int)param_2 + 6) & 0x10) != 0;
    iVar7 = param_1[2];
    puStack_44 = &stack0xfffffffc;
    if (-1 < iVar7 + -1) {
      iVar8 = 0;
      puStack_44 = &stack0xfffffffc;
      piVar3 = local_10;
      do {
        local_10 = piVar3;
        if (local_11 == '\x01') {
          if ((HMENU)param_2[2] == (HMENU)0x0) {
            local_c = (HMENU)0xffffffff;
          }
          else {
            local_c = GetSubMenu((HMENU)param_2[2],(uint)(ushort)param_2[1]);
          }
        }
        else {
          local_c = (HMENU)(uint)(ushort)param_2[1];
        }
        iVar4 = FUN_00412384(local_8,iVar8);
        local_10 = (int *)FUN_00444360(iVar4);
        if (local_10 != (int *)0x0) {
          FUN_0042fb70(*(undefined4 **)((int)local_10 + 0x4c),(int *)&local_34);
          FUN_00451b2c(*(int **)PTR_DAT_005723fc,local_34);
          goto LAB_004454d3;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
        piVar3 = (int *)0;
      } while (iVar7 != 0);
    }
    FUN_00451b2c(*(int **)PTR_DAT_005723fc,(uint *)0x0);
  }
  else {
    puStack_44 = &stack0xfffffffc;
    if ((UVar6 == 0x120) && (iVar7 = param_1[2], puStack_44 = &stack0xfffffffc, -1 < iVar7 + -1)) {
      iVar8 = 0;
      puStack_44 = &stack0xfffffffc;
      do {
        local_30 = (int *)FUN_00412384(local_8,iVar8);
        UVar6 = (**(code **)(*local_30 + 0x34))();
        if ((UVar6 == param_2[2]) || (iVar4 = FUN_00444360((int)local_30), iVar4 != 0)) {
          FUN_00444bac(local_30,(int)param_2);
          goto LAB_004454d3;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  UVar6 = DefWindowProcA((HWND)local_8[4],*param_2,param_2[1],param_2[2]);
  param_2[3] = UVar6;
LAB_004454d3:
  *in_FS_OFFSET = uStack_4c;
  puStack_44 = &LAB_004454f0;
  puStack_48 = (undefined1 *)0x4454e8;
  FUN_00403db0((int *)&local_34);
  return;
}

