/*
 * FUN_005283f8 at 005283f8
 * undefined __register FUN_005283f8(int * param_1, char param_2, int * param_3)
 * Address ranges: 005283f8-005284bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005283f8(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  undefined4 *local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x528410;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd8,in_stack_ffffffdc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_30 = &LAB_005284c0;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_005208e0(param_1,'\0',param_3);
  local_8[0xa4] = 0;
  FUN_0040407c((int *)&local_14,(undefined4 *)local_8[2],(undefined4 *)"SortOrder");
  piVar1 = FUN_00496f60((int *)&DAT_0048e950,'\x01',0,0,local_14);
  local_8[0xa5] = (int)piVar1;
  *(undefined1 *)(local_8 + 0xa6) = 1;
  local_8[0xa0] = 0;
  FUN_00403db0(local_8 + 0xa8);
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_00);
  local_8[0xa9] = (int)piVar1;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005284c7;
  puStack_30 = (undefined1 *)0x5284bf;
  FUN_00403db0((int *)&local_14);
  return;
}

