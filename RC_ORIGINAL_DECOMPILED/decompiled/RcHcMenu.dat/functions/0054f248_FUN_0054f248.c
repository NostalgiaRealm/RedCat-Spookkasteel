/*
 * FUN_0054f248 at 0054f248
 * undefined __register FUN_0054f248(int * param_1, char param_2, int param_3, int * param_4, undefined4 * param_5)
 * Address ranges: 0054f248-0054f34e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f248(int *param_1,char param_2,int param_3,int *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
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
    puStackY_130 = (undefined1 *)0x54f266;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_130 = (undefined1 *)0x54f277;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_5);
  puStackY_134 = &LAB_0054f34f;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_004a83e4(param_4);
  local_8[5] = local_10;
  FUN_00403e04(local_8 + 3,param_5);
  piVar3 = FUN_00497cc0((int *)&PTR_FUN_00497c2c,'\x01',(int *)0x0);
  local_8[4] = (int)piVar3;
  iVar4 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  local_8[7] = iVar4;
  FUN_00403db0(local_8 + 9);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403dd4(&local_18,2);
  FUN_00403db0((int *)&param_5);
  return;
}

