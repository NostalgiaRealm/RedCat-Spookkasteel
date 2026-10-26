/*
 * FUN_00520fc8 at 00520fc8
 * undefined __register FUN_00520fc8(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00520fc8-0052107d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00520fc8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x520fe0;
  local_c = param_2;
  local_8 = param_1;
  local_10 = FUN_0041bea0((int *)&PTR_FUN_0041a5d0,'\x01',param_3);
  puStack_1c = &LAB_0052109b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_14 = (int *)local_8[0x7c];
  puStack_24 = (undefined1 *)0x52100b;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*local_10 + 8))(local_10,local_14[4]);
  puStack_28 = &LAB_0052107e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0041c110((int *)local_14[4],0);
  FUN_0041c0f4((int *)local_14[4],CONCAT31((int3)((uint)extraout_EDX >> 8),0xf),extraout_ECX);
  FUN_0041c140((int *)local_14[4],1);
  FUN_0041cad0(local_14,local_c,0);
  iVar1 = FUN_004321bc(local_8);
  FUN_0041ca70(local_14,local_c,iVar1);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00521085;
  puStack_28 = (undefined1 *)0x52107d;
  FUN_0041ce78((int)local_14);
  return;
}

