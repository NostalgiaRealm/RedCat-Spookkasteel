/*
 * FUN_0051eb30 at 0051eb30
 * undefined __register FUN_0051eb30(int * param_1, uint param_2)
 * Address ranges: 0051eb30-0051eff2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051eb30(int *param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  int local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  
  iVar3 = FUN_0051e1b8(param_1);
  if (*(char *)(iVar3 + 0x270) == '\0') {
    return;
  }
  iVar3 = FUN_0051e1b8(param_1);
  bVar2 = FUN_00438c84(*(int *)(iVar3 + 0x274));
  if (!bVar2) {
    return;
  }
  if (param_2 != 0) {
    uVar4 = FUN_0051c7f0(param_2);
    uVar5 = FUN_0051e5f0((int)param_1);
    uVar6 = uVar5 - 1;
    if (SBORROW4(uVar5,1)) {
      uVar6 = thunk_FUN_00402874(uVar6);
    }
    if (uVar4 != uVar6) {
      local_20 = 0;
      local_18 = 0;
      uVar4 = FUN_0051c7f0(param_2);
      if (-1 < (int)uVar4) {
        local_2c = uVar4 + 1;
        local_1c = 0;
        do {
          iVar3 = FUN_0051e404(param_1,local_1c);
          uVar4 = *(uint *)(iVar3 + 0x34);
          bVar2 = SCARRY4(local_18,uVar4);
          local_18 = local_18 + uVar4;
          if (bVar2) {
            thunk_FUN_00402874(uVar4);
          }
          local_1c = local_1c + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      iVar3 = FUN_0051e1b8(param_1);
      iVar3 = FUN_00432178(*(int **)(iVar3 + 0x274));
      local_24 = iVar3 - local_18;
      if (SBORROW4(iVar3,local_18)) {
        local_24 = thunk_FUN_00402874(local_24);
      }
      uVar4 = FUN_0051c7f0(param_2);
      local_1c = uVar4 + 1;
      if (SCARRY4(uVar4,1)) {
        local_1c = thunk_FUN_00402874(local_1c);
      }
      uVar4 = FUN_0051e5f0((int)param_1);
      uVar5 = uVar4 - 1;
      if (SBORROW4(uVar4,1)) {
        uVar5 = thunk_FUN_00402874(uVar5);
      }
      if ((int)local_1c <= (int)uVar5) {
        local_2c = (uVar5 - local_1c) + 1;
        do {
          iVar3 = FUN_0051e404(param_1,local_1c);
          if (*(char *)(iVar3 + 6) == '\0') {
            iVar3 = FUN_0051e404(param_1,local_1c);
            uVar4 = *(uint *)(iVar3 + 0x34);
            bVar2 = SBORROW4(local_24,uVar4);
            local_24 = local_24 - uVar4;
            if (bVar2) {
              thunk_FUN_00402874(uVar4);
            }
          }
          else {
            iVar3 = FUN_0051e404(param_1,local_1c);
            uVar4 = *(uint *)(iVar3 + 0x34);
            bVar2 = SCARRY4(local_20,uVar4);
            local_20 = local_20 + uVar4;
            if (bVar2) {
              thunk_FUN_00402874(uVar4);
            }
          }
          local_1c = local_1c + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      bVar2 = false;
      if (local_20 != 0) {
        uVar4 = FUN_0051c7f0(param_2);
        local_1c = uVar4 + 1;
        if (SCARRY4(uVar4,1)) {
          local_1c = thunk_FUN_00402874(local_1c);
        }
        uVar4 = FUN_0051e5f0((int)param_1);
        uVar5 = uVar4 - 1;
        if (SBORROW4(uVar4,1)) {
          uVar5 = thunk_FUN_00402874(uVar5);
        }
        if ((int)local_1c <= (int)uVar5) {
          local_2c = (uVar5 - local_1c) + 1;
          do {
            iVar3 = FUN_0051e404(param_1,local_1c);
            if (*(char *)(iVar3 + 6) != '\0') {
              FUN_0051e404(param_1,local_1c);
              uVar4 = FUN_00402b48();
              if ((int)uVar4 >> 0x1f != extraout_EDX_00) {
                uVar4 = thunk_FUN_00402874(uVar4);
              }
              iVar3 = FUN_0051e404(param_1,local_1c);
              *(uint *)(iVar3 + 0x34) = uVar4;
              iVar3 = FUN_0051e404(param_1,local_1c);
              if (*(int *)(iVar3 + 0x34) < 0xf) {
                iVar3 = FUN_0051e404(param_1,local_1c);
                *(undefined4 *)(iVar3 + 0x34) = 0xf;
                bVar2 = true;
              }
            }
            local_1c = local_1c + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
      }
      if (bVar2) {
        piVar1 = (int *)(param_2 + 0x34);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + local_24;
        if (SCARRY4(iVar3,local_24)) {
          thunk_FUN_00402874(param_2);
        }
        uVar4 = FUN_0051c7f0(param_2);
        local_1c = uVar4 + 1;
        if (SCARRY4(uVar4,1)) {
          local_1c = thunk_FUN_00402874(local_1c);
        }
        uVar4 = FUN_0051e5f0((int)param_1);
        uVar5 = uVar4 - 1;
        if (SBORROW4(uVar4,1)) {
          uVar5 = thunk_FUN_00402874(uVar5);
        }
        if ((int)local_1c <= (int)uVar5) {
          local_2c = (uVar5 - local_1c) + 1;
          do {
            iVar3 = FUN_0051e404(param_1,local_1c);
            if (*(char *)(iVar3 + 6) != '\0') {
              iVar3 = FUN_0051e404(param_1,local_1c);
              uVar4 = *(uint *)(iVar3 + 0x34);
              piVar1 = (int *)(param_2 + 0x34);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 - uVar4;
              if (SBORROW4(iVar3,uVar4)) {
                thunk_FUN_00402874(uVar4);
              }
            }
            local_1c = local_1c + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
      }
      goto LAB_0051eee5;
    }
  }
  local_20 = 0;
  iVar3 = FUN_0051e1b8(param_1);
  local_24 = FUN_00432178(*(int **)(iVar3 + 0x274));
  uVar4 = FUN_0051e5f0((int)param_1);
  uVar5 = uVar4 - 1;
  if (SBORROW4(uVar4,1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_2c = uVar5 + 1;
    local_1c = 0;
    do {
      iVar3 = FUN_0051e404(param_1,local_1c);
      if (*(char *)(iVar3 + 6) == '\0') {
        iVar3 = FUN_0051e404(param_1,local_1c);
        uVar4 = *(uint *)(iVar3 + 0x34);
        bVar2 = SBORROW4(local_24,uVar4);
        local_24 = local_24 - uVar4;
        if (bVar2) {
          thunk_FUN_00402874(uVar4);
        }
      }
      else {
        iVar3 = FUN_0051e404(param_1,local_1c);
        uVar4 = *(uint *)(iVar3 + 0x34);
        bVar2 = SCARRY4(local_20,uVar4);
        local_20 = local_20 + uVar4;
        if (bVar2) {
          thunk_FUN_00402874(uVar4);
        }
      }
      local_1c = local_1c + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  if (local_20 != 0) {
    uVar4 = FUN_0051e5f0((int)param_1);
    uVar5 = uVar4 - 1;
    if (SBORROW4(uVar4,1)) {
      uVar5 = thunk_FUN_00402874(uVar5);
    }
    if (-1 < (int)uVar5) {
      local_2c = uVar5 + 1;
      local_1c = 0;
      do {
        iVar3 = FUN_0051e404(param_1,local_1c);
        if (*(char *)(iVar3 + 6) != '\0') {
          FUN_0051e404(param_1,local_1c);
          uVar4 = FUN_00402b48();
          if ((int)uVar4 >> 0x1f != extraout_EDX) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          iVar3 = FUN_0051e404(param_1,local_1c);
          *(uint *)(iVar3 + 0x34) = uVar4;
          iVar3 = FUN_0051e404(param_1,local_1c);
          if (*(int *)(iVar3 + 0x34) < 0xf) {
            iVar3 = FUN_0051e404(param_1,local_1c);
            *(undefined4 *)(iVar3 + 0x34) = 0xf;
          }
        }
        local_1c = local_1c + 1;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
    }
  }
LAB_0051eee5:
  uVar4 = FUN_0051e5f0((int)param_1);
  if (0 < (int)uVar4) {
    uVar5 = FUN_0051e5f0((int)param_1);
    uVar4 = uVar5 - 1;
    if (SBORROW4(uVar5,1)) {
      thunk_FUN_00402874(uVar5);
      uVar4 = extraout_EDX_01;
    }
    iVar3 = FUN_0051e404(param_1,uVar4);
    if (*(char *)(iVar3 + 6) != '\0') {
      local_20 = 0;
      uVar4 = FUN_0051e5f0((int)param_1);
      uVar5 = uVar4 - 2;
      if (SBORROW4(uVar4,2)) {
        uVar5 = thunk_FUN_00402874(uVar5);
      }
      if (-1 < (int)uVar5) {
        local_2c = uVar5 + 1;
        local_1c = 0;
        do {
          iVar3 = FUN_0051e404(param_1,local_1c);
          uVar4 = *(uint *)(iVar3 + 0x34);
          bVar2 = SCARRY4(local_20,uVar4);
          local_20 = local_20 + uVar4;
          if (bVar2) {
            thunk_FUN_00402874(uVar4);
          }
          local_1c = local_1c + 1;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      uVar5 = FUN_0051e5f0((int)param_1);
      uVar4 = uVar5 - 1;
      if (SBORROW4(uVar5,1)) {
        thunk_FUN_00402874(uVar5);
        uVar4 = extraout_EDX_02;
      }
      iVar3 = FUN_0051e404(param_1,uVar4);
      iVar7 = FUN_0051e1b8(param_1);
      iVar7 = FUN_00432178(*(int **)(iVar7 + 0x274));
      uVar4 = iVar7 - local_20;
      if (SBORROW4(iVar7,local_20)) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      *(uint *)(iVar3 + 0x34) = uVar4;
      uVar5 = FUN_0051e5f0((int)param_1);
      uVar4 = uVar5 - 1;
      if (SBORROW4(uVar5,1)) {
        thunk_FUN_00402874(uVar5);
        uVar4 = extraout_EDX_03;
      }
      iVar3 = FUN_0051e404(param_1,uVar4);
      if (*(int *)(iVar3 + 0x34) < 0xf) {
        uVar5 = FUN_0051e5f0((int)param_1);
        uVar4 = uVar5 - 1;
        if (SBORROW4(uVar5,1)) {
          thunk_FUN_00402874(uVar5);
          uVar4 = extraout_EDX_04;
        }
        iVar3 = FUN_0051e404(param_1,uVar4);
        *(undefined4 *)(iVar3 + 0x34) = 0xf;
      }
    }
  }
  FUN_0051f124(param_1);
  return;
}

