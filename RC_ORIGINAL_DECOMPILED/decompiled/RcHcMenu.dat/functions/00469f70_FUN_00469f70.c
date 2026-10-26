/*
 * FUN_00469f70 at 00469f70
 * undefined __register FUN_00469f70(int param_1, int param_2)
 * Address ranges: 00469f70-00469fc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469f70(int param_1,int param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_18 = &LAB_00469fc6;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (param_2 != 0) {
    cVar1 = (**(code **)(param_1 + 0xc4))();
    if (cVar1 == '\0') {
      FUN_00406a48((undefined4 *)PTR_PTR_0057222c,(int *)&local_8);
      FUN_00466d84(local_8,0);
    }
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00469fcd;
  puStack_18 = (undefined1 *)0x469fc5;
  FUN_00403db0((int *)&local_8);
  return;
}

