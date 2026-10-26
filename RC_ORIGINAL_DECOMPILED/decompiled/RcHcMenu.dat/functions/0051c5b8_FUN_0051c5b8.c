/*
 * FUN_0051c5b8 at 0051c5b8
 * undefined __register FUN_0051c5b8(int * param_1, char param_2, int * param_3)
 * Address ranges: 0051c5b8-0051c701
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c5b8(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_144;
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  undefined1 *puStackY_130;
  undefined4 in_stack_fffffed4;
  undefined4 in_stack_fffffed8;
  byte local_118 [256];
  int local_18;
  int local_14;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_14 = 0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_130 = (undefined1 *)0x51c5d6;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_134 = &LAB_0051c702;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_0045b418(param_1,'\0',param_3);
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStackY_144 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  *(undefined1 *)(local_8 + 1) = 0;
  *(undefined1 *)((int)local_8 + 5) = 1;
  *(undefined1 *)((int)local_8 + 6) = 1;
  *(undefined1 *)((int)local_8 + 7) = 1;
  *(undefined1 *)(local_8 + 2) = 0;
  local_8[0xf] = (int)local_10;
  *(undefined1 *)((int)local_8 + 0x25) = 0;
  local_8[4] = 2;
  *(undefined1 *)(local_8 + 9) = 0;
  FUN_00403db0(local_8 + 10);
  *(undefined1 *)(local_8 + 0xc) = 1;
  iVar1 = FUN_0051e1b8(local_10);
  local_8[0xd] = *(int *)(iVar1 + 0x204);
  piVar2 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_00);
  local_8[3] = (int)piVar2;
  iVar1 = FUN_0051e1b8(local_10);
  (**(code **)(*(int *)local_8[3] + 8))((int *)local_8[3],*(undefined4 *)(iVar1 + 0x58));
  (**(code **)(*(int *)local_8[0xf] + 0xc0))();
  *in_FS_OFFSET = pcStackY_144;
  FUN_00403dd4(&local_18,2);
  return;
}

