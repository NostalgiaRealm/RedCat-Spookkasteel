/*
 * FUN_005040c8 at 005040c8
 * int * __register FUN_005040c8(int * param_1, char param_2, int * param_3)
 * Address ranges: 005040c8-005041ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005040c8(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffc8;
  undefined4 in_stack_ffffffcc;
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
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffc8,in_stack_ffffffcc);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  local_10 = param_3;
  local_8 = param_1;
  FUN_00501218(param_1,'\0',param_3);
  local_8[0x9e] = 8;
  local_8[0x96] = 0;
  local_28 = FUN_00500f40(0x21,4,1);
  local_24 = FUN_00500f40(0x22,4,1);
  local_20 = FUN_00500f40(0x21,0,1);
  local_1c = FUN_00500f40(0x22,0,1);
  local_18 = FUN_00500f40(0x26,0,0);
  local_14 = FUN_00500f40(0x28,0,0);
  FUN_00501e18((int)local_8,&local_28,5);
  if (local_9 != '\0') {
    FUN_0040342c(local_8);
    *in_FS_OFFSET = in_stack_ffffffc8;
  }
  return local_8;
}

