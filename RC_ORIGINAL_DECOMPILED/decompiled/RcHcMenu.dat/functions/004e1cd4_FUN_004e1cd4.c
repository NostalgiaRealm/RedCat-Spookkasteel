/*
 * FUN_004e1cd4 at 004e1cd4
 * undefined __register FUN_004e1cd4(int * param_1, uint * param_2, int param_3, int param_4, int param_5, char param_6)
 * Address ranges: 004e1cd4-004e1e00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1cd4(int *param_1,uint *param_2,int param_3,int param_4,int param_5,char param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int local_10;
  uint *local_c;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x4e1ceb;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_1c = &LAB_004e1e01;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00432c38(local_8);
  local_14 = FUN_004d8590((int *)&PTR_FUN_004d7f34,'\x01',local_8);
  (**(code **)(*local_14 + 0x60))(local_14,local_8);
  FUN_00431f54(local_14,local_8[0xc0]);
  FUN_00431f34(local_14,6);
  (**(code **)(*local_14 + 0x8c))(local_14,0);
  FUN_00429308(local_14,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX);
  FUN_00432744((int)local_14,local_c);
  uVar1 = FUN_00432178(local_8);
  iVar3 = uVar1 - 0xc;
  if (SBORROW4(uVar1,0xc)) {
    thunk_FUN_00402874(uVar1);
    iVar3 = extraout_EDX_00;
  }
  FUN_00431f78(local_14,iVar3);
  (**(code **)(*local_14 + 0x8c))(local_14,1);
  local_14[3] = local_10;
  FUN_0041bb48((int *)local_14[0x16],0x1f0674,extraout_ECX_00);
  if (param_6 == '\0') {
    (**(code **)(*local_14 + 0x5c))(local_14,0);
  }
  local_14[0x42] = param_4;
  local_14[0x43] = param_5;
  uVar1 = local_14[0xd] + local_14[0xf];
  if (SCARRY4(local_14[0xd],local_14[0xf])) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 + 6;
  if (SCARRY4(uVar1,6)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  local_8[0xc0] = uVar2;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004e1e08;
  puStack_1c = (undefined1 *)0x4e1e00;
  FUN_00403db0((int *)&local_c);
  return;
}

