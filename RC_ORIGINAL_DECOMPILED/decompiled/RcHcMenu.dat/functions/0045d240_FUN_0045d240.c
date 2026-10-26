/*
 * FUN_0045d240 at 0045d240
 * undefined __register FUN_0045d240(int * param_1, char param_2, int param_3, int param_4)
 * Address ranges: 0045d240-0045d372
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045d240(int *param_1,char param_2,int param_3,int param_4)

{
  int *piVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 extraout_DL;
  int *in_FS_OFFSET;
  int in_stack_fffffea8;
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  undefined4 in_stack_fffffec0;
  undefined4 in_stack_fffffec4;
  int local_12c;
  undefined1 local_128;
  int local_124;
  undefined1 local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_11c = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_144 = (undefined1 *)0x45d264;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffec0,in_stack_fffffec4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_148 = &LAB_0045d373;
  iStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_14c;
  puStack_144 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  if (param_4 < 1) {
    puStack_144 = &stack0xfffffffc;
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    local_12c = local_10;
    local_128 = 0;
    local_124 = param_4;
    local_120 = 0;
    FUN_0040a894((byte *)" (%d, %d)",&local_12c,1,&local_11c);
    in_stack_fffffea8 = local_11c;
    FUN_004040f0((int *)&local_14,3);
    piVar1 = FUN_0040ceec((int *)&DAT_00410554,'\x01',local_14);
    FUN_0040382c(piVar1);
    param_3 = extraout_ECX_00;
  }
  FUN_0045b418(local_8,'\0',param_3);
  local_8[1] = 0;
  local_8[2] = 0;
  local_8[3] = local_10;
  local_8[5] = param_4;
  if (local_8[3] < 1) {
    local_8[3] = 10;
  }
  *in_FS_OFFSET = in_stack_fffffea8;
  FUN_00403db0(&local_11c);
  FUN_00403dd4(&local_18,2);
  return;
}

