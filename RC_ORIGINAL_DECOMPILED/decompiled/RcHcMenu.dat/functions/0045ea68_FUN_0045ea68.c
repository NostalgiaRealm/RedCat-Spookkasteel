/*
 * FUN_0045ea68 at 0045ea68
 * undefined __register FUN_0045ea68(int * param_1, char param_2, undefined4 * param_3, int param_4, undefined4 * param_5, undefined4 * param_6, DWORD param_7)
 * Address ranges: 0045ea68-0045ead9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045ea68(int *param_1,char param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                 undefined4 *param_6,DWORD param_7)

{
  undefined4 *extraout_ECX;
  int *in_FS_OFFSET;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  int local_8;
  
  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x45ea7c;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0045eada;
  puStack_30 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0045e948(param_3,&local_8);
  FUN_0045e998(param_1,'\0',local_8,param_4,param_7);
  FUN_00403e04(param_1 + 4,param_6);
  FUN_00403e04(param_1 + 5,param_5);
  *in_FS_OFFSET = param_4;
  puStack_30 = &LAB_0045eae1;
  FUN_00403db0(&local_8);
  return;
}

