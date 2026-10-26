/*
 * FUN_004818e8 at 004818e8
 * undefined __register FUN_004818e8(int * param_1, uint * param_2, int param_3)
 * Address ranges: 004818e8-00481989;004819a1-004819b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004818e8(int *param_1,uint *param_2,int param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int *local_c;
  
  puStack_20 = (undefined1 *)0x481905;
  FUN_00481830((int)param_1);
  puStack_24 = &LAB_004819b7;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  puStack_30 = &LAB_0048198a;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  puStack_20 = &stack0xfffffffc;
  local_c = (int *)FUN_00480b14((int)param_1,(undefined *)param_2,param_3);
  if (local_c == (int *)0x0) {
    local_c = FUN_00482744((int *)&PTR_FUN_0047d7a0,'\x01',param_1);
    FUN_004839cc(local_c,param_2);
    FUN_00483b78(local_c,(char)param_1[0x10]);
    *(undefined1 *)((int)local_c + 0x62) = 1;
  }
  FUN_0046717c(local_c);
  local_c[0x1b] = local_c[0x1b] + 1;
  *in_FS_OFFSET = uStack_34;
  *in_FS_OFFSET = local_28;
  puStack_20 = &LAB_004819be;
  puStack_24 = (undefined1 *)0x4819b6;
  FUN_00481854((int)param_1);
  return;
}

