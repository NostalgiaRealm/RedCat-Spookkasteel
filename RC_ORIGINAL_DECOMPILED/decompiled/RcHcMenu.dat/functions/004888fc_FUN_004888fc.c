/*
 * FUN_004888fc at 004888fc
 * undefined __register FUN_004888fc(int * param_1, byte param_2)
 * Address ranges: 004888fc-0048896b;00488999-004889d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004888fc(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  byte local_9;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_004889d7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_24 = (undefined1 *)0x48892a;
  local_9 = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*(int *)param_1[0x8e] + 0x14))();
  if (0 < iVar1) {
    *(byte *)((int)local_8 + 0x25e) = local_9 ^ 1;
    puStack_28 = &LAB_0048896c;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    puStack_24 = &stack0xfffffffc;
    FUN_004886f0(local_8,'\x01');
    *in_FS_OFFSET = uStack_2c;
    *(undefined1 *)((int)local_8 + 0x25e) = 0;
    return;
  }
  puStack_24 = (undefined1 *)0x4889a6;
  FUN_00406a48((undefined4 *)PTR_PTR_005722a4,(int *)&local_10);
  puStack_24 = (undefined1 *)0x4889b1;
  FUN_00466d84(local_10,(int)local_8);
  *(undefined1 *)((int)local_8 + 0x25f) = 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004889de;
  puStack_1c = (undefined1 *)0x4889d6;
  FUN_00403db0((int *)&local_10);
  return;
}

