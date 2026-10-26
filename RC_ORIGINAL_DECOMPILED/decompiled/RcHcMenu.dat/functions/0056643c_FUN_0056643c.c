/*
 * FUN_0056643c at 0056643c
 * undefined __register FUN_0056643c(int * param_1, char param_2, undefined4 * param_3, int param_4)
 * Address ranges: 0056643c-00566562
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056643c(int *param_1,char param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  int *in_FS_OFFSET;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  int iStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 in_stack_fffffec4;
  undefined4 in_stack_fffffec8;
  byte local_128 [256];
  int local_28;
  int local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_24 = 0;
  local_28 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_140 = (undefined1 *)0x56645a;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffec4,in_stack_fffffec8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_140 = (undefined1 *)0x56646b;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_144 = &LAB_00566563;
  iStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_148;
  local_20 = local_10;
  local_1c = 0xb;
  local_18 = param_4;
  local_14 = 0;
  puStack_140 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_128);
  FUN_00403fd4(&local_28,local_128);
  puVar4 = &DAT_00566594;
  pcVar3 = "CreateNewPlayer";
  iVar5 = local_28;
  FUN_004040f0(&local_24,3);
  iVar1 = local_24;
  uVar2 = FUN_004a418c();
  FUN_004a474c(uVar2,iVar1,0,(int)pcVar3);
  (**(code **)(*local_8 + 4))(local_8,0,*local_8,pcVar3,puVar4,iVar5);
  FUN_0040400c(local_128,local_10,0xff);
  FUN_005659c4((int)local_8,local_128);
  *(undefined1 *)(local_8 + 5) = 1;
  local_8[7] = param_4;
  (**(code **)(*(int *)local_8[4] + 0xc))
            ((int *)local_8[4],*(undefined4 *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 8));
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403dd4(&local_28,2);
  FUN_00403db0((int *)&local_10);
  return;
}

