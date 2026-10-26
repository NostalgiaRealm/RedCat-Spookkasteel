/*
 * FUN_004b593c at 004b593c
 * undefined __register FUN_004b593c(int * param_1, char param_2, undefined4 * param_3, undefined4 * param_4)
 * Address ranges: 004b593c-004b59b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b593c(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4)

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
    puStackY_24 = (undefined1 *)0x4b594e;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_24 = (undefined1 *)0x4b595f;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStackY_24 = (undefined1 *)0x4b5967;
  FUN_004041e4((int)param_4);
  puStackY_28 = &LAB_004b59b9;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_0045b418(local_8,'\0',extraout_ECX_00);
  FUN_00403e04(local_8 + 1,local_10);
  FUN_00403e04(local_8 + 2,param_4);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_004b59c0;
  puStackY_28 = (undefined1 *)0x4b59b0;
  FUN_00403db0((int *)&local_10);
  puStackY_28 = (undefined1 *)0x4b59b8;
  FUN_00403db0((int *)&param_4);
  return;
}

