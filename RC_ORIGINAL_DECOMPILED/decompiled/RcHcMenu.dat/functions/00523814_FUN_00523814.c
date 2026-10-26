/*
 * FUN_00523814 at 00523814
 * undefined __register FUN_00523814(int * param_1, byte param_2, int param_3)
 * Address ranges: 00523814-00523adc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00523814(int *param_1,byte param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  int local_14;
  
  iVar3 = FUN_0052361c(param_1);
  if ((*(char *)(iVar3 + 0x22d) != '\0') && (param_3 != -1)) {
    if ((param_2 & 1) == 0) {
      if ((param_2 & 4) == 0) {
        iVar3 = FUN_00516404(param_1[0x82]);
        if (iVar3 == 1) {
          FUN_00524fb8(param_1,param_1[0x80]);
        }
        else {
          local_14 = param_1[0x84];
          iVar3 = FUN_00523e68(param_1);
          uVar4 = iVar3 + param_1[0x84];
          if (SCARRY4(iVar3,param_1[0x84])) {
            uVar4 = thunk_FUN_00402874(uVar4);
          }
          if (local_14 <= (int)uVar4) {
            local_18 = (uVar4 - local_14) + 1;
            do {
              (**(code **)(*param_1 + 0xc0))(param_1,local_14);
              iVar3 = FUN_0052361c(param_1);
              cVar1 = FUN_005163d0(param_1[0x82],*(int **)(iVar3 + 0x280));
              if (cVar1 != '\0') {
                FUN_00524fb8(param_1,local_14);
              }
              local_14 = local_14 + 1;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
        }
        FUN_00516508(param_1[0x82]);
        (**(code **)(*param_1 + 0xc0))(param_1,param_3);
        iVar3 = FUN_0052361c(param_1);
        FUN_00516464(param_1[0x82],*(int **)(iVar3 + 0x280),'\x01');
        param_1[0x80] = param_3;
        FUN_00524fb8(param_1,param_3);
      }
      else {
        (**(code **)(*param_1 + 0xc0))(param_1,param_3);
        iVar3 = FUN_0052361c(param_1);
        bVar2 = FUN_005163d0(param_1[0x82],*(int **)(iVar3 + 0x280));
        iVar3 = FUN_0052361c(param_1);
        FUN_00516464(param_1[0x82],*(int **)(iVar3 + 0x280),bVar2 ^ 1);
        FUN_00524fb8(param_1,param_3);
      }
    }
    else {
      local_14 = param_1[0x84];
      iVar3 = FUN_00523e68(param_1);
      uVar4 = iVar3 + param_1[0x84];
      if (SCARRY4(iVar3,param_1[0x84])) {
        uVar4 = thunk_FUN_00402874(uVar4);
      }
      if (local_14 <= (int)uVar4) {
        local_18 = (uVar4 - local_14) + 1;
        do {
          (**(code **)(*param_1 + 0xc0))(param_1,local_14);
          iVar3 = FUN_0052361c(param_1);
          cVar1 = FUN_005163d0(param_1[0x82],*(int **)(iVar3 + 0x280));
          if (cVar1 != '\0') {
            FUN_00524fb8(param_1,local_14);
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      FUN_00516508(param_1[0x82]);
      if (param_1[0x80] < param_3) {
        local_14 = param_1[0x80];
        if (local_14 <= param_3) {
          local_18 = (param_3 - local_14) + 1;
          do {
            (**(code **)(*param_1 + 0xc0))(param_1,local_14);
            iVar3 = FUN_0052361c(param_1);
            FUN_00516464(param_1[0x82],*(int **)(iVar3 + 0x280),'\x01');
            FUN_00524fb8(param_1,local_14);
            local_14 = local_14 + 1;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      else {
        local_14 = param_1[0x80];
        if (param_3 - local_14 == 0 || param_3 < local_14) {
          local_18 = (param_3 - local_14) + -1;
          do {
            (**(code **)(*param_1 + 0xc0))(param_1,local_14);
            iVar3 = FUN_0052361c(param_1);
            FUN_00516464(param_1[0x82],*(int **)(iVar3 + 0x280),'\x01');
            FUN_00524fb8(param_1,local_14);
            local_14 = local_14 + -1;
            local_18 = local_18 + 1;
          } while (local_18 != 0);
        }
      }
    }
  }
  return;
}

