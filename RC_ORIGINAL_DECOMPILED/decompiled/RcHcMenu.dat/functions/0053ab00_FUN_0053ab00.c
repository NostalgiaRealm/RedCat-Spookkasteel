/*
 * FUN_0053ab00 at 0053ab00
 * undefined __register FUN_0053ab00(int * param_1, char param_2)
 * Address ranges: 0053ab00-0053ad1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053ab00(int *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  char local_9;
  int *local_8;
  
  local_18 = 0;
  local_9 = param_2;
  local_8 = param_1;
  iVar1 = FUN_00538860(param_1);
  local_1c = FUN_00523748(iVar1);
  if (local_9 == '\0') {
    iVar1 = FUN_0053881c(local_8);
    uVar2 = FUN_0051c7f0(iVar1);
    local_20 = uVar2 + 1;
    if (SCARRY4(uVar2,1)) {
      local_20 = thunk_FUN_00402874(local_20);
    }
    iVar1 = FUN_00538e94(local_8);
    uVar2 = FUN_0051e5f0(iVar1);
    uVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    if ((int)local_20 <= (int)uVar3) {
      local_24 = (uVar3 - local_20) + 1;
      do {
        piVar4 = (int *)FUN_00538e94(local_8);
        iVar1 = FUN_005375c0(piVar4,local_20);
        if (*(char *)(iVar1 + 0x60) != '\0') {
          piVar4 = (int *)FUN_00538e94(local_8);
          local_18 = FUN_005375c0(piVar4,local_20);
          break;
        }
        local_20 = local_20 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
    if (local_18 == 0) {
      iVar1 = FUN_00538860(local_8);
      uVar2 = *(int *)(iVar1 + 0x204) - 1;
      if (SBORROW4(*(int *)(iVar1 + 0x204),1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (local_1c < (int)uVar2) {
        bVar5 = SCARRY4(local_1c,1);
        local_1c = local_1c + 1;
        if (bVar5) {
          thunk_FUN_00402874(uVar2);
        }
        iVar1 = FUN_0053881c(local_8);
        uVar2 = FUN_0051c7f0(iVar1);
        if (-1 < (int)uVar2) {
          local_24 = uVar2 + 1;
          local_20 = 0;
          do {
            piVar4 = (int *)FUN_00538e94(local_8);
            iVar1 = FUN_005375c0(piVar4,local_20);
            if (*(char *)(iVar1 + 0x60) != '\0') {
              piVar4 = (int *)FUN_00538e94(local_8);
              local_18 = FUN_005375c0(piVar4,local_20);
              break;
            }
            local_20 = local_20 + 1;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
      }
    }
  }
  else {
    iVar1 = FUN_0053881c(local_8);
    uVar2 = FUN_0051c7f0(iVar1);
    uVar3 = uVar2 - 1;
    if (SBORROW4(uVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    local_20 = uVar3;
    if (-1 < (int)uVar3) {
      do {
        piVar4 = (int *)FUN_00538e94(local_8);
        uVar3 = FUN_005375c0(piVar4,local_20);
        if (*(char *)(uVar3 + 0x60) != '\0') {
          piVar4 = (int *)FUN_00538e94(local_8);
          uVar3 = FUN_005375c0(piVar4,local_20);
          local_18 = uVar3;
          break;
        }
        local_20 = local_20 - 1;
      } while (local_20 != 0xffffffff);
    }
    if ((local_18 == 0) && (0 < local_1c)) {
      bVar5 = SBORROW4(local_1c,1);
      local_1c = local_1c + -1;
      if (bVar5) {
        thunk_FUN_00402874(uVar3);
      }
      iVar1 = FUN_00538e94(local_8);
      uVar2 = FUN_0051e5f0(iVar1);
      local_20 = uVar2 - 1;
      if (SBORROW4(uVar2,1)) {
        local_20 = thunk_FUN_00402874(local_20);
      }
      iVar1 = FUN_0053881c(local_8);
      uVar2 = FUN_0051c7f0(iVar1);
      if (uVar2 - local_20 == 0 || (int)uVar2 < (int)local_20) {
        local_24 = (uVar2 - local_20) + -1;
        do {
          piVar4 = (int *)FUN_00538e94(local_8);
          iVar1 = FUN_005375c0(piVar4,local_20);
          if (*(char *)(iVar1 + 0x60) != '\0') {
            piVar4 = (int *)FUN_00538e94(local_8);
            local_18 = FUN_005375c0(piVar4,local_20);
            break;
          }
          local_20 = local_20 - 1;
          local_24 = local_24 + 1;
        } while (local_24 != 0);
      }
    }
  }
  if (local_18 != 0) {
    local_14 = local_18;
    local_10 = local_1c;
    piVar4 = (int *)FUN_00538860(local_8);
    FUN_00524d1c(piVar4,(int *)&local_14);
  }
  return;
}

