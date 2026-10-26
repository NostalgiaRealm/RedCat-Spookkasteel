/*
 * FUN_004b2ca8 at 004b2ca8
 * undefined __register FUN_004b2ca8(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 004b2ca8-004b2d06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b2ca8(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x4b2cba;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_24 = (undefined1 *)0x4b2ccb;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStackY_28 = &LAB_004b2d07;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  FUN_00403e04(local_8 + 1,local_10);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_004b2d0e;
  puStackY_28 = (undefined1 *)0x4b2d06;
  FUN_00403db0((int *)&local_10);
  return;
}

