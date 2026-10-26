/*
 * FUN_0041fecc at 0041fecc
 * undefined __register FUN_0041fecc(int param_1, int * param_2)
 * Address ranges: 0041fecc-0041ffe6;0042000e-00420013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041fecc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  ushort local_26 [5];
  undefined2 local_1c;
  undefined2 local_1a;
  ushort local_18;
  ushort local_12;
  HDC local_10;
  UINT local_c;
  LPBYTE local_8;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_00402cfc((undefined4 *)local_26,0x16,0);
  iVar1 = *(int *)(param_1 + 0x20);
  local_26[0] = 0xcdd7;
  local_26[1] = 0x9ac6;
  local_18 = *(ushort *)(iVar1 + 0x18);
  if (local_18 == 0) {
    local_18 = 0x60;
  }
  iVar2 = MulDiv(*(int *)(iVar1 + 0xc),(uint)local_18,0x9ec);
  local_1c = (undefined2)iVar2;
  iVar2 = MulDiv(*(int *)(iVar1 + 0x10),(uint)local_18,0x9ec);
  local_1a = (undefined2)iVar2;
  local_12 = FUN_0041e0ac(local_26);
  local_10 = GetDC((HWND)0x0);
  *in_FS_OFFSET = &stack0xffffffc4;
  local_c = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),0,(LPBYTE)0x0,8,local_10);
  local_8 = (LPBYTE)FUN_004027e8(local_c);
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  UVar3 = GetWinMetaFileBits(*(HENHMETAFILE *)(iVar1 + 8),local_c,local_8,8,local_10);
  if (UVar3 < local_c) {
    FUN_0041d2bc();
  }
  FUN_0041483c(param_2,local_26,0x16);
  FUN_0041483c(param_2,local_8,local_c);
  *in_FS_OFFSET = uVar4;
  FUN_00402800((int)local_8);
  return;
}

