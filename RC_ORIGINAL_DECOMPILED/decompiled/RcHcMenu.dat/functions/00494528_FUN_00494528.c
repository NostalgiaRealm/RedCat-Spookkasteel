/*
 * FUN_00494528 at 00494528
 * undefined __register FUN_00494528(int * param_1, int * param_2)
 * Address ranges: 00494528-0049466b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00494528(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_158;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  byte local_13c [256];
  int local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  byte local_1a;
  byte local_19;
  uint local_18;
  uint local_14;
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_38 = 0;
  local_3c = 0;
  puStack_148 = &LAB_0049466c;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    FUN_00402fe0(*param_1,local_13c);
    FUN_00403fd4(&local_3c,local_13c);
    pcStack_158 = " Parameter cannot be nil";
    FUN_004040f0(&local_38,3);
    FUN_00403d94(local_38);
    puVar1 = puStack_144;
  }
  puStack_144 = puVar1;
  local_d = '\x01';
  local_24 = local_8;
  local_20 = local_c;
  local_19 = FUN_00493ce4(local_c,&local_14);
  local_1a = FUN_00493ce4(local_24,&local_18);
  while( true ) {
    if ((local_19 == 0 && local_1a == 0) || (local_d == '\0')) break;
    if ((local_19 & local_1a) == 0) {
      local_d = '\0';
    }
    else if (local_14 == local_18) {
      FUN_00494b0c(local_20,local_14,&local_28,&local_34);
      FUN_00494b0c(local_24,local_18,&local_2c,&local_30);
      iVar2 = (**(code **)(*local_34 + 0x48))(local_34,local_30,0x18);
      local_d = iVar2 == 0;
      local_19 = FUN_00493d24(local_20,&local_14);
      local_1a = FUN_00493d24(local_24,&local_18);
    }
    else {
      local_d = '\0';
    }
  }
  *in_FS_OFFSET = pcStack_158;
  FUN_00403dd4(&local_3c,2);
  return;
}

