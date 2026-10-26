/*
 * FUN_00492dd8 at 00492dd8
 * undefined __register FUN_00492dd8(int * param_1, byte * param_2)
 * Address ranges: 00492dd8-00492f0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492dd8(int *param_1,byte *param_2)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
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
  int local_18;
  int *local_14;
  undefined4 local_10;
  byte *local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_20 = 0;
  puStack_128 = &LAB_00492f0b;
  uStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_12c;
  puVar1 = &stack0xfffffffc;
  local_14 = param_1;
  local_c = param_2;
  local_8 = param_1;
  if (1 < *param_2) {
    uVar3 = *param_2 - 2;
    puVar1 = &stack0xfffffffc;
    if (SBORROW4((uint)*param_2,2)) {
      uVar3 = thunk_FUN_00402874(uVar3);
      puVar1 = puStack_124;
    }
    puStack_124 = puVar1;
    if (9 < uVar3) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_1a = (char)uVar3 + '\x01';
    local_19 = 0;
    do {
      iVar4 = FUN_00492148((int)local_14,(int)*(short *)(local_c + (uint)local_19 * 2 + 2));
      uVar5 = FUN_0040320c(*(int **)(iVar4 + 0x40),(int)&PTR_FUN_004740c8);
      if ((char)uVar5 == '\0') {
        FUN_00402fe0(*local_8,local_120);
        FUN_00403fd4(&local_20,local_120);
        FUN_00404038(&local_20,(undefined4 *)".GetPropLocPtrByPropRef: Container property expected")
        ;
        FUN_00403d94(local_20);
      }
      iVar4 = FUN_00492148((int)local_14,(int)*(short *)(local_c + (uint)local_19 * 2 + 2));
      local_18 = FUN_00403224(*(int **)(iVar4 + 0x40),(int)&PTR_FUN_004740c8);
      piVar6 = (int *)FUN_00497394(local_18,extraout_EDX,extraout_ECX);
      local_14 = (int *)FUN_0049756c(piVar6,*(int *)(local_18 + 0x30));
      local_19 = local_19 + 1;
      local_1a = local_1a + -1;
      puVar1 = puStack_124;
    } while (local_1a != '\0');
  }
  puStack_124 = puVar1;
  sVar2 = FUN_0048df50(local_c);
  local_10 = FUN_00492148((int)local_14,(int)sVar2);
  *in_FS_OFFSET = uStack_12c;
  puStack_124 = &LAB_00492f12;
  puStack_128 = (undefined1 *)0x492f0a;
  FUN_00403db0(&local_20);
  return;
}

