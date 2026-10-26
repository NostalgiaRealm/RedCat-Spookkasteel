/*
 * FUN_005233ac at 005233ac
 * undefined __register FUN_005233ac(int * param_1, char param_2, int * param_3)
 * Address ranges: 005233ac-005234c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005233ac(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_ECX_02;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
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
    puStackY_130 = (undefined1 *)0x5233ca;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_134 = &LAB_005234c8;
  uStackY_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_138;
  puStackY_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004ef330(param_1,'\0',param_3);
  uVar2 = extraout_ECX_00;
  uVar3 = extraout_EDX;
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStackY_144 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    uVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_00;
  }
  FUN_00431d2c(local_8,CONCAT31((int3)((uint)uVar3 >> 8),5),uVar2);
  FUN_004ef400((int)local_8,'\0');
  FUN_004328a0((int)local_8,local_10[0x18]);
  local_8[0x85] = 0;
  local_8[0x86] = -1;
  piVar1 = FUN_00516260((int *)&DAT_005159ac,'\x01',extraout_ECX_02);
  local_8[0x82] = (int)piVar1;
  local_8[0x84] = 0;
  local_8[0x81] = 0;
  FUN_00438bb4((int)local_8,'\0');
  *in_FS_OFFSET = pcStackY_144;
  FUN_00403dd4(&local_18,2);
  return;
}

