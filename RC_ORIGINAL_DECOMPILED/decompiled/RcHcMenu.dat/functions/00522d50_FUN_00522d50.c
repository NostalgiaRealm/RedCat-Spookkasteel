/*
 * FUN_00522d50 at 00522d50
 * undefined __register FUN_00522d50(int * param_1, int * param_2, int * param_3, int param_4, char param_5)
 * Address ranges: 00522d50-00522f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00522d50(int *param_1,int *param_2,int *param_3,int param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  HDC hdc;
  undefined *puVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  undefined **extraout_EDX;
  undefined **ppuVar5;
  int iVar6;
  int extraout_EDX_00;
  int iVar7;
  int extraout_EDX_01;
  int *piVar8;
  int *in_FS_OFFSET;
  int iVar9;
  undefined *puVar10;
  int iStack_160;
  undefined1 *puStack_15c;
  undefined1 *puStack_158;
  int local_148 [2];
  byte local_140 [256];
  int local_40;
  int local_3c;
  int local_38 [4];
  undefined *local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  int *local_8;
  
  puStack_158 = &stack0xfffffffc;
  local_3c = 0;
  local_40 = 0;
  local_28 = (undefined *)0x0;
  piVar8 = local_38;
  for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar8 = *param_3;
    param_3 = param_3 + 1;
    piVar8 = piVar8 + 1;
  }
  puStack_15c = &LAB_00522f97;
  iStack_160 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_160;
  local_c = param_2;
  local_8 = param_1;
  if (param_5 == '\0') {
    local_24 = DAT_00574744;
    local_20 = DAT_00574748;
    puStack_158 = &stack0xfffffffc;
  }
  else if (param_5 == '\x01') {
    local_24 = DAT_0057474c;
    local_20 = DAT_00574750;
    puStack_158 = &stack0xfffffffc;
  }
  else if (param_5 == '\x02') {
    local_24 = DAT_00574754;
    local_20 = DAT_00574758;
    puStack_158 = &stack0xfffffffc;
  }
  else {
    FUN_00402fe0(*param_1,local_140);
    FUN_00403fd4(&local_40,local_140);
    FUN_004040f0(&local_3c,3);
    FUN_00403d94(local_3c);
  }
  local_18 = (**(code **)(*local_24 + 0x2c))();
  local_1c = (**(code **)(*local_24 + 0x20))();
  uVar1 = local_38[2] - local_18;
  if (SBORROW4(local_38[2],local_18)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 - 4;
  if (SBORROW4(uVar1,4)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar1 = local_38[1] + local_38[3];
  local_10 = uVar2;
  if (SCARRY4(local_38[1],local_38[3])) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 - local_1c;
  if (SBORROW4(uVar1,local_1c)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  local_14 = (int)uVar2 >> 1;
  if (local_14 < 0) {
    local_14 = local_14 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = local_8[0x85];
  FUN_0041160c(local_10,local_14,local_148);
  FUN_004ab83c(local_c,local_148,local_24,iVar4);
  iVar4 = local_8[0x86];
  FUN_0041160c(local_10,local_14,local_148);
  FUN_004ab83c(local_c,local_148,local_20,iVar4);
  if (param_4 != -1) {
    ppuVar5 = &local_28;
    uVar1 = param_4 + 1;
    if (SCARRY4(param_4,1)) {
      uVar1 = thunk_FUN_00402874(uVar1);
      ppuVar5 = extraout_EDX;
    }
    FUN_00409bd8(uVar1,(int *)ppuVar5);
    FUN_0041bd70((int *)local_c[3],(undefined4 *)"Small Fonts");
    FUN_0041bde8((int *)local_c[3],6);
    FUN_0041bb48((int *)local_c[3],local_8[0x86],extraout_ECX);
    local_18 = FUN_0041cda8(local_c,local_28);
    iVar9 = 1;
    hdc = (HDC)FUN_0041cf6c(local_c);
    SetBkMode(hdc,iVar9);
    iVar9 = local_38[1] + 1;
    puVar3 = local_28;
    puVar10 = local_28;
    if (SCARRY4(local_38[1],1)) {
      puVar3 = (undefined *)thunk_FUN_00402874((uint)local_28);
      iVar9 = extraout_ECX_00;
    }
    iVar6 = local_10 - local_18;
    if (SBORROW4(local_10,local_18)) {
      puVar3 = (undefined *)thunk_FUN_00402874((uint)puVar3);
      iVar9 = extraout_ECX_01;
      iVar6 = extraout_EDX_00;
    }
    iVar7 = iVar6 + -1;
    if (SBORROW4(iVar6,1)) {
      thunk_FUN_00402874((uint)puVar3);
      iVar9 = extraout_ECX_02;
      iVar7 = extraout_EDX_01;
    }
    FUN_0041cc34(local_c,iVar7,iVar9,puVar10);
    FUN_0041ce68((int)local_c);
  }
  *in_FS_OFFSET = iVar4;
  FUN_00403dd4(&local_40,2);
  FUN_00403db0((int *)&local_28);
  return;
}

