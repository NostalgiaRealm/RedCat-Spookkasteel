/*
 * FUN_00420098 at 00420098
 * undefined __register FUN_00420098(int param_1, undefined2 * param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 00420098-004200c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00420098(int param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    *param_2 = 0xe;
    *param_4 = 0;
    pHVar2 = CopyEnhMetaFileA(*(HENHMETAFILE *)(iVar1 + 8),(LPCSTR)0x0);
    *param_3 = pHVar2;
  }
  return;
}

