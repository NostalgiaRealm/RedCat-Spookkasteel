/*
 * FUN_00490f08 at 00490f08
 * undefined __register FUN_00490f08(int * param_1, byte * param_2, int * param_3)
 * Address ranges: 00490f08-004910cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00490f08(int *param_1,byte *param_2,int *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_134 [3];
  byte local_128 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  int *local_10;
  byte *local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_134[2] = 0;
  local_134[1] = 0;
  local_134[0] = 0;
  local_24 = 0;
  local_28 = 0;
  puStack_140 = &LAB_004910cc;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (*param_2 == 0) {
    FUN_00402fe0(*param_1,local_128);
    FUN_00403fd4(&local_28,local_128);
    pcStack_150 = ": PropRef can not be empty";
    FUN_004040f0(&local_24,3);
    FUN_00403d94(local_24);
    param_3 = extraout_ECX;
    puVar1 = puStack_13c;
  }
  puStack_13c = puVar1;
  cVar2 = FUN_0048e148((int)local_c,local_8[0xd],param_3);
  if (cVar2 == '\0') {
    FUN_00402fe0(*local_8,local_128);
    FUN_00403fd4(local_134 + 1,local_128);
    FUN_0048e1ec((int)local_c,local_134);
    FUN_004040f0(local_134 + 2,4);
    FUN_00403d94(local_134[2]);
  }
  FUN_00403e04(local_10,(undefined4 *)local_8[0xf]);
  local_18 = local_8;
  uVar3 = *local_c - 2;
  if (SBORROW4((uint)*local_c,2)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_20 = uVar3 + 1;
    local_14 = 0;
    do {
      uVar3 = local_14;
      if (9 < local_14) {
        uVar3 = thunk_FUN_00402874(local_14);
      }
      piVar4 = (int *)FUN_004923e0((int)local_18,(int)*(short *)(local_c + uVar3 * 2 + 2));
      local_1c = FUN_00403224(piVar4,(int)&PTR_FUN_004740c8);
      piVar4 = (int *)FUN_00497394(local_1c,extraout_EDX,extraout_ECX_00);
      local_18 = (int *)FUN_0049756c(piVar4,*(int *)(local_1c + 0x30));
      if (*(char *)(local_1c + 0x38) != '\0') {
        FUN_00403e04(local_10,(undefined4 *)local_18[0xf]);
      }
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = pcStack_150;
  FUN_00403dd4(local_134,3);
  FUN_00403dd4(&local_28,2);
  return;
}

