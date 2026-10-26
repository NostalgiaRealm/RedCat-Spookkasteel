/*
 * FUN_0056ab14 at 0056ab14
 * undefined __register FUN_0056ab14(int * param_1, char param_2)
 * Address ranges: 0056ab14-0056abec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056ab14(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
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
    puStackY_128 = (undefined1 *)0x56ab31;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,0,in_stack_fffffedc,in_stack_fffffee0);
    local_9 = extraout_DL;
  }
  puStackY_12c = &LAB_0056abed;
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
  piVar3 = FUN_004a3bec((int *)&PTR_FUN_0056aaf0,'\x01',extraout_ECX_00);
  local_8[3] = (int)piVar3;
  FUN_0056b268((int)local_8,0x50);
  FUN_0056bb4c((int)local_8,0x50);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "Create";
  FUN_00403dd4(&local_14,2);
  return;
}

