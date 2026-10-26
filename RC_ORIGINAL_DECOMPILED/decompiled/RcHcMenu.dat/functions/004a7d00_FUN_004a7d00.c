/*
 * FUN_004a7d00 at 004a7d00
 * undefined __register FUN_004a7d00(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004a7d00-004a7eb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a7d00(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStackY_168;
  char *pcVar4;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_134;
  int local_130 [3];
  byte local_124 [256];
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 local_18;
  undefined1 local_11;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  local_130[0] = 0;
  local_134 = 0;
  local_130[2] = 0;
  local_130[1] = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_13c = (undefined1 *)0x4a7d3b;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_140 = &LAB_004a7eb9;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_1c = local_10;
  local_18 = 0xb;
  puStack_13c = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_124);
  FUN_00403fd4(&local_24,local_124);
  pcVar4 = "GetImgBitmapFromFile";
  FUN_004040f0(&local_20,3);
  iVar1 = local_20;
  uVar2 = FUN_004a418c();
  FUN_004a474c(uVar2,iVar1,2,(int)pcVar4);
  if (local_8 == (int *)0x0) {
    FUN_00402fe0(iRam00000000,local_124);
    FUN_00403fd4(local_130 + 1,local_124);
    pcStackY_168 = " Self = nil";
    FUN_004040f0(local_130 + 2,4);
    FUN_00403d94(local_130[2]);
  }
  if (local_c == 0) {
    FUN_00402fe0(*local_8,local_124);
    FUN_00403fd4(&local_134,local_124);
    FUN_004040f0(local_130,4);
    FUN_00403d94(local_130[0]);
  }
  piVar3 = (int *)FUN_0041eef0(*(int **)(local_c + 0x128));
  local_11 = FUN_004a7a30(local_8,local_10,piVar3);
  *in_FS_OFFSET = pcStackY_168;
  FUN_00403dd4(&local_134,4);
  FUN_00403dd4(&local_24,2);
  FUN_00403db0((int *)&local_10);
  return;
}

