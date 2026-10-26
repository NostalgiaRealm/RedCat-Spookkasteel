/*
 * FUN_00536624 at 00536624
 * undefined __register FUN_00536624(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 00536624-0053674c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5361dc slot 2 for TAppOACLayOut. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5361dc slot 2 for
   TAppOACLayOut. Original bytes unchanged; names and types still inferred. */

void FUN_00536624(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_FS_OFFSET;
  int iVar4;
  undefined *puVar5;
  int iStack_138;
  undefined1 *puStack_134;
  undefined1 *puStack_130;
  int local_128;
  int local_124;
  undefined4 *local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_130 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  local_11c = 0;
  local_124 = 0;
  local_128 = 0;
  local_120 = (undefined4 *)0x0;
  puStack_134 = &LAB_0053674d;
  iStack_138 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_138;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_3,local_118);
  FUN_00403fd4(&local_18,local_118);
  puVar5 = &DAT_00536764;
  iVar2 = local_18;
  piVar1 = (int *)FUN_00495ee0(local_c);
  piVar1 = (int *)FUN_00494858(piVar1);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_120,*piVar1,puVar5,iVar2);
  FUN_00458ab0(local_120,&local_11c);
  iVar2 = FUN_00496d84(local_c);
  uVar3 = FUN_00458ab0(*(undefined4 **)(iVar2 + 0x1c),&local_124);
  puVar5 = &DAT_00536764;
  iVar4 = local_124;
  iVar2 = FUN_004aecac(uVar3);
  FUN_00409bd8(iVar2,&local_128);
  iVar2 = local_128;
  FUN_004040f0(&local_14,7);
  (**(code **)(*local_10 + 0x18))(local_10,local_14,*local_10,iVar2,puVar5,iVar4);
  FUN_00433700((int)local_10,0xc,0,&DAT_00536768);
  *in_FS_OFFSET = iVar2;
  FUN_00403dd4(&local_128,4);
  FUN_00403dd4(&local_18,2);
  return;
}

