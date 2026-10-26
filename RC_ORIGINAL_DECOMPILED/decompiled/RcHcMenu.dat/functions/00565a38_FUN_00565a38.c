/*
 * FUN_00565a38 at 00565a38
 * undefined __register FUN_00565a38(int * param_1, char param_2)
 * Address ranges: 00565a38-00565b36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00565a38(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_130;
  undefined1 *puStackY_12c;
  undefined1 *puStackY_128;
  undefined4 in_stack_fffffedc;
  undefined4 in_stack_fffffee0;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_128 = (undefined1 *)0x565a55;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
    local_9 = extraout_DL;
  }
  puStackY_12c = &LAB_00565b37;
  uStackY_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_130;
  puStackY_128 = &stack0xfffffffc;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  FUN_004a3bec(local_8,'\0',extraout_ECX);
  piVar3 = FUN_005501c0((int *)&PTR_FUN_00550198,'\x01',(int)local_8);
  local_8[2] = (int)piVar3;
  piVar3 = FUN_00565524((int *)&LAB_005654fc,'\x01',extraout_ECX_00);
  local_8[3] = (int)piVar3;
  piVar3 = FUN_00565524((int *)&LAB_005654fc,'\x01',extraout_ECX_01);
  local_8[6] = (int)piVar3;
  iVar4 = FUN_0056ab14((int *)&PTR_FUN_0056aa80,'\x01');
  local_8[4] = iVar4;
  *(undefined1 *)(local_8 + 5) = 1;
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403dd4(&local_14,2);
  return;
}

