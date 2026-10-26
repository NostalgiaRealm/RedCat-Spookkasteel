/*
 * FUN_00469218 at 00469218
 * undefined __register FUN_00469218(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00469218-004692c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00469218(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int *piVar2;
  int in_stack_ffffffd0;
  int iStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  byte *local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (byte *)0x0;
  puStack_28 = &LAB_004692c7;
  iStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_1[10] == 0) {
    in_stack_ffffffd0 = 0;
    FUN_004692f8((int)param_1,&local_10);
    local_c = local_10;
    local_8 = 0xb;
    piVar2 = &local_c;
    FUN_00406a48((undefined4 *)PTR_PTR_00572570,(int *)&local_14);
    FUN_00466e30(local_14,piVar2,0,in_stack_ffffffd0);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (*(char *)((int)param_1 + 0x3a) == '\0') {
    (**(code **)(*(int *)param_1[10] + 0x230))((int *)param_1[10],param_1,param_2,param_3);
  }
  else if ((param_1[0x15] != 0) && (param_2 != 0)) {
    (**(code **)(*param_1 + 0x6c))(param_1,param_1[0x15],param_2);
  }
  *in_FS_OFFSET = in_stack_ffffffd0;
  puStack_28 = &LAB_004692ce;
  iStack_2c = 0x4692c6;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

