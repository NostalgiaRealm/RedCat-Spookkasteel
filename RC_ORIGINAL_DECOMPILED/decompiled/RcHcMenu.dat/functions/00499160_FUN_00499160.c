/*
 * FUN_00499160 at 00499160
 * undefined __register FUN_00499160(int * param_1, int param_2, int param_3, char param_4, char param_5, undefined4 * param_6, int * param_7, undefined * param_8)
 * Address ranges: 00499160-004997af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00499160(int *param_1,int param_2,int param_3,char param_4,char param_5,undefined4 *param_6
                 ,int *param_7,undefined *param_8)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  HDC pHVar4;
  HBITMAP pHVar5;
  HGDIOBJ pvVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  undefined **ppuVar11;
  undefined4 in_stack_ffffff98;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  byte *local_48;
  byte *local_44;
  undefined *local_40;
  undefined1 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  char local_15;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  bVar10 = 0;
  puStack_58 = &stack0xfffffffc;
  local_48 = (byte *)0x0;
  local_44 = (byte *)0x0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  local_2c = (undefined4 *)0x0;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  puStack_5c = &LAB_004997b0;
  puStack_60 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_60;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004990a4(param_1,-1,param_3);
  if ((int)param_8 < 0x11) {
    if (param_8 == (undefined *)0x10) {
      if ((((*param_7 != 0x7c00) || (param_7[1] != 0x3e0)) || (param_7[2] != 0x1f)) &&
         (((*param_7 != 0xf800 || (param_7[1] != 0x7e0)) || (param_7[2] != 0x1f)))) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_30);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_30);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
    if (param_8 == (undefined *)0x1) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_24);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_24);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
    if (param_8 == (undefined *)0x4) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_28);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_28);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
    if (param_8 == (undefined *)0x8) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_2c);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_2c);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
  }
  else {
    if (param_8 == (undefined *)0x18) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_34);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_34);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
    if (param_8 == (undefined *)0x20) {
      if (((*param_7 != 0xff0000) || (param_7[1] != 0xff00)) || (param_7[2] != 0xff)) {
        FUN_00406a48((undefined4 *)PTR_LAB_00572168,(int *)&local_38);
        piVar2 = FUN_0040ceec((int *)&DAT_0041a0c8,'\x01',local_38);
        FUN_0040382c(piVar2);
      }
      goto LAB_004993f6;
    }
  }
  local_40 = param_8;
  local_3c = 0;
  ppuVar11 = &local_40;
  in_stack_ffffff98 = 0;
  FUN_00406a48((undefined4 *)PTR_PTR_00572164,(int *)&local_44);
  uVar3 = FUN_0040cf28((int)&DAT_0041a0c8,'\x01',local_44,in_stack_ffffff98,ppuVar11);
  FUN_0040382c(uVar3);
LAB_004993f6:
  local_8[2] = (int)param_8;
  local_8[0x10a] = local_10;
  local_8[0x11f] = local_c;
  local_8[0x120] = (local_c * (int)param_8 + 0x1fU >> 5) << 2;
  local_8[0x10c] = -local_8[0x120];
  local_8[0x11d] = local_8[0x120] * local_8[0x10a];
  if ((param_8 == (undefined *)0x10) || (param_8 == (undefined *)0x20)) {
    local_15 = '\x01';
  }
  else {
    local_15 = '\0';
  }
  piVar2 = param_7;
  piVar8 = local_8 + 0x111;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar8 = *piVar2;
    piVar2 = piVar2 + (uint)bVar10 * -2 + 1;
    piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
  }
  local_8[0x10f] = 0;
  if (local_8[2] < 9) {
    local_8[0x10f] = 1 << ((byte)local_8[2] & 0x1f);
  }
  local_8[4] = 0x28;
  if (local_15 != '\0') {
    local_8[4] = local_8[4] + 0xc;
  }
  local_8[4] = local_8[4] + local_8[0x10f] * 4;
  iVar7 = FUN_004027e8(local_8[4]);
  local_8[3] = iVar7;
  FUN_00402cfc((undefined4 *)local_8[3],local_8[4],0);
  local_1c = (undefined4 *)local_8[3];
  *local_1c = 0x28;
  local_1c[1] = local_8[0x11f];
  local_1c[2] = local_8[0x10a];
  *(undefined2 *)(local_1c + 3) = 1;
  *(short *)((int)local_1c + 0xe) = (short)local_8[2];
  if (local_15 == '\0') {
    if ((local_8[2] == 4) && (param_4 != '\0')) {
      local_1c[4] = 2;
    }
    else if ((local_8[2] == 8) && (param_4 != '\0')) {
      local_1c[4] = 1;
    }
    else {
      local_1c[4] = 0;
    }
  }
  else {
    local_1c[4] = 3;
  }
  local_1c[5] = local_8[0x11d];
  local_1c[6] = 0;
  local_1c[7] = 0;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_14 = 0x28;
  if (local_15 != '\0') {
    iVar7 = local_8[3];
    local_20 = (int *)(iVar7 + 0x28);
    *local_20 = *param_7;
    *(int *)(iVar7 + 0x2c) = param_7[1];
    *(int *)(iVar7 + 0x30) = param_7[2];
    local_14 = 0x34;
  }
  local_8[0x106] = local_14;
  puVar9 = (undefined4 *)((int)local_8 + 0x15);
  for (iVar7 = 0x100; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *param_6;
    param_6 = param_6 + (uint)bVar10 * -2 + 1;
    puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
  }
  FUN_00402944((undefined4 *)((int)local_8 + 0x15),(undefined4 *)(local_8[3] + local_8[0x106]),
               local_8[0x10f] << 2);
  *(bool *)(local_8 + 0x107) = *(int *)(local_8[3] + 0x10) - 1U < 2;
  if ((param_5 == '\0') && ((char)local_8[0x107] == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(local_8 + 0x10b) = uVar1;
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      pHVar4 = CreateCompatibleDC((HDC)0x0);
      local_8[0x108] = (int)pHVar4;
      pHVar5 = CreateDIBSection((HDC)local_8[0x108],(BITMAPINFO *)local_8[3],0,
                                (void **)(local_8 + 0x110),(HANDLE)0x0,0);
      local_8[0x109] = (int)pHVar5;
      if (local_8[0x109] == 0) {
        local_40 = &DAT_004997c8;
        local_3c = 0xb;
        ppuVar11 = &local_40;
        uVar3 = 0;
        FUN_00406a48((undefined4 *)PTR_PTR_0057243c,(int *)&local_48);
        uVar3 = FUN_0040cf28((int)&DAT_004106c0,'\x01',local_48,uVar3,ppuVar11);
        FUN_0040382c(uVar3);
      }
      pvVar6 = SelectObject((HDC)local_8[0x108],(HGDIOBJ)local_8[0x109]);
      local_8[0x10d] = (int)pvVar6;
    }
    else {
      iVar7 = FUN_004027e8(local_8[0x11d]);
      local_8[0x110] = iVar7;
      if (local_8[0x110] == 0) {
        FUN_0040cee0();
      }
    }
  }
  local_8[0x11e] = (local_8[0x10a] + -1) * local_8[0x120] + local_8[0x110];
  *in_FS_OFFSET = in_stack_ffffff98;
  puStack_60 = &LAB_004997b7;
  FUN_00403dd4((int *)&local_48,2);
  FUN_00403dd4((int *)&local_38,6);
  return;
}

