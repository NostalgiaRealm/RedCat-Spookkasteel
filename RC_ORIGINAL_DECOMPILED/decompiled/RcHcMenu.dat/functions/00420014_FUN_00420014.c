/*
 * FUN_00420014 at 00420014
 * undefined __register FUN_00420014(int * param_1)
 * Address ranges: 00420014-00420096
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420014(int *param_1)

{
  HENHMETAFILE pHVar1;
  int iVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  
  pHVar1 = GetClipboardData(0xe);
  if (pHVar1 == (HENHMETAFILE)0x0) {
    FUN_0041d22c((undefined4 *)PTR_PTR_00572410);
  }
  FUN_0041f7e8((int)param_1);
  iVar2 = param_1[8];
  pHVar1 = CopyEnhMetaFileA(pHVar1,(LPCSTR)0x0);
  *(HENHMETAFILE *)(iVar2 + 8) = pHVar1;
  GetEnhMetaFileHeader(*(HENHMETAFILE *)(iVar2 + 8),100,(LPENHMETAHEADER)&stack0xffffff98);
  *(int *)(iVar2 + 0xc) = local_48 - local_50;
  *(int *)(iVar2 + 0x10) = local_44 - local_4c;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  iVar2 = (**(code **)(*param_1 + 0x24))();
  *(bool *)((int)param_1 + 0x1a) = iVar2 != 0;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

