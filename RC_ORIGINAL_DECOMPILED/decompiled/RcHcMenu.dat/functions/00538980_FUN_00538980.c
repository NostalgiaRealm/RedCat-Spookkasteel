/*
 * FUN_00538980 at 00538980
 * undefined __register FUN_00538980(int * param_1, int param_2)
 * Address ranges: 00538980-00538ae6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00538980(int *param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_124 [256];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_12c = &LAB_00538ae7;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_10 = param_2;
  local_c = param_2;
  local_8 = param_1;
  if (*(char *)(param_2 + 0x60) == '\0') {
    local_18 = 0;
    uVar2 = FUN_0051c7f0(param_2);
    uVar3 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    iVar4 = FUN_00538e94(local_8);
    uVar2 = FUN_0051e5f0(iVar4);
    uVar5 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if ((int)uVar3 <= (int)uVar5) {
      local_1c = (uVar5 - uVar3) + 1;
      local_14 = uVar3;
      do {
        piVar6 = (int *)FUN_00538e94(local_8);
        iVar4 = FUN_005375c0(piVar6,local_14);
        if (*(char *)(iVar4 + 0x60) != '\0') {
          piVar6 = (int *)FUN_00538e94(local_8);
          local_18 = FUN_005375c0(piVar6,local_14);
          break;
        }
        local_14 = local_14 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if (local_18 == 0) {
      uVar2 = FUN_0051c7f0(local_c);
      if (-1 < (int)uVar2) {
        local_1c = uVar2 + 1;
        local_14 = 0;
        do {
          piVar6 = (int *)FUN_00538e94(local_8);
          iVar4 = FUN_005375c0(piVar6,local_14);
          if (*(char *)(iVar4 + 0x60) != '\0') {
            piVar6 = (int *)FUN_00538e94(local_8);
            local_18 = FUN_005375c0(piVar6,local_14);
            break;
          }
          local_14 = local_14 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    if (local_18 == 0) {
      FUN_00402fe0(*local_8,local_124);
      FUN_00403fd4(&local_24,local_124);
      pcStack_13c = "There are no editable columns visible.";
      FUN_004040f0(&local_20,3);
      FUN_00403d94(local_20);
    }
    local_10 = local_18;
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_24,2);
  return;
}

