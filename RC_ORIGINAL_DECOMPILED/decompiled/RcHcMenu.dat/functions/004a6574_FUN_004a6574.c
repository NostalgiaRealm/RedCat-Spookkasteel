/*
 * FUN_004a6574 at 004a6574
 * undefined __register FUN_004a6574(int * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 004a6574-004a6723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a6574(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  int iStackY_174;
  char *pcVar3;
  int iStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_138 [3];
  byte local_12c [256];
  int local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_138[0] = 0;
  local_138[2] = 0;
  local_138[1] = 0;
  local_28 = 0;
  local_2c = 0;
  puStack_140 = (undefined1 *)0x4a65a9;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_144 = &LAB_004a6724;
  iStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_148;
  local_24 = local_c;
  local_20 = 0xb;
  puStack_140 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_12c);
  FUN_00403fd4(&local_2c,local_12c);
  pcVar3 = "GetWav";
  FUN_004040f0(&local_28,3);
  iVar1 = local_28;
  uVar2 = FUN_004a418c();
  FUN_004a474c(uVar2,iVar1,0,(int)pcVar3);
  if (local_10 == 0) {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(local_138 + 1,local_12c);
    FUN_004040f0(local_138 + 2,4);
    FUN_00403d94(local_138[2]);
  }
  FUN_004041f4((undefined *)local_c);
  iStackY_174 = xvga_src_fopen();
  local_14 = iStackY_174;
  if (iStackY_174 == 0) {
    FUN_0040407c(local_138,(undefined4 *)"failed: GetWav : ",local_c);
    iStackY_174 = 0x4a66e7;
    FUN_00403d94(local_138[0]);
  }
  else {
    local_1c = xvga_get_filehandle();
    local_18 = (int *)FUN_00414988((int *)&PTR_FUN_00410e10,'\x01',local_1c);
    FUN_004980dc(local_10,local_18);
    FUN_00403094(local_18);
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = iStackY_174;
  FUN_00403dd4(local_138,3);
  FUN_00403dd4(&local_2c,2);
  FUN_00403db0((int *)&local_c);
  return;
}

