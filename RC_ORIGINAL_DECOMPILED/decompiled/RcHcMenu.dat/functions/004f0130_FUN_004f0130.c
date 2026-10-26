/*
 * FUN_004f0130 at 004f0130
 * undefined __register FUN_004f0130(int * param_1)
 * Address ranges: 004f0130-004f0237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0130(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  HWND pHVar5;
  undefined4 extraout_ECX;
  uint extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  HWND hWndInsertAfter;
  UINT uFlags;
  int local_1c [2];
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_8 = param_1;
  (**(code **)(*param_1 + 0xc0))();
  FUN_0041160c(local_8[0xc],local_8[0xd],local_1c);
  FUN_0043228c((int *)local_8[9],local_1c,&local_10);
  local_14 = local_c + local_8[0xf];
  if (SCARRY4(local_c,local_8[0xf])) {
    local_14 = thunk_FUN_00402874(local_14);
  }
  uVar1 = (**(code **)(*local_8 + 0xd0))();
  iVar6 = *(int *)(uVar1 + 0x3c) + local_14;
  if (SCARRY4(*(int *)(uVar1 + 0x3c),local_14)) {
    thunk_FUN_00402874(uVar1);
  }
  iVar2 = FUN_0044f0b4();
  uVar1 = local_14;
  if (iVar2 < iVar6) {
    uVar3 = (**(code **)(*local_8 + 0xd0))();
    uVar1 = local_c - *(int *)(uVar3 + 0x3c);
    if (SBORROW4(local_c,*(int *)(uVar3 + 0x3c))) {
      thunk_FUN_00402874(uVar3);
      uVar1 = extraout_EDX;
    }
  }
  local_14 = uVar1;
  piVar4 = (int *)(**(code **)(*local_8 + 0xd0))();
  (**(code **)(*piVar4 + 0x60))(piVar4,local_8);
  uFlags = 0x51;
  iVar2 = 0;
  iVar6 = 0;
  hWndInsertAfter = (HWND)0x0;
  uVar1 = local_14;
  piVar4 = (int *)(**(code **)(*local_8 + 0xd0))();
  pHVar5 = (HWND)FUN_00438988(piVar4);
  SetWindowPos(pHVar5,hWndInsertAfter,local_10,uVar1,iVar6,iVar2,uFlags);
  piVar4 = (int *)(**(code **)(*local_8 + 0xd0))();
  FUN_0043262c(piVar4,CONCAT31((int3)((uint)extraout_EDX_00 >> 8),1),extraout_ECX);
  *(undefined1 *)((int)local_8 + 0x205) = 1;
  (**(code **)(*local_8 + 0x74))();
  piVar4 = (int *)(**(code **)(*local_8 + 0xcc))();
  pHVar5 = (HWND)FUN_00438988(piVar4);
  SetFocus(pHVar5);
  return;
}

