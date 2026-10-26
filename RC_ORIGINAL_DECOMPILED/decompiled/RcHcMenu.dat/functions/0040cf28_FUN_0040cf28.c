/*
 * FUN_0040cf28 at 0040cf28
 * undefined __register FUN_0040cf28(int param_1, char param_2, byte * param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0040cf28-0040cf81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040cf28(int param_1,char param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  byte *extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x40cf3c;
    param_1 = FUN_004033d4(param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0040cf82;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_0040a894(param_3,param_5,param_4,(int *)&local_8);
  FUN_00403e04((int *)(param_1 + 4),local_8);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0040cf89;
  puStack_2c = (undefined1 *)0x40cf81;
  FUN_00403db0((int *)&local_8);
  return;
}

