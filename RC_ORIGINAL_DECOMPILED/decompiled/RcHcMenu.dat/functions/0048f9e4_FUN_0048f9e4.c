/*
 * FUN_0048f9e4 at 0048f9e4
 * undefined __register FUN_0048f9e4(int param_1, int * param_2, undefined2 param_3, char param_4, int * param_5)
 * Address ranges: 0048f9e4-0048fbec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048f9e4(int param_1,int *param_2,undefined2 param_3,char param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  short local_78;
  undefined2 auStack_76 [10];
  undefined2 auStack_62 [21];
  int *local_38;
  undefined1 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  uint local_18;
  short *local_14;
  undefined2 local_e;
  int *local_c;
  int local_8;
  
  local_e = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_20 = (int *)FUN_004744a0(param_2);
  iVar1 = FUN_00494858(local_20);
  iVar1 = FUN_00490bb8(iVar1);
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_2c = uVar2 + 1;
    local_1c = 0;
    do {
      FUN_00494b3c(local_20,local_1c,&local_24,(int *)&local_14,&local_28);
      if (1 < *local_14) {
        return;
      }
      FUN_0048f9b8(&local_78);
      uVar2 = param_5[1] - 1;
      if (SBORROW4(param_5[1],1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (-1 < (int)uVar2) {
        local_30 = uVar2 + 1;
        local_18 = 0;
        do {
          uVar3 = FUN_00460470(param_5,local_18);
          uVar2 = local_18;
          if (9 < local_18) {
            uVar3 = thunk_FUN_00402874(uVar3);
            uVar2 = extraout_EDX;
          }
          auStack_76[uVar2] = (short)uVar3;
          uVar3 = FUN_00460590(param_5,local_18);
          uVar2 = local_18;
          if (9 < local_18) {
            uVar3 = thunk_FUN_00402874(uVar3);
            uVar2 = extraout_EDX_00;
          }
          auStack_62[uVar2] = (short)uVar3;
          local_18 = local_18 + 1;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
      }
      uVar2 = param_5[1];
      if (9 < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      auStack_76[uVar2] = local_e;
      iVar1 = FUN_00495f04(local_c);
      uVar2 = iVar1 + 0x8000;
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar2 = uVar2 - 0x8000;
      uVar3 = param_5[1];
      if (9 < uVar3) {
        uVar2 = thunk_FUN_00402874(uVar2);
        uVar3 = extraout_EDX_01;
      }
      auStack_62[uVar3] = (short)uVar2;
      uVar3 = CONCAT22((short)((uint)local_14 >> 0x10),local_14[1]);
      uVar2 = param_5[1] + 1;
      if (SCARRY4(param_5[1],1)) {
        uVar3 = thunk_FUN_00402874(uVar3);
        uVar2 = extraout_EDX_02;
      }
      if (9 < uVar2) {
        uVar3 = thunk_FUN_00402874(uVar3);
        uVar2 = extraout_EDX_03;
      }
      auStack_76[uVar2] = (short)uVar3;
      uVar2 = param_5[1] + 1;
      if (SCARRY4(param_5[1],1)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      if (9 < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      auStack_62[uVar2] = 0xffff;
      uVar2 = param_5[1] + 2;
      if (SCARRY4(param_5[1],2)) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      uVar2 = uVar2 + 0x8000;
      if (0xffff < uVar2) {
        uVar2 = thunk_FUN_00402874(uVar2);
      }
      local_78 = (short)uVar2 + -0x8000;
      if (param_4 == '\0') {
        local_34 = 1;
        local_38 = (int *)(**(code **)(*local_24 + 8))();
        if ((*(byte *)(local_38 + 6) & 8) != 0) {
          *(ushort *)(local_38 + 6) = *(ushort *)(local_38 + 6) & 0xfff7;
          *(ushort *)(local_38 + 6) = *(ushort *)(local_38 + 6) | 0x40;
        }
        if ((*(byte *)(local_38 + 6) & 4) != 0) {
          *(ushort *)(local_38 + 6) = *(ushort *)(local_38 + 6) & 0xfffb;
          *(ushort *)(local_38 + 6) = *(ushort *)(local_38 + 6) | 0x40;
        }
      }
      else {
        local_34 = 3;
        local_38 = local_24;
      }
      FUN_00496e20(*(int **)(local_8 + 0x2c),(undefined4 *)&local_78);
      local_1c = local_1c + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  return;
}

