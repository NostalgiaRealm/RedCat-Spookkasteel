/*
 * FUN_00523240 at 00523240
 * undefined __register FUN_00523240(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00523240-00523333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523240(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint3 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  char local_9;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_9 = (char)param_2;
  puStack_124 = &LAB_00523334;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  uVar1 = (uint3)((uint)param_2 >> 8);
  local_10 = param_3;
  local_8 = param_1;
  if (local_9 == '\0') {
    (**(code **)(*(int *)param_1[0x9d] + 0xbc))((int *)param_1[0x9d],(uint)uVar1 << 8,param_3);
  }
  else if (local_9 == '\x01') {
    puStack_120 = &stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x9d] + 0xbc))((int *)param_1[0x9d],CONCAT31(uVar1,1),param_3);
  }
  else if (local_9 == '\x02') {
    puStack_120 = &stack0xfffffffc;
    (**(code **)(*(int *)param_1[0x9d] + 0xbc))((int *)param_1[0x9d],CONCAT31(uVar1,4),param_3);
  }
  else {
    puStack_120 = &stack0xfffffffc;
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = " Unhandled case-part";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

