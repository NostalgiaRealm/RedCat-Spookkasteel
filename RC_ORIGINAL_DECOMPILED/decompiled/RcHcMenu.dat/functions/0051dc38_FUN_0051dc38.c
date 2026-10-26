/*
 * FUN_0051dc38 at 0051dc38
 * undefined __register FUN_0051dc38(int * param_1, char param_2, int * param_3)
 * Address ranges: 0051dc38-0051de51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051dc38(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  HCURSOR pHVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcStack_144;
  undefined4 uStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
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
    puStack_130 = (undefined1 *)0x51dc56;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffed4,in_stack_fffffed8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_134 = &LAB_0051de52;
  uStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_138;
  puStack_130 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004ef330(param_1,'\0',param_3);
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_144 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  local_8[0x9d] = (int)piVar1;
  piVar1 = FUN_0051d7c8((int *)&PTR_FUN_0051b73c,'\x01',(int *)0x0);
  local_8[0x80] = (int)piVar1;
  local_8[0x81] = -1;
  piVar1 = FUN_0051d644((int *)&PTR_FUN_0051b5f4,'\x01',(int *)0x0);
  local_8[0x82] = (int)piVar1;
  local_8[0x83] = 0;
  local_8[0x85] = 0;
  piVar1 = FUN_0044553c((int *)&PTR_FUN_004404a0,'\x01',local_8);
  local_8[0x88] = (int)piVar1;
  local_8[0x90] = 0;
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',CONCAT31((int3)((uint)extraout_ECX_00 >> 8),1));
  local_8[0x9e] = (int)piVar1;
  *(undefined1 *)(local_8 + 0x94) = 0;
  FUN_00431d2c(local_8,CONCAT31((int3)((uint)local_8 >> 8),1),extraout_ECX_01);
  FUN_004ef400((int)local_8,'\0');
  FUN_004328a0((int)local_8,local_10[0x84]);
  FUN_00431f98(local_8,local_10[0x82]);
  FUN_004328c4((int)local_8,'\0');
  FUN_00438bb4((int)local_8,'\0');
  *(undefined1 *)(local_8 + 0x9c) = 0;
  FUN_0051dfa8((int)local_8);
  pHVar2 = LoadCursorA(DAT_005734dc,"COL_MOVE");
  FUN_0044f670(*(int *)PTR_DAT_005725f0,0x2a,(int)pHVar2);
  FUN_0043262c((int *)local_8[0x80],0,extraout_ECX_02);
  (**(code **)(*(int *)local_8[0x80] + 0x60))((int *)local_8[0x80],local_8);
  FUN_0043262c((int *)local_8[0x82],0,extraout_ECX_03);
  (**(code **)(*(int *)local_8[0x82] + 0x60))((int *)local_8[0x82],local_8);
  *in_FS_OFFSET = pcStack_144;
  FUN_00403dd4(&local_18,2);
  return;
}

