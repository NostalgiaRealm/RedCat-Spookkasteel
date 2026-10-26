/*
 * FUN_0054feb0 at 0054feb0
 * undefined __register FUN_0054feb0(int * param_1, int param_2)
 * Address ranges: 0054feb0-0054ff8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054feb0(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_FS_OFFSET;
  char *pcVar4;
  int iStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_124 = &LAB_0054ff90;
  iStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_128;
  local_10 = 0;
  local_14 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  FUN_00403fd4(&local_1c,local_11c);
  pcVar4 = "SetMusicVolume";
  FUN_004040f0(&local_18,3);
  iVar3 = local_18;
  uVar1 = FUN_004a418c();
  FUN_004a474c(uVar1,iVar3,0,(int)pcVar4);
  uVar2 = FUN_0054fda0();
  if (((char)uVar2 != '\0') && (local_8[6] != 0)) {
    iVar3 = FUN_004a418c();
    FUN_004a4bf4(iVar3,0x54ffcc);
    FUN_004b01ec(local_c);
    (**(code **)(*(int *)local_8[6] + 0x3c))();
  }
  uVar1 = FUN_004a418c();
  FUN_004a49b0(uVar1);
  *in_FS_OFFSET = (int)pcVar4;
  FUN_00403dd4(&local_1c,2);
  return;
}

