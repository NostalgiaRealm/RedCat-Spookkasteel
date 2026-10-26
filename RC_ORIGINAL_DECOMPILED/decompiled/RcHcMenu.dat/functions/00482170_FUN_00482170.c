/*
 * FUN_00482170 at 00482170
 * undefined __register FUN_00482170(int param_1, undefined4 * param_2)
 * Address ranges: 00482170-0048221c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482170(int param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  int iVar3;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_14;
  undefined1 local_10;
  byte *local_c;
  undefined4 *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (byte *)0x0;
  local_8 = (undefined4 *)0x0;
  puStack_24 = &LAB_0048221d;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(param_1 + 0x43) != '\0') &&
     (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x44) == '\0')) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572334,(int *)&local_8);
    FUN_00466d84(local_8,param_1);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  iVar3 = 0x4821bc;
  FUN_0048070c(param_1);
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = 0x4821cc;
    iVar2 = FUN_004804cc(DAT_0057394c,(undefined *)param_2);
    if ((iVar2 != 0) && (param_1 != iVar2)) {
      iVar3 = param_1;
      FUN_00406a48((undefined4 *)PTR_PTR_00572474,(int *)&local_c);
      local_10 = 0xb;
      local_14 = param_2;
      FUN_00466e30(local_c,&local_14,0,iVar3);
    }
  }
  FUN_00403e04((int *)(param_1 + 0x48),param_2);
  *in_FS_OFFSET = iVar3;
  puStack_24 = &LAB_00482224;
  iStack_28 = 0x48221c;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

