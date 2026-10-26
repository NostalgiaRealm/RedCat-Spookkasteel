/*
 * FUN_00532cc8 at 00532cc8
 * int * __register FUN_00532cc8(int * param_1, char param_2, int * param_3)
 * Address ranges: 00532cc8-00532e4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00532cc8(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc4;
  undefined4 in_stack_ffffffc8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  char local_9;
  int *local_8;
  
  local_9 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc4,in_stack_ffffffc8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  local_10 = param_3;
  local_8 = param_1;
  FUN_00501218(param_1,'\0',param_3);
  local_8[0x96] = 500;
  FUN_005017f4(local_8,'\x01');
  *(undefined1 *)((int)local_8 + 0x245) = 1;
  local_8[0xa6] = 0;
  *(undefined1 *)(local_8 + 0xb0) = 1;
  *(undefined1 *)(local_8 + 0xae) = 0;
  piVar1 = FUN_00530ba8((int *)&PTR_FUN_00530ab0,'\x01',local_8);
  local_8[0xaf] = (int)piVar1;
  local_14 = (int *)local_8[0xaf];
  (**(code **)(*local_14 + 0x60))(local_14,local_8);
  FUN_0043262c(local_14,0,extraout_ECX_00);
  local_14[0x67] = (int)local_8;
  local_14[0x66] = (int)FUN_00533f64;
  local_14[0x43] = (int)local_8;
  local_14[0x42] = (int)FUN_00533f64;
  iVar2 = FUN_00533c14((int)local_8);
  local_14[0x84] = iVar2;
  local_2c = FUN_00500f40(0x21,4,1);
  local_28 = FUN_00500f40(0x22,4,1);
  local_24 = FUN_00500f40(0x21,0,1);
  local_20 = FUN_00500f40(0x22,0,1);
  local_1c = FUN_00500f40(0x26,0,0);
  local_18 = FUN_00500f40(0x28,0,0);
  FUN_00501e18((int)local_8,&local_2c,5);
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_ffffffc4;
  }
  return local_8;
}

