/*
 * FUN_00459030 at 00459030
 * undefined __register FUN_00459030(undefined4 * param_1, char * param_2, int param_3, int * param_4)
 * Address ranges: 00459030-0045914a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459030(undefined4 *param_1,char *param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  int *piVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_24 [3];
  int local_18;
  int local_14;
  int local_10;
  char *local_c;
  undefined4 *local_8;
  
  local_24[1] = 0;
  local_24[0] = 0;
  puStack_2c = (undefined1 *)0x459050;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_1);
  puStack_2c = (undefined1 *)0x459058;
  FUN_004041e4((int)local_c);
  puStack_2c = (undefined1 *)0x459060;
  FUN_004041e4(local_10);
  puStack_30 = &LAB_0045914b;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00403e04(param_4,local_8);
  local_18 = FUN_00404030((int)local_c);
  local_24[2] = FUN_00404030(local_10);
  local_14 = 1;
  do {
    local_14 = FUN_00458810(local_c,*param_4,local_14);
    if (local_14 != 0) {
      piVar4 = local_24 + 1;
      uVar1 = local_14 - 1;
      if (SBORROW4(local_14,1)) {
        thunk_FUN_00402874((uint)piVar4);
        uVar1 = extraout_ECX;
      }
      FUN_00404238(*param_4,1,uVar1,piVar4);
      piVar4 = local_24;
      uVar1 = FUN_00404030(*param_4);
      iVar2 = local_14 + local_18;
      if (SCARRY4(local_14,local_18)) {
        thunk_FUN_00402874(uVar1);
        uVar1 = extraout_ECX_00;
        iVar2 = extraout_EDX;
      }
      FUN_00404238(*param_4,iVar2,uVar1,piVar4);
      FUN_004040f0(param_4,3);
      bVar3 = SCARRY4(local_14,local_24[2]);
      local_14 = local_14 + local_24[2];
      if (bVar3) {
        thunk_FUN_00402874(local_24[2]);
      }
    }
  } while (local_14 != 0);
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00459152;
  puStack_30 = (undefined1 *)0x45913d;
  FUN_00403dd4(local_24,2);
  puStack_30 = (undefined1 *)0x45914a;
  FUN_00403dd4(&local_10,3);
  return;
}

