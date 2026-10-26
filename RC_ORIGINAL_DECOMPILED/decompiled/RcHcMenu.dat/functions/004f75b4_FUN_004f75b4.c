/*
 * FUN_004f75b4 at 004f75b4
 * byte * __register FUN_004f75b4(byte * param_1, int param_2)
 * Address ranges: 004f75b4-004f7749;004f7751-004f787b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_004f75b4(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  DWORD DVar5;
  LPPOINT lpPoint;
  HWND pHVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  UINT Msg;
  WPARAM wParam;
  tagPOINT *ptVar10;
  undefined4 local_3d [8];
  int local_1d;
  tagPOINT local_19;
  uint local_11;
  WPARAM local_d;
  char local_9;
  byte *local_8;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(iVar1 + 8);
  local_8 = param_1;
  if (iVar4 < -0x12d) {
    if (iVar4 == -0x12e) {
      uVar8 = FUN_004f6c58(*(int *)(param_1 + 0x1f0),*(int *)(iVar1 + 0xc));
      pbVar3 = (byte *)FUN_00403270((int *)local_8,uVar8,extraout_ECX);
    }
    else if (iVar4 == -0x137) {
      *(undefined4 *)(param_2 + 0xc) = 0;
      DVar5 = GetMessagePos();
      local_19.x = DVar5 & 0xffff;
      ptVar10 = &local_19;
      pHVar6 = (HWND)FUN_00438988((int *)local_8);
      ScreenToClient(pHVar6,ptVar10);
      uVar7 = FUN_004321bc((int *)local_8);
      local_19.y = (int)uVar7 >> 1;
      if (local_19.y < 0) {
        local_19.y = local_19.y + (uint)((uVar7 & 1) != 0);
      }
      ptVar10 = &local_19;
      wParam = 0;
      Msg = 0x1206;
      pHVar6 = (HWND)FUN_00438988((int *)local_8);
      SendMessageA(pHVar6,Msg,wParam,(LPARAM)ptVar10);
      local_3d[0] = 0x80;
      if ((int)local_d < 0) {
        if ((local_11 & 0x800) == 0) {
          if (((local_11 & 0x400) != 0) || ((local_11 & 1) != 0)) {
            iVar4 = FUN_0041300c(*(int *)(local_8 + 0x1f0));
            *(int *)(local_8 + 0x204) = iVar4 + -1;
          }
        }
        else {
          local_8[0x204] = 0;
          local_8[0x205] = 0;
          local_8[0x206] = 0;
          local_8[0x207] = 0;
        }
      }
      else {
        pHVar6 = (HWND)FUN_00438988((int *)local_8);
        FUN_004238f8(pHVar6,local_d,(LPARAM)local_3d);
        *(int *)(local_8 + 0x204) = local_1d;
      }
      pHVar6 = (HWND)FUN_00438988((int *)local_8);
      FUN_004238f8(pHVar6,*(WPARAM *)(iVar1 + 0xc),(LPARAM)local_3d);
      *(int *)(local_8 + 0x200) = local_1d;
      uVar8 = FUN_004f6c58(*(int *)(local_8 + 0x1f0),*(int *)(local_8 + 0x204));
      uVar9 = FUN_004f6c58(*(int *)(local_8 + 0x1f0),local_1d);
      pbVar3 = (byte *)FUN_004f7b78((int *)local_8,uVar9,uVar8);
      local_8[0x1f9] = (byte)pbVar3;
    }
    else {
      pbVar3 = (byte *)(iVar4 + 0x131);
      if (iVar4 + 0x134U < 3) {
        iVar4 = FUN_004f6c58(*(int *)(param_1 + 0x1f0),*(int *)(iVar1 + 0xc));
        if (*(int *)(iVar1 + 8) == -0x133) {
          local_9 = '\x02';
        }
        else if (*(int *)(iVar1 + 8) == -0x132) {
          local_9 = '\0';
        }
        else {
          local_9 = '\x01';
        }
        *in_FS_OFFSET = &stack0xffffffac;
        if (local_9 != '\x02') {
          *(int *)(local_8 + 0x218) = iVar4;
          *(undefined4 *)(local_8 + 0x21c) = *(undefined4 *)(iVar4 + 0x10);
          DVar5 = GetMessagePos();
          *(DWORD *)(local_8 + 0x220) = DVar5 & 0xffff;
          *(DWORD *)(local_8 + 0x224) = DVar5 >> 0x10;
          lpPoint = (LPPOINT)(local_8 + 0x220);
          pHVar6 = (HWND)FUN_00438988((int *)local_8);
          ScreenToClient(pHVar6,lpPoint);
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (*(int *)(iVar1 + 4) < *(int *)(iVar4 + 0x14)) {
          *(int *)(iVar1 + 4) = *(int *)(iVar4 + 0x14);
        }
        iVar2 = *(int *)(iVar4 + 0x18);
        if (iVar2 < *(int *)(iVar1 + 4)) {
          *(int *)(iVar1 + 4) = iVar2;
        }
        uVar8 = CONCAT31((int3)((uint)iVar2 >> 8),local_9);
        FUN_00403270((int *)local_8,iVar4,*(undefined4 *)(iVar1 + 4));
        *in_FS_OFFSET = uVar8;
        pbVar3 = (byte *)0x0;
        if (local_9 == '\x02') {
          local_8[0x218] = 0;
          local_8[0x219] = 0;
          local_8[0x21a] = 0;
          local_8[0x21b] = 0;
          pbVar3 = local_8;
        }
        return pbVar3;
      }
    }
  }
  else if (iVar4 == -0x12d) {
    pbVar3 = *(byte **)(iVar1 + 0x14);
    if ((*pbVar3 & 1) != 0) {
      iVar4 = FUN_004f6c58(*(int *)(param_1 + 0x1f0),*(int *)(iVar1 + 0xc));
      pbVar3 = *(byte **)(*(int *)(iVar1 + 0x14) + 4);
      if (pbVar3 != *(byte **)(iVar4 + 0x10)) {
        *(byte **)(iVar4 + 0x10) = pbVar3;
        pbVar3 = (byte *)FUN_00403270((int *)local_8,iVar4,extraout_ECX_00);
      }
    }
  }
  else {
    pbVar3 = (byte *)(iVar4 + 0x10);
    if ((pbVar3 == (byte *)0x0) && (pbVar3 = param_1, param_1[0x1f9] != 0)) {
      pbVar3 = (byte *)FUN_004f7ddc((int *)param_1);
    }
  }
  return pbVar3;
}

