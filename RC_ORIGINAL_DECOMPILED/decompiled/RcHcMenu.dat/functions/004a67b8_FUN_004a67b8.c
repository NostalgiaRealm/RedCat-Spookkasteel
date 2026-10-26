/*
 * FUN_004a67b8 at 004a67b8
 * undefined __register FUN_004a67b8(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 004a67b8-004a68c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a67b8(int *param_1,char param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_140;
  undefined1 *puStackY_13c;
  undefined1 *puStackY_138;
  undefined4 in_stack_fffffecc;
  undefined4 in_stack_fffffed0;
  undefined *local_120;
  undefined *local_11c;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_11c = (undefined *)0x0;
  local_120 = (undefined *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_138 = (undefined1 *)0x4a67e2;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_fffffecc,in_stack_fffffed0);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_138 = (undefined1 *)0x4a67f3;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStackY_13c = &LAB_004a68c6;
  uStackY_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_140;
  puStackY_138 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0((int *)&local_14,3);
  puVar1 = local_14;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  FUN_00403064(local_8,'\0',extraout_ECX_00);
  FUN_0040407c((int *)&local_11c,local_10,(undefined4 *)&DAT_004a6918);
  FUN_004041f4(local_11c);
  FUN_0040407c((int *)&local_120,local_10,(undefined4 *)&DAT_004a6928);
  puVar3 = FUN_004041f4(local_120);
  xvga_init_fileio();
  *in_FS_OFFSET = puVar3;
  FUN_00403dd4((int *)&local_120,2);
  FUN_00403dd4(&local_18,3);
  return;
}

