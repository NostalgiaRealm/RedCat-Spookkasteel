/*
 * FUN_00569570 at 00569570
 * undefined __register FUN_00569570(int * param_1, undefined4 * param_2)
 * Address ranges: 00569570-00569704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00569570(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_FS_OFFSET;
  char *pcVar5;
  int iStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 *local_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined1 local_18;
  undefined *local_14;
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_128 = (undefined4 *)0x0;
  local_20 = 0;
  local_24 = 0;
  local_14 = (undefined *)0x0;
  puStack_12c = (undefined1 *)0x569598;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_130 = &LAB_00569705;
  iStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_134;
  local_1c = local_c;
  local_18 = 0xb;
  puStack_12c = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_124);
  FUN_00403fd4(&local_24,local_124);
  pcVar5 = "CreateNewPlayer";
  FUN_004040f0(&local_20,3);
  iVar3 = local_20;
  uVar1 = FUN_004a418c();
  FUN_004a474c(uVar1,iVar3,0,(int)pcVar5);
  local_10 = 0;
  do {
    FUN_004b0344(local_10,(int *)&local_128);
    FUN_0040407c((int *)&local_14,(undefined4 *)local_8[0x44],local_128);
    uVar2 = FUN_00409dd0(local_14);
    if ((char)uVar2 == '\0') {
      if (local_8[0x46] != 0) {
        FUN_00403094((int *)local_8[0x46]);
      }
      iVar3 = FUN_0056643c((int *)&LAB_0056591c,'\x01',local_c,local_10);
      local_8[0x46] = iVar3;
      FUN_005662e0((int *)local_8[0x46]);
      FUN_00566158((int *)local_8[0x46],local_14);
      piVar4 = (int *)(**(code **)(*(int *)local_8[0x46] + 8))();
      iVar3 = FUN_004a418c();
      FUN_004a4afc(iVar3,0x569740,piVar4);
      *(int *)(local_8[0x47] + 0x28) = local_10;
      break;
    }
    local_10 = local_10 + 1;
  } while (local_10 != 8);
  *in_FS_OFFSET = (int)pcVar5;
  FUN_00403db0((int *)&local_128);
  FUN_00403dd4(&local_24,2);
  FUN_00403db0((int *)&local_14);
  FUN_00403db0((int *)&local_c);
  return;
}

