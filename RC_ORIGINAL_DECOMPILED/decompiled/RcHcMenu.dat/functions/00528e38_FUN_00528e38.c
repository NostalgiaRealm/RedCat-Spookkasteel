/*
 * FUN_00528e38 at 00528e38
 * undefined __register FUN_00528e38(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00528e38-00528f9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00528e38(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 *in_FS_OFFSET;
  code *pcVar4;
  int *piVar5;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  uVar3 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_00528f9d;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0xa4] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
    param_3 = extraout_ECX;
    uVar3 = extraout_EDX;
    puVar1 = puStack_114;
  }
  puStack_114 = puVar1;
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x50),uVar3,param_3,FUN_005291c4,local_8);
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x54),extraout_EDX_00,extraout_ECX_00,&LAB_00529048,local_8
              );
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x74),extraout_EDX_01,extraout_ECX_01,&LAB_00529074,local_8
              );
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x7c),extraout_EDX_02,extraout_ECX_02,FUN_00529120,local_8)
  ;
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x58),extraout_EDX_03,extraout_ECX_03,&LAB_00529090,local_8
              );
  FUN_0045e42c(*(int **)(local_8[0xa4] + 0x5c),extraout_EDX_04,extraout_ECX_04,&LAB_0052901c,local_8
              );
  FUN_0045e42c(*(int **)(local_8[0xa4] + 100),extraout_EDX_05,extraout_ECX_05,&LAB_005290bc,local_8)
  ;
  pcVar4 = FUN_005290f4;
  piVar5 = local_8;
  piVar2 = (int *)FUN_00549ff8(local_8[0xa4]);
  FUN_0045e42c(piVar2,extraout_EDX_06,extraout_ECX_06,pcVar4,piVar5);
  *in_FS_OFFSET = pcVar4;
  FUN_00403dd4(&local_10,2);
  return;
}

