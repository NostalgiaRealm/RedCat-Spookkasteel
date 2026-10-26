/*
 * FUN_00513390 at 00513390
 * int * __register FUN_00513390(int * param_1, char param_2, int * param_3)
 * Address ranges: 00513390-00513563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00513390(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff74;
  undefined4 in_stack_ffffff78;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  char local_9;
  int *local_8;
  
  local_9 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffff74,in_stack_ffffff78);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  local_10 = param_3;
  local_8 = param_1;
  FUN_00501218(param_1,'\0',param_3);
  local_8[0x96] = 0;
  FUN_005017f4(local_8,'\0');
  *(undefined1 *)((int)local_8 + 0x245) = 0;
  FUN_004fe5b0((int)local_8,'\x01');
  local_7c = FUN_00500f6c(0x30,1);
  local_78 = FUN_00500f6c(0x31,1);
  local_74 = FUN_00500f6c(0x32,1);
  local_70 = FUN_00500f6c(0x33,1);
  local_6c = FUN_00500f6c(0x34,1);
  local_68 = FUN_00500f6c(0x35,1);
  local_64 = FUN_00500f6c(0x36,1);
  local_60 = FUN_00500f6c(0x37,1);
  local_5c = FUN_00500f6c(0x38,1);
  local_58 = FUN_00500f6c(0x39,1);
  local_54 = FUN_00500f6c(0x20,1);
  local_50 = FUN_00500f6c(0x25,1);
  local_4c = FUN_00500f6c(0x2b,1);
  local_48 = FUN_00500f6c(0x2d,1);
  local_44 = FUN_00500f6c(0x78,1);
  local_40 = FUN_00500f6c(0x2f,1);
  local_3c = FUN_00500f6c(0x2a,1);
  local_38 = FUN_00500f6c(0x3d,1);
  local_34 = FUN_00500f6c(99,1);
  local_30 = FUN_00500f6c(0x43,1);
  local_2c = FUN_00500f6c(0x61,1);
  local_28 = FUN_00500f6c(0x41,1);
  local_24 = FUN_00500f6c(0x62,1);
  local_20 = FUN_00500f6c(0x42,1);
  local_1c = FUN_00500f6c(8,1);
  local_18 = FUN_00500f40(0xd,0,1);
  local_14 = FUN_00500f40(0x2e,0,1);
  FUN_00501e18((int)local_8,&local_7c,0x1a);
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_ffffff74;
  }
  return local_8;
}

