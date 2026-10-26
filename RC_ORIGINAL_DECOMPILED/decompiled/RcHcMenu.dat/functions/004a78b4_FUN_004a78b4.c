/*
 * FUN_004a78b4 at 004a78b4
 * undefined __register FUN_004a78b4(int * param_1, char param_2, int param_3, undefined4 * param_4)
 * Address ranges: 004a78b4-004a7991
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a78b4(int *param_1,char param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x4a78d2;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_130 = (undefined1 *)0x4a78e3;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_4);
  puStackY_134 = &LAB_004a7992;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  if (local_10 == 0) {
    FUN_00403d94("aResourceManager  =  nil");
  }
  local_8[1] = local_10;
  FUN_00403e04(local_8 + 2,param_4);
  *in_FS_OFFSET = "Create";
  FUN_00403dd4(&local_18,2);
  FUN_00403db0((int *)&param_4);
  return;
}

