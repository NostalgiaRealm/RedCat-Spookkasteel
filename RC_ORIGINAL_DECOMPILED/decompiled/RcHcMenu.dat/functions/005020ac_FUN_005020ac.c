/*
 * FUN_005020ac at 005020ac
 * undefined __register FUN_005020ac(int * param_1)
 * Address ranges: 005020ac-005021b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005020ac(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  HWND pHVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  undefined4 extraout_ECX_02;
  int iVar6;
  int extraout_EDX;
  uint extraout_EDX_00;
  undefined4 extraout_EDX_01;
  HWND hWndInsertAfter;
  int cy;
  UINT uFlags;
  int local_1c [2];
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xf4))();
  FUN_0041160c(0,0,local_1c);
  FUN_0043228c(local_8,local_1c,&local_10);
  uVar2 = local_c + local_8[0xf];
  if (SCARRY4(local_c,local_8[0xf])) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar3 = uVar2 - 1;
  if (SBORROW4(uVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  local_14 = uVar3;
  uVar2 = FUN_0044f0b4();
  iVar6 = *(int *)(local_8[0x8e] + 0x3c) + local_14;
  uVar5 = extraout_ECX;
  if (SCARRY4(*(int *)(local_8[0x8e] + 0x3c),local_14)) {
    uVar2 = thunk_FUN_00402874(uVar2);
    uVar5 = extraout_ECX_00;
    iVar6 = extraout_EDX;
  }
  uVar3 = local_14;
  if ((int)uVar2 < iVar6) {
    piVar1 = (int *)(local_8[0x8e] + 0x3c);
    uVar3 = local_c - *piVar1;
    if (SBORROW4(local_c,*piVar1)) {
      thunk_FUN_00402874(local_8[0x8e]);
      uVar5 = extraout_ECX_01;
      uVar3 = extraout_EDX_00;
    }
  }
  local_14 = uVar3;
  FUN_0043262c((int *)local_8[0x8e],0,uVar5);
  (**(code **)(*(int *)local_8[0x8e] + 0x60))((int *)local_8[0x8e],local_8);
  uFlags = 0x51;
  cy = 0;
  iVar6 = 0;
  hWndInsertAfter = (HWND)0x0;
  uVar2 = local_14;
  pHVar4 = (HWND)FUN_00438988((int *)local_8[0x8e]);
  SetWindowPos(pHVar4,hWndInsertAfter,local_10,uVar2,iVar6,cy,uFlags);
  FUN_0043262c((int *)local_8[0x8e],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),1),extraout_ECX_02);
  *(byte *)(local_8 + 0x97) = *(byte *)(local_8 + 0x97) | 2;
  (**(code **)(*(int *)local_8[0x8e] + 0x74))();
  pHVar4 = (HWND)FUN_00438988(local_8);
  SetFocus(pHVar4);
  return;
}

