/*
 * FUN_0045fd0c at 0045fd0c
 * undefined __register FUN_0045fd0c(int * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0045fd0c-0045fe05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fd0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int *in_stack_ffffffb8;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_30 = 0;
  local_20 = 0;
  local_24 = 0;
  local_c = 0;
  puStack_38 = &LAB_0045fe06;
  puStack_3c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_3c;
  local_8 = param_1;
  if (param_1[1] == 0) {
    uVar2 = FUN_0045fb34((int)param_1);
    if ((char)uVar2 == '\0') {
      param_4 = 0x45fdb0;
      (**(code **)(*local_8 + 8))(local_8,&local_30,*local_8,&local_c);
      local_2c = local_30;
      local_28 = 0xb;
      FUN_0040a894((byte *)"Kon OnChangedHandler voor %s niet verwijderen",&local_2c,0,
                   in_stack_ffffffb8);
    }
    else {
      iVar1 = *(int *)local_8[3];
      (**(code **)(iVar1 + 8))((int *)local_8[3],&local_20,iVar1,&local_c);
      local_1c = local_20;
      local_18 = 0xb;
      param_4 = 0x45fd83;
      (**(code **)(*local_8 + 8))(local_8,&local_24);
      local_14 = local_24;
      local_10 = 0xb;
      FUN_0040a894((byte *)"Kon OnChangedHandler voor %s.%s niet verwijderen",&local_1c,1,
                   in_stack_ffffffb8);
    }
    FUN_00403d94(local_c);
  }
  else {
    puStack_34 = &stack0xfffffffc;
    FUN_0045e42c((int *)param_1[1],0,param_3,param_4,param_5);
  }
  *in_FS_OFFSET = param_4;
  puStack_3c = &LAB_0045fe0d;
  FUN_00403db0(&local_30);
  FUN_00403dd4(&local_24,2);
  FUN_00403db0(&local_c);
  return;
}

