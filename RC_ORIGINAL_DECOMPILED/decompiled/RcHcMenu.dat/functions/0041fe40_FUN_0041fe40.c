/*
 * FUN_0041fe40 at 0041fe40
 * undefined __register FUN_0041fe40(int param_1, int * param_2)
 * Address ranges: 0041fe40-0041febb;0041fec3-0041fec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041fe40(int param_1,int *param_2)

{
  UINT nSize;
  LPBYTE lpData;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    nSize = GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),0,(LPBYTE)0x0);
    if (nSize != 0) {
      lpData = (LPBYTE)FUN_004027e8(nSize);
      uVar1 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xffffffe0;
      GetEnhMetaFileBits(*(HENHMETAFILE *)(*(int *)(param_1 + 0x20) + 8),nSize,lpData);
      FUN_0041483c(param_2,lpData,nSize);
      *in_FS_OFFSET = uVar1;
      FUN_00402800((int)lpData);
      return;
    }
  }
  return;
}

