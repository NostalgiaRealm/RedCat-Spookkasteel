/*
 * FUN_004b70d4 at 004b70d4
 * undefined __register FUN_004b70d4(int * param_1, char param_2, int * param_3, int param_4)
 * Address ranges: 004b70d4-004b713c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b70d4(int *param_1,char param_2,int *param_3,int param_4)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  int *local_8;
  
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x4b70e6;
    local_8 = param_3;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStackY_24 = (undefined1 *)0x4b70f5;
  local_8 = param_3;
  FUN_00406b00(param_3);
  puStackY_28 = &LAB_004b713d;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_00403064(param_1,'\0',extraout_ECX_00);
  FUN_004b6e60();
  FUN_00406ab8(param_1 + 3,local_8);
  FUN_004b6e4c();
  param_1[1] = param_4;
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_004b7144;
  puStackY_28 = (undefined1 *)0x4b713c;
  FUN_00406aa0((int *)&local_8);
  return;
}

