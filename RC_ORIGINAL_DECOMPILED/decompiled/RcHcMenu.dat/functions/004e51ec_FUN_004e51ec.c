/*
 * FUN_004e51ec at 004e51ec
 * undefined __register FUN_004e51ec(int * param_1, char param_2)
 * Address ranges: 004e51ec-004e5391
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e51ec(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_EDX;
  int *extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_124;
  int local_120 [3];
  byte local_114 [256];
  int local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  uVar2 = 0;
  local_120[0] = 0;
  local_124 = 0;
  local_120[2] = 0;
  local_120[1] = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_12c = &LAB_004e5392;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_9 = param_2;
  local_8 = param_1;
  if (param_1[0x22] != param_1[0x23]) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_13c = " Post-operation not at edit/insert-row";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    uVar2 = extraout_ECX;
    param_1 = extraout_EDX;
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  if ((char)local_8[0x10] == '\0') {
    if (local_9 == '\0') {
      FUN_00402fe0(*local_8,local_114);
      FUN_00403fd4(local_120 + 1,local_114);
      FUN_004040f0(local_120 + 2,3);
      FUN_00403d94(local_120[2]);
      uVar2 = extraout_ECX_00;
      param_1 = extraout_EDX_00;
    }
    FUN_004e510c((char)local_8[4],param_1,uVar2,(int)&stack0xfffffffc);
  }
  else if ((char)local_8[0x10] == '\x01') {
    if (local_9 != '\0') {
      FUN_004e510c('\0',param_1,uVar2,(int)&stack0xfffffffc);
    }
  }
  else {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_124,local_114);
    FUN_004040f0(local_120,3);
    FUN_00403d94(local_120[0]);
  }
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_124,4);
  FUN_00403dd4(&local_14,2);
  return;
}

