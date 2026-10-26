/*
 * FUN_004687d8 at 004687d8
 * undefined __register FUN_004687d8(int param_1, undefined * param_2)
 * Address ranges: 004687d8-00468864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004687d8(int param_1,undefined *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iVar3;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_14;
  undefined1 local_10;
  byte *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_8 = (undefined4 *)0x0;
  puStack_24 = &LAB_00468865;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puVar1 = &stack0xfffffffc;
  if (param_2 == (undefined *)0x0) {
    FUN_00406a48((undefined4 *)PTR_PTR_005723e8,(int *)&local_8);
    FUN_00466d84(local_8,*(int *)(param_1 + 8));
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  iVar3 = 0x46881f;
  iVar2 = FUN_004688e4(param_1,param_2);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    FUN_00406a48((undefined4 *)PTR_PTR_005722a8,(int *)&local_c);
    local_10 = 0xb;
    local_14 = param_2;
    FUN_00466e30(local_c,&local_14,0,iVar3);
  }
  *in_FS_OFFSET = iVar3;
  puStack_24 = &LAB_0046886c;
  iStack_28 = 0x468864;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

