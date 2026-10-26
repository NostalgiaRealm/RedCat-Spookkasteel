/*
 * FUN_0049216c at 0049216c
 * undefined __register FUN_0049216c(int * param_1)
 * Address ranges: 0049216c-00492263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049216c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int *in_FS_OFFSET;
  int iStack_138;
  int iStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  short *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_124 = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  puStack_128 = &LAB_00492264;
  iStack_12c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_12c;
  local_c = param_1[9];
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (local_c == -1) {
    iVar2 = FUN_00490bb8((int)param_1);
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if (-1 < (int)uVar3) {
      local_18 = uVar3 + 1;
      local_10 = 0;
      do {
        local_14 = (short *)FUN_00492148((int)local_8,local_10);
        if (*local_14 != 1) break;
        if ((*(byte *)(*(int *)(local_14 + 0x20) + 0x18) & 4) != 0) {
          local_8[9] = local_10;
          local_c = local_10;
          puVar1 = puStack_124;
          goto LAB_00492249;
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    FUN_00402fe0(*local_8,local_120);
    FUN_00403fd4(&local_20,local_120);
    iStack_138 = local_8[0xc];
    FUN_004040f0(&local_1c,3);
    FUN_00403d94(local_1c);
    puVar1 = puStack_124;
  }
LAB_00492249:
  puStack_124 = puVar1;
  *in_FS_OFFSET = iStack_138;
  FUN_00403dd4(&local_20,2);
  return;
}

