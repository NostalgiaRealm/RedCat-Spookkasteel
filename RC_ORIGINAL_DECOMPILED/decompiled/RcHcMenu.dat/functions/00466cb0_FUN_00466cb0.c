/*
 * FUN_00466cb0 at 00466cb0
 * undefined __register FUN_00466cb0(int * param_1, char param_2, undefined4 * param_3, int param_4, int param_5, int param_6, undefined4 * param_7)
 * Address ranges: 00466cb0-00466d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00466cb0(int *param_1,char param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                 undefined4 *param_7)

{
  undefined4 *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *local_8;
  
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x466cc2;
    local_8 = param_3;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
  }
  puStackY_24 = (undefined1 *)0x466cd1;
  local_8 = param_3;
  FUN_004041e4((int)param_3);
  puStackY_24 = (undefined1 *)0x466cd9;
  FUN_004041e4((int)param_7);
  puStackY_28 = &LAB_00466d2e;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_00403e04(param_1 + 5,param_7);
  param_1[3] = param_6;
  param_1[4] = param_5;
  param_1[6] = param_4;
  FUN_0040ceec(param_1,'\0',local_8);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_00466d35;
  puStackY_28 = (undefined1 *)0x466d25;
  FUN_00403db0((int *)&local_8);
  puStackY_28 = (undefined1 *)0x466d2d;
  FUN_00403db0((int *)&param_7);
  return;
}

