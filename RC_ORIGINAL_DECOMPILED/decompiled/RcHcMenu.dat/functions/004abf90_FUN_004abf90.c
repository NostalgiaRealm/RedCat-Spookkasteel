/*
 * FUN_004abf90 at 004abf90
 * undefined __register FUN_004abf90(int * param_1, LONG * param_2, undefined * param_3, byte param_4, int param_5, int * param_6, int * param_7, char param_8, char param_9, byte param_10)
 * Address ranges: 004abf90-004ac273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004abf90(int *param_1,LONG *param_2,undefined *param_3,byte param_4,int param_5,
                 int *param_6,int *param_7,char param_8,char param_9,byte param_10)

{
  uint uVar1;
  HDC pHVar2;
  LPCSTR pCVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  uint uVar5;
  uint extraout_EDX_00;
  int extraout_EDX_01;
  tagRECT *ptVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  tagRECT local_38;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined *local_c;
  int *local_8;
  
  puVar8 = &stack0xfffffffc;
  puVar10 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar9 = &stack0xfffffffc;
  local_14 = *param_7;
  local_10 = param_7[1];
  ptVar6 = &local_38;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar6->left = *param_2;
    param_2 = param_2 + 1;
    ptVar6 = (tagRECT *)&ptVar6->top;
  }
  puStack_44 = (undefined1 *)0x4abfbc;
  local_c = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_48 = &LAB_004ac291;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  if (param_6 != (int *)0x0) {
    local_28 = local_38.left;
    if (param_8 == '\0') {
      local_24 = 0;
      puStack_44 = &stack0xfffffffc;
    }
    else if (param_8 == '\x01') {
      puStack_44 = &stack0xfffffffc;
      uVar1 = (**(code **)(*param_6 + 0x20))();
      iVar4 = local_38.bottom + local_38.top;
      if (SCARRY4(local_38.bottom,local_38.top)) {
        uVar1 = thunk_FUN_00402874(uVar1);
        iVar4 = extraout_EDX;
      }
      uVar5 = iVar4 - uVar1;
      if (SBORROW4(iVar4,uVar1)) {
        thunk_FUN_00402874(uVar1);
        uVar5 = extraout_EDX_00;
      }
      local_24 = (int)uVar5 >> 1;
      if (local_24 < 0) {
        local_24 = local_24 + (uint)((uVar5 & 1) != 0);
      }
    }
    else {
      puStack_44 = &stack0xfffffffc;
      if (param_8 == '\x02') {
        puStack_44 = &stack0xfffffffc;
        uVar1 = (**(code **)(*param_6 + 0x20))();
        local_24 = local_38.bottom - uVar1;
        if (SBORROW4(local_38.bottom,uVar1)) {
          thunk_FUN_00402874(uVar1);
          local_24 = extraout_EDX_01;
        }
      }
    }
    if (param_10 < 2) {
      FUN_004abc2c(local_8,(int *)&local_28,param_6,&local_14,'\x01','\0');
    }
    else if (param_10 == 2) {
      FUN_004abc2c(local_8,(int *)&local_28,param_6,&local_14,'\x01','\x01');
    }
    uVar1 = (**(code **)(*param_6 + 0x2c))();
    iVar4 = (int)uVar1 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar1 & 1) != 0);
    }
    uVar1 = iVar4 + local_38.left;
    if (SCARRY4(iVar4,local_38.left)) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    local_38.left = uVar1 + param_5;
    if (SCARRY4(uVar1,param_5)) {
      local_38.left = thunk_FUN_00402874(local_38.left);
    }
  }
  local_18 = 0;
  if ((param_4 & 8) == 0) {
    local_18 = 0x20;
  }
  if ((param_4 & 1) != 0) {
    local_18 = local_18 | 0x8000;
  }
  if ((param_4 & 2) != 0) {
    local_18 = local_18 | 0x4000;
  }
  if ((param_4 & 4) != 0) {
    local_18 = local_18 | 0x800;
  }
  if ((param_4 & 0x10) != 0) {
    local_18 = local_18 | 0x10;
  }
  if (param_9 != '\0') {
    if (param_9 == '\x01') {
      local_18 = local_18 | 1;
    }
    else if (param_9 == '\x02') {
      local_18 = local_18 | 2;
    }
  }
  if (param_8 != '\0') {
    if (param_8 == '\x01') {
      local_18 = local_18 | 4;
    }
    else if (param_8 == '\x02') {
      local_18 = local_18 | 8;
    }
  }
  local_1c = *(int *)(local_8[3] + 0x18);
  iVar4 = 1;
  pHVar2 = (HDC)FUN_0041cf6c(local_8);
  local_20 = SetBkMode(pHVar2,iVar4);
  uVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa8;
  if (param_10 == 0) {
    uVar1 = local_18;
    puVar9 = &stack0xfffffffc;
    if ((int)local_18 < 0) {
      uVar1 = thunk_FUN_00402874(local_18);
      puVar9 = puVar8;
    }
    ptVar6 = &local_38;
    iVar4 = -1;
    pCVar3 = FUN_004041f4(local_c);
    pHVar2 = (HDC)FUN_0041cf6c(local_8);
    DrawTextA(pHVar2,pCVar3,iVar4,ptVar6,uVar1);
  }
  else if (param_10 == 1) {
    FUN_0041bb48((int *)local_8[3],local_14,extraout_ECX);
    uVar1 = local_18;
    puVar9 = puVar10;
    if ((int)local_18 < 0) {
      uVar1 = thunk_FUN_00402874(local_18);
      puVar9 = puVar10;
    }
    ptVar6 = &local_38;
    iVar4 = -1;
    pCVar3 = FUN_004041f4(local_c);
    pHVar2 = (HDC)FUN_0041cf6c(local_8);
    DrawTextA(pHVar2,pCVar3,iVar4,ptVar6,uVar1);
  }
  else if (param_10 == 2) {
    OffsetRect(&local_38,1,1);
    FUN_0041bb48((int *)local_8[3],local_10,extraout_ECX_00);
    uVar1 = local_18;
    puVar9 = puVar11;
    if ((int)local_18 < 0) {
      uVar1 = thunk_FUN_00402874(local_18);
      puVar9 = puVar11;
    }
    ptVar6 = &local_38;
    iVar4 = -1;
    pCVar3 = FUN_004041f4(local_c);
    pHVar2 = (HDC)FUN_0041cf6c(local_8);
    DrawTextA(pHVar2,pCVar3,iVar4,ptVar6,uVar1);
    OffsetRect(&local_38,-1,-1);
    FUN_0041bb48((int *)local_8[3],local_14,extraout_ECX_01);
    uVar1 = local_18;
    if ((int)local_18 < 0) {
      uVar1 = thunk_FUN_00402874(local_18);
    }
    ptVar6 = &local_38;
    iVar4 = -1;
    pCVar3 = FUN_004041f4(local_c);
    pHVar2 = (HDC)FUN_0041cf6c(local_8);
    DrawTextA(pHVar2,pCVar3,iVar4,ptVar6,uVar1);
  }
  *in_FS_OFFSET = uVar7;
  FUN_0041bb48((int *)local_8[3],local_1c,puVar9);
  iVar4 = local_20;
  pHVar2 = (HDC)FUN_0041cf6c(local_8);
  SetBkMode(pHVar2,iVar4);
  return;
}

