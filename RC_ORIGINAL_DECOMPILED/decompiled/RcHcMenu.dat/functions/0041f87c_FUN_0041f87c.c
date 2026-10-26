/*
 * FUN_0041f87c at 0041f87c
 * undefined __register FUN_0041f87c(int param_1, int * param_2)
 * Address ranges: 0041f87c-0041f93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f87c(int param_1,int *param_2)

{
  int iVar1;
  HENHMETAFILE pHVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  undefined4 local_6c [6];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  UINT local_3c;
  BYTE *local_8;
  
  puStack_7c = (undefined1 *)0x41f890;
  FUN_0041f7e8(param_1);
  puStack_7c = (undefined1 *)0x41f89f;
  FUN_00414804(param_2,local_6c,100);
  if (local_44 != 0x464d4520) {
    puStack_7c = (undefined1 *)0x41f8ad;
    FUN_0041d25c();
  }
  puStack_7c = (undefined1 *)0x41f8b5;
  local_8 = (BYTE *)FUN_004027e8(local_3c);
  iVar1 = *(int *)(param_1 + 0x20);
  puStack_80 = &LAB_0041f93c;
  uStack_84 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_84;
  puStack_7c = &stack0xfffffffc;
  FUN_00402944(local_6c,(undefined4 *)local_8,100);
  FUN_00414804(param_2,local_8 + 100,local_3c - 100);
  pHVar2 = SetEnhMetaFileBits(local_3c,local_8);
  *(HENHMETAFILE *)(iVar1 + 8) = pHVar2;
  if (pHVar2 == (HENHMETAFILE)0x0) {
    FUN_0041d25c();
  }
  *(undefined2 *)(iVar1 + 0x18) = 0;
  *(int *)(iVar1 + 0xc) = local_4c - local_54;
  *(int *)(iVar1 + 0x10) = local_48 - local_50;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *in_FS_OFFSET = uStack_84;
  puStack_7c = &LAB_0041f943;
  puStack_80 = (undefined1 *)0x41f93b;
  FUN_00402800((int)local_8);
  return;
}

