/*
 * FUN_0051e404 at 0051e404
 * undefined __register FUN_0051e404(int * param_1, uint param_2)
 * Address ranges: 0051e404-0051e57d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051e404(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_12c = &LAB_0051e57e;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_10 = 0;
  local_18 = 0xffffffff;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = FUN_0051e160((int)param_1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_14 = 0;
    do {
      uVar2 = FUN_0051e184((int)local_8,local_14);
      if (*(char *)(uVar2 + 8) != '\0') {
        bVar3 = SCARRY4(local_18,1);
        local_18 = local_18 + 1;
        if (bVar3) {
          thunk_FUN_00402874(uVar2);
        }
        if (local_18 == local_c) {
          local_10 = FUN_0051e184((int)local_8,local_14);
          goto LAB_0051e563;
        }
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  iVar1 = FUN_0051e160((int)local_8);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_1c = uVar2 + 1;
    local_14 = 0;
    do {
      iVar1 = FUN_0051e184((int)local_8,local_14);
      if (*(char *)(iVar1 + 0x30) != '\0') {
        uVar2 = FUN_0051e184((int)local_8,local_14);
        if (*(char *)(uVar2 + 8) == '\0') {
          bVar3 = SCARRY4(local_18,1);
          local_18 = local_18 + 1;
          if (bVar3) {
            thunk_FUN_00402874(uVar2);
          }
          uVar2 = local_8[0x83] + local_c;
          if (SCARRY4(local_8[0x83],local_c)) {
            uVar2 = thunk_FUN_00402874(uVar2);
          }
          if (uVar2 == local_18) {
            local_10 = FUN_0051e184((int)local_8,local_14);
            goto LAB_0051e563;
          }
        }
      }
      local_14 = local_14 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (local_10 == 0) {
    FUN_00402fe0(*local_8,local_124);
    FUN_00403fd4(&local_24,local_124);
    pcStack_13c = "Column not found.";
    FUN_004040f0(&local_20,3);
    FUN_00403d94(local_20);
  }
LAB_0051e563:
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_24,2);
  return;
}

