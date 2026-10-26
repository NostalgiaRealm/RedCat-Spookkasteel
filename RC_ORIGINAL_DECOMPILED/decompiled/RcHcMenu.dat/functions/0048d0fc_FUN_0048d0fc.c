/*
 * FUN_0048d0fc at 0048d0fc
 * undefined __register FUN_0048d0fc(int * param_1, byte * param_2, char param_3)
 * Address ranges: 0048d0fc-0048d2cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048d0fc(int *param_1,byte *param_2,char param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  char *pcStack_154;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_130;
  byte local_12c [256];
  int local_2c;
  int local_28;
  char local_21;
  int *local_20;
  int *local_1c;
  byte local_15;
  undefined4 local_14;
  char local_d;
  byte *local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  local_28 = 0;
  local_2c = 0;
  local_130 = 0;
  puStack_13c = &LAB_0048d2d0;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puVar1 = &stack0xfffffffc;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00403d94("GetProp: not a valid PropRef");
    puVar1 = puStack_138;
  }
  puStack_138 = puVar1;
  uVar3 = FUN_0048e1b4((int)local_c,local_8);
  if ((char)uVar3 == '\0') {
    FUN_00402fe0(*local_8,local_12c);
    FUN_00403fd4(&local_2c,local_12c);
    FUN_0048e1ec((int)local_c,&local_130);
    pcStack_154 = " was expected)";
    FUN_004040f0(&local_28,5);
    FUN_00403d94(local_28);
  }
  local_1c = local_8;
  if (1 < *local_c) {
    uVar4 = *local_c - 2;
    if (SBORROW4((uint)*local_c,2)) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    if (9 < uVar4) {
      uVar4 = thunk_FUN_00402874(uVar4);
    }
    local_21 = (char)uVar4 + '\x01';
    local_15 = 0;
    do {
      piVar5 = (int *)FUN_00494b98(local_1c,(int)*(short *)(local_c + (uint)local_15 * 2 + 2));
      uVar3 = FUN_0040320c(piVar5,(int)&PTR_FUN_00474160);
      if ((char)uVar3 == '\0') {
        FUN_00403d94("Container property expected");
      }
      piVar5 = (int *)FUN_00494b98(local_1c,(int)*(short *)(local_c + (uint)local_15 * 2 + 2));
      local_20 = (int *)FUN_00403224(piVar5,(int)&PTR_FUN_00474160);
      bVar2 = FUN_0047445c((int)local_20);
      if (!bVar2 && local_d == '\0') {
        local_14 = 0;
        goto LAB_0048d2aa;
      }
      local_1c = (int *)FUN_004744a0(local_20);
      local_15 = local_15 + 1;
      local_21 = local_21 + -1;
    } while (local_21 != '\0');
  }
  uVar4 = *local_c - 1;
  if (SBORROW4((uint)*local_c,1)) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  if (9 < uVar4) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  local_14 = FUN_00494b98(local_1c,(int)*(short *)(local_c + uVar4 * 2 + 2));
LAB_0048d2aa:
  *in_FS_OFFSET = pcStack_154;
  FUN_00403db0(&local_130);
  FUN_00403dd4(&local_2c,2);
  return;
}

