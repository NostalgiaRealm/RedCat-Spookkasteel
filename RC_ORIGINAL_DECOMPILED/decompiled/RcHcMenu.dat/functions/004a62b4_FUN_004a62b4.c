/*
 * FUN_004a62b4 at 004a62b4
 * undefined __register FUN_004a62b4(int * param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004a62b4-004a64b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a62b4(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  int local_138 [5];
  byte local_124 [256];
  int local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_138[0] = 0;
  local_138[2] = 0;
  local_138[1] = 0;
  local_138[4] = 0;
  local_138[3] = 0;
  local_20 = (undefined4 *)0x0;
  local_24 = 0;
  puStack_140 = (undefined1 *)0x4a62f5;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_144 = &LAB_004a64b7;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_140 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_124);
  FUN_00403fd4(&local_24,local_124);
  FUN_004040f0((int *)&local_20,3);
  puVar1 = local_20;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  if (local_8 == (int *)0x0) {
    FUN_00402fe0(iRam00000000,local_124);
    FUN_00403fd4(local_138 + 3,local_124);
    FUN_004040f0(local_138 + 4,4);
    FUN_00403d94(local_138[4]);
  }
  if (local_10 == (int *)0x0) {
    FUN_00402fe0(*local_8,local_124);
    FUN_00403fd4(local_138 + 1,local_124);
    FUN_004040f0(local_138 + 2,4);
    FUN_00403d94(local_138[2]);
  }
  puVar3 = FUN_004041f4((undefined *)local_c);
  iVar4 = xvga_src_fopen();
  local_14 = iVar4;
  if (iVar4 == 0) {
    FUN_0040407c(local_138,(undefined4 *)"failed: LoadBitmapFromResource : ",local_c);
    FUN_00403d94(local_138[0]);
  }
  else {
    local_1c = xvga_get_filehandle();
    local_18 = (int *)FUN_00414988((int *)&PTR_FUN_00410e10,'\x01',local_1c);
    (**(code **)(*local_10 + 0x50))(local_10,local_18,*local_10,iVar4);
    FUN_00403094(local_18);
  }
  *in_FS_OFFSET = puVar3;
  FUN_00403dd4(local_138,5);
  FUN_00403dd4(&local_24,2);
  FUN_00403db0((int *)&local_c);
  return;
}

