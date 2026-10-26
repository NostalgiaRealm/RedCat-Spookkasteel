/*
 * FUN_00532f9c at 00532f9c
 * undefined __register FUN_00532f9c(int param_1, byte * param_2)
 * Address ranges: 00532f9c-005330a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00532f9c(int param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 in_stack_ffffffa8;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_34 [7];
  int local_18;
  int local_14;
  char local_d;
  byte *local_c;
  int local_8;
  
  bVar6 = 0;
  puStack_40 = (undefined1 *)0x532fb2;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_44 = &LAB_005330a2;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_d = '\0';
  puStack_40 = &stack0xfffffffc;
  uVar1 = FUN_0048e094((byte *)(local_8 + 0x29c));
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_00549b48(*(int *)(local_8 + 0x294));
    iVar2 = FUN_0048ec24(*(int *)(iVar2 + 0x10));
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_18 = uVar3 + 1;
      local_14 = 0;
      do {
        iVar2 = FUN_00549b48(*(int *)(local_8 + 0x294));
        FUN_0048f02c(*(int **)(iVar2 + 0x10),local_14,local_34);
        in_stack_ffffffa8 = 1;
        local_d = FUN_0054b484(*(int **)(local_8 + 0x294),local_c,local_34,'\x01','\0','\x01','\0');
        if (local_d != '\0') {
          puVar4 = local_34;
          puVar5 = (undefined4 *)(local_8 + 0x278);
          for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          break;
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  else {
    in_stack_ffffffa8 = 1;
    local_d = FUN_0054b484(*(int **)(local_8 + 0x294),local_c,(undefined4 *)(local_8 + 0x29c),'\x01'
                           ,'\0','\x01','\0');
  }
  *in_FS_OFFSET = in_stack_ffffffa8;
  FUN_00403db0((int *)&local_c);
  return;
}

