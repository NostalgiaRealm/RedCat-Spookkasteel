/*
 * FUN_005270b0 at 005270b0
 * undefined __register FUN_005270b0(int * param_1, undefined4 * param_2)
 * Address ranges: 005270b0-005271a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005270b0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_158;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined1 *puStack_144;
  byte local_138 [256];
  int local_38;
  int local_34;
  byte local_30 [28];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_144 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  pbVar4 = local_30;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pbVar4 = *param_2;
    param_2 = param_2 + 1;
    pbVar4 = pbVar4 + 4;
  }
  puStack_148 = &LAB_005271a3;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  local_c = 0;
  local_8 = param_1;
  iVar3 = FUN_0051e160((int)param_1);
  uVar2 = iVar3 - 1;
  if (SBORROW4(iVar3,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_14 = uVar2 + 1;
    local_10 = 0;
    do {
      iVar3 = FUN_00527084((int)local_8,local_10);
      cVar1 = FUN_0048d3ac((byte *)(iVar3 + 0x44),local_30);
      if (cVar1 != '\0') {
        local_c = FUN_00527084((int)local_8,local_10);
        break;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (local_c == 0) {
    FUN_00402fe0(*local_8,local_138);
    FUN_00403fd4(&local_38,local_138);
    pcStack_158 = "Column not found.";
    FUN_004040f0(&local_34,3);
    FUN_00403d94(local_34);
  }
  *in_FS_OFFSET = pcStack_158;
  FUN_00403dd4(&local_38,2);
  return;
}

