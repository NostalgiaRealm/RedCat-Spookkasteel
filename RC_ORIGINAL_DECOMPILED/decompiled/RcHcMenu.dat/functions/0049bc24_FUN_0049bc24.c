/*
 * FUN_0049bc24 at 0049bc24
 * int __register FUN_0049bc24(byte * param_1, byte * param_2, int param_3, int param_4)
 * Address ranges: 0049bc24-0049bf0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0049bc24(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int local_2c;
  int local_28;
  byte *local_20;
  byte *local_1c;
  int local_14;
  
  local_14 = 0;
  local_28 = 0;
  iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x3c);
  local_20 = param_2;
  local_1c = param_1;
  if (iVar2 == 0x18) {
    if (0 < param_3) {
      do {
        uVar3 = (*local_1c & 0x7f) + 1;
        if (SCARRY4((uint)(*local_1c & 0x7f),1)) {
          uVar3 = thunk_FUN_00402874(uVar3);
        }
        if (*local_1c < 0x80) {
          local_1c = local_1c + 1;
          uVar4 = uVar3 - 1;
          if (SBORROW4(uVar3,1)) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          if (-1 < (int)uVar4) {
            local_2c = uVar4 + 1;
            do {
              *local_20 = *local_1c;
              local_20[1] = local_1c[1];
              local_20[2] = local_1c[2];
              local_1c = local_1c + 3;
              local_20 = local_20 + 3;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          uVar4 = (uint)((longlong)(int)uVar3 * 3);
          if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * 3) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          uVar5 = uVar4 + 1;
          if (SCARRY4(uVar4,1)) {
            uVar5 = thunk_FUN_00402874(uVar5);
          }
          bVar6 = SCARRY4(local_14,uVar5);
          local_14 = local_14 + uVar5;
          if (bVar6) {
            thunk_FUN_00402874(uVar5);
          }
        }
        else {
          uVar4 = uVar3 - 1;
          if (SBORROW4(uVar3,1)) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          if (-1 < (int)uVar4) {
            local_2c = uVar4 + 1;
            do {
              *local_20 = local_1c[1];
              local_20[1] = local_1c[2];
              bVar1 = local_1c[3];
              uVar4 = CONCAT31((int3)((uint)(local_1c + 3) >> 8),bVar1);
              local_20[2] = bVar1;
              local_20 = local_20 + 3;
              local_2c = local_2c + -1;
            } while (local_2c != 0);
          }
          local_1c = local_1c + 4;
          bVar6 = SCARRY4(local_14,4);
          local_14 = local_14 + 4;
          if (bVar6) {
            thunk_FUN_00402874(uVar4);
          }
        }
        uVar4 = (uint)((longlong)(int)uVar3 * 3);
        if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * 3) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        bVar6 = SCARRY4(local_28,uVar4);
        local_28 = local_28 + uVar4;
        if (bVar6) {
          thunk_FUN_00402874(uVar4);
        }
      } while (local_28 < param_3);
    }
  }
  else if ((iVar2 == 0x20) && (0 < param_3)) {
    do {
      uVar3 = (*local_1c & 0x7f) + 1;
      if (SCARRY4((uint)(*local_1c & 0x7f),1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
      }
      if (*local_1c < 0x80) {
        local_1c = local_1c + 1;
        uVar4 = uVar3 - 1;
        if (SBORROW4(uVar3,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        if (-1 < (int)uVar4) {
          local_2c = uVar4 + 1;
          do {
            *local_20 = *local_1c;
            local_20[1] = local_1c[1];
            local_20[2] = local_1c[2];
            local_20[3] = local_1c[3];
            local_1c = local_1c + 4;
            local_20 = local_20 + 4;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
        uVar4 = (uint)((longlong)(int)uVar3 * 4);
        if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * 4) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        uVar5 = uVar4 + 1;
        if (SCARRY4(uVar4,1)) {
          uVar5 = thunk_FUN_00402874(uVar5);
        }
        bVar6 = SCARRY4(local_14,uVar5);
        local_14 = local_14 + uVar5;
        if (bVar6) {
          thunk_FUN_00402874(uVar5);
        }
      }
      else {
        uVar4 = uVar3 - 1;
        if (SBORROW4(uVar3,1)) {
          uVar4 = thunk_FUN_00402874(uVar4);
        }
        if (-1 < (int)uVar4) {
          local_2c = uVar4 + 1;
          do {
            *local_20 = local_1c[1];
            local_20[1] = local_1c[2];
            local_20[2] = local_1c[3];
            bVar1 = local_1c[4];
            uVar4 = CONCAT31((int3)((uint)(local_1c + 4) >> 8),bVar1);
            local_20[3] = bVar1;
            local_20 = local_20 + 4;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
        local_1c = local_1c + 5;
        bVar6 = SCARRY4(local_14,5);
        local_14 = local_14 + 5;
        if (bVar6) {
          thunk_FUN_00402874(uVar4);
        }
      }
      uVar4 = (uint)((longlong)(int)uVar3 * 4);
      if ((longlong)(int)uVar4 != (longlong)(int)uVar3 * 4) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      bVar6 = SCARRY4(local_28,uVar4);
      local_28 = local_28 + uVar4;
      if (bVar6) {
        thunk_FUN_00402874(uVar4);
      }
    } while (local_28 < param_3);
  }
  return local_14;
}

