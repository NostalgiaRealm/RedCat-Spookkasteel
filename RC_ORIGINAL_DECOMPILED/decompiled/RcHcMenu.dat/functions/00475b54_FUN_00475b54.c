/*
 * FUN_00475b54 at 00475b54
 * undefined __register FUN_00475b54(int param_1, int param_2)
 * Address ranges: 00475b54-00475bda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00475b54(int param_1,int param_2)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined1 local_10;
  byte *local_c;
  undefined *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_8 = (undefined *)0x0;
  puStack_24 = &LAB_00475bdb;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  FUN_004052a4((int *)&local_8,(VARIANTARG *)(param_2 + 8));
  iVar2 = 0x475b8b;
  iVar1 = FUN_00476b8c(param_1,local_8);
  if ((*(char *)(iVar1 + 0x36) != '\0') && (*(char *)(iVar1 + 0x36) != '\x03')) {
    iVar2 = 0;
    FUN_00406a48((undefined4 *)PTR_PTR_00572610,(int *)&local_c);
    local_14 = *(undefined4 *)(iVar1 + 0x2c);
    local_10 = 0xb;
    FUN_00466e30(local_c,&local_14,0,iVar2);
  }
  *in_FS_OFFSET = iVar2;
  puStack_24 = &LAB_00475be2;
  iStack_28 = 0x475bda;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

