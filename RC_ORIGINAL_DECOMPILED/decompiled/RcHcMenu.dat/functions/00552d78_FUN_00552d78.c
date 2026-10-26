/*
 * FUN_00552d78 at 00552d78
 * undefined __register FUN_00552d78(int * param_1, undefined4 param_2)
 * Address ranges: 00552d78-00552f92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00552d78(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_EDX;
  int iVar5;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  byte local_218 [256];
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_220 = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_224 = &LAB_00552f93;
  uStack_228 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_228;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar8 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar8,0);
  *(undefined1 *)(local_8 + 0x7a) = 1;
  local_8[0xbf] = 0;
  uVar9 = 800;
  uVar7 = 600;
  iVar3 = FUN_0044f0b4();
  uVar2 = iVar3 - 600;
  if (SBORROW4(iVar3,600)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  iVar3 = (int)uVar2 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 & 1) != 0);
  }
  uVar4 = FUN_0044f0c0();
  uVar2 = uVar4 - 800;
  if (SBORROW4(uVar4,800)) {
    thunk_FUN_00402874(uVar4);
    uVar2 = extraout_EDX;
  }
  iVar5 = (int)uVar2 >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar2 & 1) != 0);
  }
  (**(code **)(*local_8 + 0x7c))(local_8,iVar5,iVar3,uVar7,uVar9);
  FUN_00431d2c((int *)local_8[0xb4],CONCAT31((int3)((uint)extraout_EDX_00 >> 8),5),extraout_ECX);
  FUN_00431d2c((int *)local_8[0xbb],CONCAT31((int3)((uint)extraout_EDX_01 >> 8),5),extraout_ECX_00);
  (**(code **)(**(int **)(local_8[0xbb] + 300) + 8))
            (*(int **)(local_8[0xbb] + 300),*(undefined4 *)(*(int *)PTR_DAT_00572108 + 0xf8));
  (**(code **)(*(int *)local_8[0xbb] + 0x98))((int *)local_8[0xbb],1);
  FUN_005535d0(local_8);
  pbVar6 = local_114;
  FUN_00402fe0(*local_8,local_218);
  FUN_004028e8(local_218,5,8,pbVar6);
  FUN_00403fd4((int *)&local_118,local_114);
  cVar1 = FUN_004a7d00(*(int **)(*(int *)PTR_DAT_00572108 + 0x10c),local_8[0xb4],local_118);
  uVar9 = extraout_EDX_02;
  if (cVar1 == '\0') {
    FUN_004a7d00(*(int **)(*(int *)PTR_DAT_00572108 + 0x10c),local_8[0xb4],(undefined4 *)"currentc")
    ;
    uVar9 = extraout_EDX_03;
  }
  (**(code **)(*(int *)local_8[0xb6] + 0x5c))
            ((int *)local_8[0xb6],
             CONCAT31((int3)((uint)uVar9 >> 8),*(int *)(*(int *)PTR_DAT_00572108 + 0x114) == 0) ^ 1)
  ;
  FUN_00553710();
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = uVar7;
  FUN_00403db0((int *)&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

