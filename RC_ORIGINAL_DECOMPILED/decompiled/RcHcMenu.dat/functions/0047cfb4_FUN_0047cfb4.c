/*
 * FUN_0047cfb4 at 0047cfb4
 * undefined __register FUN_0047cfb4(uint * param_1, int * param_2, int * param_3, char param_4)
 * Address ranges: 0047cfb4-0047d0ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047cfb4(uint *param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  undefined1 local_5;
  
  puStack_24 = &stack0xfffffffc;
  local_14 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_28 = &LAB_0047d0d0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_30 = (undefined1 *)0x47cfed;
  local_c = (int *)FUN_00449cd0((int *)&PTR_FUN_0047cdd0,'\x01',*(undefined4 *)PTR_DAT_005723fc);
  puStack_34 = &LAB_0047d0ae;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_00432744(local_c[0xb6],param_1);
  FUN_00432744(local_c[0xbe],(uint *)*param_2);
  local_5 = 0;
  if (param_4 == '\0') {
    if (*param_2 == 0) {
      FUN_0044c24c(local_c,(int *)local_c[0xbe],extraout_ECX);
    }
  }
  else {
    (**(code **)(*(int *)local_c[0xbe] + 0x5c))((int *)local_c[0xbe],0);
  }
  iVar1 = (**(code **)(*local_c + 0xd8))();
  if (iVar1 == 1) {
    FUN_00432714(local_c[0xbe],(int *)&local_10);
    FUN_00403e04(param_2,local_10);
    FUN_00432714(local_c[0xbd],(int *)&local_14);
    FUN_00403e04(param_3,local_14);
    local_5 = 1;
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0047d0b5;
  puStack_34 = (undefined1 *)0x47d0ad;
  FUN_00403094(local_c);
  return;
}

