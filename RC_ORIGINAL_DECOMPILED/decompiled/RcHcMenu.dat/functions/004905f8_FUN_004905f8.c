/*
 * FUN_004905f8 at 004905f8
 * undefined __register FUN_004905f8(int * param_1, char param_2, undefined4 * param_3, int param_4, int * param_5, undefined4 * param_6, int param_7, undefined4 * param_8)
 * Address ranges: 004905f8-004906f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004905f8(int *param_1,char param_2,undefined4 *param_3,int param_4,int *param_5,
                 undefined4 *param_6,int param_7,undefined4 *param_8)

{
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x490613;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_34 = &LAB_004906f9;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  if (param_5 == (int *)0x0) {
    puStack_30 = &stack0xfffffffc;
    FUN_00403d94("Assertion failure");
  }
  FUN_00403e48(&local_18,(int)param_6);
  if (local_18 == 0) {
    FUN_00403e48(&local_18,param_7);
  }
  FUN_00494858(param_5);
  FUN_004040f0((int *)&local_14,3);
  if (param_4 != 0) {
    FUN_00496d84(param_4);
    FUN_004040f0((int *)&local_14,3);
  }
  FUN_00404038((int *)&local_14,(undefined4 *)&LAB_00490784);
  FUN_0045b554(local_8,'\0',local_10,param_6,local_14,param_8);
  local_8[8] = (int)param_5;
  local_8[9] = param_4;
  *in_FS_OFFSET = param_6;
  FUN_00403dd4(&local_18,2);
  return;
}

