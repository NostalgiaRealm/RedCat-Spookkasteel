/*
 * FUN_00450190 at 00450190
 * undefined __register FUN_00450190(int param_1)
 * Address ranges: 00450190-00450320
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450190(int param_1)

{
  ATOM AVar1;
  undefined1 *puVar2;
  BOOL BVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  LPCSTR pCVar7;
  undefined4 uVar8;
  LPARAM lParam;
  LONG dwNewLong;
  undefined4 *in_FS_OFFSET;
  LPVOID pvVar9;
  HINSTANCE pHVar10;
  HMENU pHVar11;
  HWND pHVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 *local_30;
  tagWNDCLASSA local_2c;
  
  puStack_38 = &stack0xfffffffc;
  local_30 = (undefined4 *)0x0;
  puStack_3c = &LAB_00450321;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  if ((*(char *)(param_1 + 0x94) == '\0') && (*PTR_DAT_0057248c == '\0')) {
    puVar2 = FUN_004484b8();
    *(undefined1 **)(param_1 + 0x34) = puVar2;
    BVar3 = GetClassInfoA(DAT_005734dc,PTR_s_TApplication_0056fb00,&local_2c);
    if (BVar3 == 0) {
      _DAT_0056faec = DAT_005734dc;
      AVar1 = RegisterClassA((WNDCLASSA *)&DAT_0056fadc);
      if (AVar1 == 0) {
        FUN_00406a48((undefined4 *)PTR_PTR_00572100,(int *)&local_30);
        piVar4 = FUN_0040ceec((int *)&DAT_004106c0,'\x01',local_30);
        FUN_0040382c(piVar4);
      }
    }
    iVar15 = 0;
    (**(code **)PTR_DAT_00572210)();
    uVar5 = (**(code **)PTR_DAT_00572210)();
    iVar6 = (int)uVar5 >> 1;
    if (iVar6 < 0) {
      iVar6 = iVar6 + (uint)((uVar5 & 1) != 0);
    }
    iVar14 = 0;
    iVar13 = 0;
    pHVar12 = (HWND)0x0;
    pHVar11 = (HMENU)0x0;
    pvVar9 = (LPVOID)0x0;
    pHVar10 = DAT_005734dc;
    pCVar7 = FUN_004041f4(*(undefined **)(param_1 + 0x7c));
    uVar8 = FUN_0040859c(PTR_s_TApplication_0056fb00,pCVar7,0x84ca0000,pvVar9,pHVar10,pHVar11,
                         pHVar12,iVar13,iVar14,iVar6,iVar15);
    *(undefined4 *)(param_1 + 0x24) = uVar8;
    FUN_00403db0((int *)(param_1 + 0x7c));
    *(undefined1 *)(param_1 + 0x94) = 1;
    SetWindowLongA(*(HWND *)(param_1 + 0x24),-4,*(LONG *)(param_1 + 0x34));
    if (*PTR_DAT_005722c4 != '\0') {
      lParam = FUN_00450cc8(param_1);
      SendMessageA(*(HWND *)(param_1 + 0x24),0x80,1,lParam);
      dwNewLong = FUN_00450cc8(param_1);
      SetClassLongA(*(HWND *)(param_1 + 0x24),-0xe,dwNewLong);
    }
    pHVar11 = GetSystemMenu(*(HWND *)(param_1 + 0x24),0);
    DeleteMenu(pHVar11,0xf030,0);
    DeleteMenu(pHVar11,0xf000,0);
    if (*PTR_DAT_005722c4 != '\0') {
      DeleteMenu(pHVar11,0xf010,0);
    }
  }
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_00450328;
  puStack_3c = (undefined1 *)0x450320;
  FUN_00403db0((int *)&local_30);
  return;
}

