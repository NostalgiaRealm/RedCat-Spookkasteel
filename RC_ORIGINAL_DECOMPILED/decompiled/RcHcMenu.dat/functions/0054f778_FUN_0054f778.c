/*
 * FUN_0054f778 at 0054f778
 * undefined __register FUN_0054f778(int * param_1, int param_2, int param_3, char param_4)
 * Address ranges: 0054f778-0054f915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f778(int *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  int *in_FS_OFFSET;
  char *pcVar3;
  int iStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  int local_13c;
  byte local_138 [256];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int local_28;
  undefined1 local_24;
  char local_20;
  undefined1 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_13c = 0;
  local_34 = 0;
  local_38 = 0;
  local_14 = (int *)0x0;
  puStack_148 = &LAB_0054f916;
  iStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_14c;
  local_30 = *(undefined4 *)(param_2 + 0x24);
  local_2c = 0xb;
  local_24 = 0;
  local_20 = param_4;
  local_1c = 1;
  local_28 = param_3;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_138);
  FUN_00403fd4(&local_38,local_138);
  pcVar3 = "PlayWave";
  FUN_004040f0(&local_34,3);
  iVar1 = local_34;
  uVar2 = FUN_004a418c();
  FUN_004a474c(uVar2,iVar1,0,(int)pcVar3);
  FUN_0054fdbc((int)local_8);
  if (*PTR_DAT_00572000 != '\0') {
    FUN_004a8534(local_c,(int *)&local_14);
    if (local_14 != (int *)0x0) {
      FUN_004a85c4(local_c,local_14);
      FUN_004b01ec(local_10);
      (**(code **)(*local_14 + 0x3c))();
      local_18 = FUN_0054f16c((int *)&DAT_0054f140,'\x01',local_14);
      FUN_00409bd8(local_18,&local_13c);
      FUN_004040f0((int *)(local_18 + 8),3);
      FUN_004121d8((int *)local_8[7],local_18);
      (**(code **)(*local_14 + 0x30))();
      if (param_4 != '\0') {
        FUN_005500a0((int)local_8,local_18);
      }
      local_8[2] = local_18;
    }
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = (int)pcVar3;
  FUN_00403db0(&local_13c);
  FUN_00403dd4(&local_38,2);
  FUN_00406aa0((int *)&local_14);
  return;
}

