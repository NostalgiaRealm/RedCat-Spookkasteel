/*
 * FUN_0046864c at 0046864c
 * undefined __register FUN_0046864c(int param_1, uint param_2, int param_3)
 * Address ranges: 0046864c-0046869d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046864c(int param_1,uint param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  bool bVar1;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_0046869e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  bVar1 = (byte)param_2 < 7;
  if ((byte)param_2 < 8) {
    bVar1 = (*(byte *)(param_1 + 0x18 + ((int)(param_2 & 0x7f) >> 3)) >> (param_2 & 7) & 1) != 0;
  }
  if (!bVar1) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572050,(int *)&local_8);
    FUN_00466d84(local_8,param_3);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004686a5;
  puStack_18 = (undefined1 *)0x46869d;
  FUN_00403db0((int *)&local_8);
  return;
}

