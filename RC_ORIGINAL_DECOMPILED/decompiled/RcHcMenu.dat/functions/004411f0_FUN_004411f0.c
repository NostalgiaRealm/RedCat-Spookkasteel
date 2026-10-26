/*
 * FUN_004411f0 at 004411f0
 * undefined __register FUN_004411f0(int param_1, HMENU param_2, byte param_3)
 * Address ranges: 004411f0-0044144a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004411f0(int param_1,HMENU param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD DVar6;
  LPCSTR pCVar7;
  UINT_PTR uIDNewItem;
  uint uVar8;
  int *in_FS_OFFSET;
  byte bVar9;
  int iStack_68;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int local_44;
  MENUITEMINFOA local_3d;
  byte local_d;
  undefined *local_c;
  byte local_5;
  
  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_c = (undefined *)0x0;
  puStack_58 = &LAB_0044144b;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puVar1 = &stack0xfffffffc;
  local_5 = param_3;
  if (*(char *)(param_1 + 0x32) == '\0') goto LAB_0044142d;
  FUN_00403e48((int *)&local_c,*(int *)(param_1 + 0x24));
  iVar4 = FUN_00442fec(param_1);
  if (iVar4 < 1) {
    if (*(short *)(param_1 + 0x54) != 0) {
      iVar4 = *(int *)(param_1 + 0x58);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x58) == 0)) {
        uVar5 = FUN_0040320c(*(int **)(iVar4 + 4),(int)&PTR_FUN_004401c8);
        if ((char)uVar5 != '\0') goto LAB_0044128c;
      }
      FUN_004408e0(*(ushort *)(param_1 + 0x54),&local_44);
      iStack_68 = local_44;
      FUN_004040f0((int *)&local_c,3);
    }
  }
  else {
    local_3d.hSubMenu = (HMENU)FUN_0044169c(param_1);
  }
LAB_0044128c:
  DVar6 = GetVersion();
  uVar3 = (ushort)DVar6 & 0xff;
  bVar9 = uVar3 == 4;
  if (uVar3 < 4) {
    FUN_00404140(*(uint **)(param_1 + 0x24),(uint *)&DAT_00441470);
    uVar8 = *(uint *)(&DAT_0056f95c + (bVar9 & 0x7f) * 4) |
            *(uint *)(&DAT_0056f950 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
            *(uint *)(&DAT_0056f940 + (uint)*(byte *)(param_1 + 0x2c) * 4) |
            *(uint *)(&DAT_0056f948 + (uint)*(byte *)(param_1 + 0x2d) * 4);
    iVar4 = FUN_00442fec(param_1);
    if (iVar4 < 1) {
      pCVar7 = FUN_004041f4(local_c);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x400,(uint)*(ushort *)(param_1 + 0x44),pCVar7);
      puVar1 = puStack_54;
    }
    else {
      pCVar7 = FUN_004041f4(*(undefined **)(param_1 + 0x24));
      uIDNewItem = FUN_0044169c(param_1);
      InsertMenuA(param_2,0xffffffff,uVar8 | 0x410,uIDNewItem,pCVar7);
      puVar1 = puStack_54;
    }
    goto LAB_0044142d;
  }
  local_3d.cbSize = 0x2c;
  local_3d.fMask = 0x3f;
  iVar4 = thunk_FUN_0044355c(param_1);
  if (iVar4 == 0) {
LAB_004412cc:
    if (*(int *)(param_1 + 0x40) != 0) {
      cVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      bVar9 = 1;
      if (cVar2 == '\0') goto LAB_004412e2;
    }
    local_d = 0;
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
    if (*(char *)(iVar4 + 0x34) == '\0') {
      iVar4 = FUN_00442bc4(param_1);
      bVar9 = 0;
      if (iVar4 == 0) goto LAB_004412cc;
    }
LAB_004412e2:
    local_d = 1;
  }
  FUN_00404140(*(uint **)(param_1 + 0x24),(uint *)&DAT_00441470);
  local_3d.fType =
       *(uint *)(&DAT_0056f990 + (bVar9 & 0x7f) * 4) |
       *(uint *)(&DAT_0056f988 + (uint)*(byte *)(param_1 + 0x31) * 4) |
       *(uint *)(&DAT_0056f964 + (uint)*(byte *)(param_1 + 0x3c) * 4) |
       *(uint *)(&DAT_0056f998 + (uint)local_5 * 4) | *(uint *)(&DAT_0056f9a0 + (uint)local_d * 4);
  local_3d.fState =
       *(uint *)(&DAT_0056f970 + (uint)*(byte *)(param_1 + 0x2c) * 4) |
       *(uint *)(&DAT_0056f980 + (uint)*(byte *)(param_1 + 0x2d) * 4) |
       *(uint *)(&DAT_0056f978 + (uint)*(byte *)(param_1 + 0x2e) * 4);
  local_3d.wID = (UINT)*(ushort *)(param_1 + 0x44);
  local_3d.hSubMenu = (HMENU)0x0;
  local_3d.hbmpChecked = (HBITMAP)0x0;
  local_3d.hbmpUnchecked = (HBITMAP)0x0;
  local_3d.dwTypeData = FUN_004041f4(local_c);
  iVar4 = FUN_00442fec(param_1);
  if (0 < iVar4) {
    local_3d.hSubMenu = (HMENU)FUN_0044169c(param_1);
  }
  InsertMenuItemA(param_2,0xffffffff,-1,&local_3d);
  puVar1 = puStack_54;
LAB_0044142d:
  puStack_54 = puVar1;
  *in_FS_OFFSET = iStack_68;
  FUN_00403db0(&local_44);
  FUN_00403db0((int *)&local_c);
  return;
}

