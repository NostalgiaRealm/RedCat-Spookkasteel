/*
 * FUN_00492f80 at 00492f80
 * undefined __register FUN_00492f80(int * param_1, byte * param_2)
 * Address ranges: 00492f80-004930b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492f80(int *param_1,byte *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_120 [256];
  int local_20;
  char local_1a;
  byte local_19;
  int *local_18;
  int *local_14;
  undefined1 local_d;
  byte *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_20 = 0;
  puStack_128 = &LAB_004930b9;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  local_d = 0;
  local_14 = param_1;
  local_c = param_2;
  local_8 = param_1;
  if (1 < *param_2) {
    uVar2 = *param_2 - 2;
    puVar1 = &stack0xfffffffc;
    if (SBORROW4((uint)*param_2,2)) {
      uVar2 = thunk_FUN_00402874(uVar2);
      puVar1 = puStack_124;
    }
    puStack_124 = puVar1;
    if (9 < uVar2) {
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    local_1a = (char)uVar2 + '\x01';
    local_19 = 0;
    do {
      iVar3 = FUN_00492148((int)local_14,(int)*(short *)(local_c + (uint)local_19 * 2 + 2));
      uVar4 = FUN_0040320c(*(int **)(iVar3 + 0x40),(int)&PTR_FUN_004740c8);
      if ((char)uVar4 == '\0') {
        FUN_00402fe0(*local_8,local_120);
        FUN_00403fd4(&local_20,local_120);
        FUN_00404038(&local_20,(undefined4 *)".GetPropLocPtrByPropRef: Container property expected")
        ;
        FUN_00403d94(local_20);
      }
      iVar3 = FUN_00492148((int)local_14,(int)*(short *)(local_c + (uint)local_19 * 2 + 2));
      local_18 = (int *)FUN_00403224(*(int **)(iVar3 + 0x40),(int)&PTR_FUN_004740c8);
      uVar4 = FUN_0040320c(local_18,(int)&PTR_FUN_0048cd88);
      if ((char)uVar4 != '\0') {
        local_d = 1;
        break;
      }
      piVar5 = (int *)FUN_00497394(uVar4,extraout_EDX,extraout_ECX);
      local_14 = (int *)FUN_0049756c(piVar5,local_18[0xc]);
      local_19 = local_19 + 1;
      local_1a = local_1a + -1;
    } while (local_1a != '\0');
  }
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_004930c0;
  puStack_128 = (undefined1 *)0x4930b8;
  FUN_00403db0(&local_20);
  return;
}

