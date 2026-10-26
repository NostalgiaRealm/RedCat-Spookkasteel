/*
 * FUN_00492440 at 00492440
 * undefined __register FUN_00492440(int * param_1, byte * param_2)
 * Address ranges: 00492440-00492614
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492440(int *param_1,byte *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_14c;
  undefined4 uStack_140;
  undefined1 *puStack_13c;
  undefined1 *puStack_138;
  int local_134 [3];
  byte local_128 [256];
  int local_28;
  int local_24;
  char local_1d;
  int local_1c;
  int *local_18;
  byte local_11;
  undefined4 local_10;
  byte *local_c;
  int *local_8;
  
  puStack_138 = &stack0xfffffffc;
  uVar6 = 0;
  local_134[2] = 0;
  local_134[1] = 0;
  local_134[0] = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_13c = &LAB_00492615;
  uStack_140 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_140;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_128);
    FUN_00403fd4(&local_28,local_128);
    pcStack_14c = ": PropRef can not be empty";
    FUN_004040f0(&local_24,3);
    FUN_00403d94(local_24);
    uVar6 = extraout_ECX;
    puVar1 = puStack_138;
  }
  puStack_138 = puVar1;
  cVar2 = FUN_0048e148((int)local_c,local_8[0xd],uVar6);
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_128);
    FUN_00403fd4(local_134 + 1,local_128);
    FUN_0048e1ec((int)local_c,local_134);
    FUN_004040f0(local_134 + 2,4);
    FUN_00403d94(local_134[2]);
  }
  local_18 = local_8;
  if (1 < *local_c) {
    uVar3 = *local_c - 2;
    if (SBORROW4((uint)*local_c,2)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (9 < uVar3) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_1d = (char)uVar3 + '\x01';
    local_11 = 0;
    do {
      piVar4 = (int *)FUN_004923e0((int)local_18,(int)*(short *)(local_c + (uint)local_11 * 2 + 2));
      local_1c = FUN_00403224(piVar4,(int)&PTR_FUN_004740c8);
      piVar4 = (int *)FUN_00497394(local_1c,extraout_EDX,extraout_ECX_00);
      local_18 = (int *)FUN_0049756c(piVar4,*(int *)(local_1c + 0x30));
      local_11 = local_11 + 1;
      local_1d = local_1d + -1;
    } while (local_1d != '\0');
  }
  uVar3 = *local_c - 1;
  if (SBORROW4((uint)*local_c,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (9 < uVar3) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  iVar5 = FUN_00496dfc((int *)local_18[0xb],(int)*(short *)(local_c + uVar3 * 2 + 2));
  local_10 = *(undefined4 *)(iVar5 + 0x40);
  *in_FS_OFFSET = pcStack_14c;
  FUN_00403dd4(local_134,3);
  FUN_00403dd4(&local_28,2);
  return;
}

