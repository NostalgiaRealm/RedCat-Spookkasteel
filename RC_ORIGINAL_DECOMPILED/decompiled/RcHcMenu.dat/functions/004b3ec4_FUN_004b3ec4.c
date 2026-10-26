/*
 * FUN_004b3ec4 at 004b3ec4
 * undefined __register FUN_004b3ec4(int param_1)
 * Address ranges: 004b3ec4-004b3f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3ec4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  int local_38;
  int local_34;
  int local_30;
  byte local_2c [28];
  int local_10;
  int local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  puStack_40 = &LAB_004b3f97;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  iVar1 = FUN_0048ec24(*(int *)(param_1 + 0x2c));
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      FUN_0048f02c(*(int **)(local_8 + 0x2c),local_c,(undefined4 *)local_2c);
      iVar1 = FUN_00492440(*(int **)(local_8 + 0x1c),local_2c);
      if ((*(byte *)(iVar1 + 0x18) & 0x40) == 0) {
        FUN_004b3b04(local_8,(undefined4 *)local_2c,&local_34);
        puVar4 = &DAT_004b3fac;
        iVar5 = local_34;
        FUN_0049145c(*(int **)(local_8 + 0x1c),local_2c,&local_38);
        iVar3 = local_38;
        FUN_004040f0(&local_30,3);
        iVar1 = **(int **)(local_8 + 0x58);
        (**(code **)(iVar1 + 0x34))(*(int **)(local_8 + 0x58),local_30,iVar1,iVar3,puVar4,iVar5);
      }
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_004b3f9e;
  puStack_40 = (undefined1 *)0x4b3f96;
  FUN_00403dd4(&local_38,3);
  return;
}

