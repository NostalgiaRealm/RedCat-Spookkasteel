/*
 * FUN_004156b8 at 004156b8
 * undefined __register FUN_004156b8(int * param_1)
 * Address ranges: 004156b8-004157ae;004157b6-004157cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004156b8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  char *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  local_c = (char *)0x0;
  puStack_24 = &LAB_004157cc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar5 = param_1[0xc];
  local_8 = param_1;
  if (iVar5 == 0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_004157d3;
    puStack_24 = (undefined1 *)0x4157cb;
    FUN_00403db0((int *)&local_c);
    return;
  }
  puStack_30 = &LAB_004157af;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = *(int *)(iVar5 + 8);
  if (-1 < local_10 + -1) {
    iVar5 = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      iVar2 = FUN_00412384((undefined4 *)local_8[0xc],iVar5);
      FUN_00403e48((int *)&local_c,*(int *)(iVar2 + 0x14));
      (**(code **)(*local_8 + 0x20))(local_8,&local_c);
      iVar3 = FUN_00414fb4(*(int *)(iVar2 + 8),local_c);
      iVar4 = FUN_00412384((undefined4 *)local_8[0xc],iVar5);
      FUN_0041563c(iVar4);
      if (iVar3 == 0) {
        bVar1 = FUN_00414f6c(iVar2);
        if (!bVar1) goto LAB_00415782;
        iVar2 = FUN_00412384((undefined4 *)local_8[0xc],iVar5);
        FUN_0041279c(DAT_00573630,iVar2);
        FUN_004124d0((int *)local_8[0xc],iVar5,0);
      }
      else {
LAB_00415782:
        FUN_0040fa6c(*(int **)(iVar2 + 4),*(undefined4 **)(iVar2 + 0xc),iVar3);
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = (undefined1 *)0x4157b6;
  puStack_30 = (undefined1 *)0x4157ae;
  FUN_004157fc((int)local_8);
  return;
}

