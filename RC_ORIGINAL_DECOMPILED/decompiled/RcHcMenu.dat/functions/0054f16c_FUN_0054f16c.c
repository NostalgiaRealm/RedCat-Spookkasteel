/*
 * FUN_0054f16c at 0054f16c
 * undefined __register FUN_0054f16c(int * param_1, char param_2, int * param_3)
 * Address ranges: 0054f16c-0054f1ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f16c(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x54f17e;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_24 = (undefined1 *)0x54f18f;
  local_10 = param_3;
  local_8 = param_1;
  FUN_00406b00(param_3);
  puStackY_28 = &LAB_0054f1cb;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_00403064(local_8,'\0',extraout_ECX_00);
  FUN_00406ab8(local_8 + 1,local_10);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_0054f1d2;
  puStackY_28 = (undefined1 *)0x54f1ca;
  FUN_00406aa0((int *)&local_10);
  return;
}

