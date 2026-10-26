/*
 * FUN_005cae80 at 005cae80
 * undefined FUN_005cae80(void)
 * Address ranges: 005cae80-005cb338
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005cae80(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,byte param_6,undefined4 *param_7,float *param_8,int *param_9,
            undefined4 *param_10,int *param_11,undefined4 param_12,code *param_13,
            undefined4 param_14)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  int local_94;
  float local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  float local_40 [6];
  float local_28 [5];
  float local_14 [5];
  
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (int *)0x0) {
    *param_11 = 0;
  }
  local_90 = 99999.0;
  local_80 = 0;
  local_94 = 0;
  local_8c = 0;
  if (((param_6 & 4) != 0) &&
     (local_94 = FUN_005ca440(param_1,param_2,param_3,param_4,param_5,&local_70,local_14,param_12,
                              param_13,param_14,&local_90), local_94 != 0)) {
    local_7c = local_70;
    local_78 = local_6c;
    local_74 = local_68;
    local_8c = 1;
    pfVar3 = local_14;
    pfVar5 = local_40 + 6;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  _DAT_006cc4d8 = *param_2;
  _DAT_006cc4dc = param_2[1];
  _DAT_006cc4e0 = param_2[2];
  _DAT_006cc570 = *param_3;
  _DAT_006cc574 = param_3[1];
  _DAT_006cc578 = param_3[2];
  DAT_006cc4b8 = *param_4;
  DAT_006cc4bc = param_4[1];
  DAT_006cc4c0 = param_4[2];
  _DAT_006cc4f8 = *param_5;
  _DAT_006cc4fc = param_5[1];
  _DAT_006cc500 = param_5[2];
  iVar1 = *(int *)(param_1 + 0x18);
  DAT_006cc590 = iVar1 + 200;
  iVar2 = *(int *)(param_1 + 0x18);
  DAT_006cc510 = *(undefined4 *)(iVar1 + 0x114);
  iVar4 = iVar2 + 0x1cc;
  DAT_006cc4c8 = *(undefined4 *)(iVar1 + 300);
  DAT_006cc4c4 = *(undefined4 *)(iVar1 + 0x11c);
  DAT_006cc514 = *(undefined4 *)(iVar1 + 0x138);
  if ((param_6 & 2) != 0) {
    FUN_005cb6a0(param_2,param_3,param_4,param_5,local_40,local_40 + 3);
    local_84 = 0;
    if (0 < *(int *)(DAT_006cc590 + 0xa0)) {
      iVar2 = iVar2 + 0x270;
      local_88 = 0;
      do {
        if ((param_13 == (code *)0x0) || (iVar1 = (*param_13)(iVar4,0,param_14), iVar1 != 0)) {
          iVar1 = 0;
          pfVar3 = (float *)(iVar2 + -0xc);
          do {
            if ((local_40[iVar1 + 3] < pfVar3[-3]) || (*pfVar3 < local_40[iVar1])) break;
            iVar1 = iVar1 + 1;
            pfVar3 = pfVar3 + 1;
          } while (iVar1 < 3);
          if (iVar1 == 3) {
            _DAT_006cc524 = 0x461c3c00;
            DAT_006cc598 = 0;
            FUN_005b2fe0(&DAT_006cc4b8);
            FUN_005b2fe0(&DAT_006cc4f8);
            FUN_005b3730(auStack_64);
            FUN_005b3730(auStack_58);
            FUN_005b3000(&DAT_006cc4b8);
            FUN_005b3000(&DAT_006cc4f8);
            FUN_005cb6a0(param_2,param_3,&DAT_006cc4b8,&DAT_006cc4f8,&DAT_006cc4e8,&DAT_006cc580);
            FUN_005cb340(*(undefined4 *)(*(int *)(DAT_006cc590 + 0x48) + local_88));
            if (DAT_006cc598 != 0) {
              FUN_005b35b0(&DAT_006cc530);
              FUN_005b2fe0(&DAT_006cc560);
              FUN_005b3470(auStack_64);
              FUN_005b3000(&DAT_006cc560);
              fVar6 = (float10)FUN_005b2e40();
              _DAT_006cc53c = (float)fVar6;
              FUN_005b2fe0(auStack_4c);
              fVar6 = (float10)FUN_005b2fd0();
              if (fVar6 < (float10)local_90) {
                local_7c = DAT_006cc560;
                local_90 = (float)fVar6;
                local_78 = DAT_006cc564;
                pfVar3 = (float *)&DAT_006cc530;
                pfVar5 = local_40 + 6;
                for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *pfVar5 = *pfVar3;
                  pfVar3 = pfVar3 + 1;
                  pfVar5 = pfVar5 + 1;
                }
                local_74 = DAT_006cc568;
                local_94 = 0;
                local_8c = 1;
                local_80 = iVar4;
              }
            }
            if ((param_6 & 8) != 0) break;
          }
        }
        local_88 = local_88 + 0x50;
        local_84 = local_84 + 1;
        iVar4 = iVar4 + 0xd4;
        iVar2 = iVar2 + 0xd4;
      } while (local_84 < *(int *)(DAT_006cc590 + 0xa0));
    }
  }
  if (local_8c == 0) {
    return 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_7c;
    param_7[1] = local_78;
    param_7[2] = local_74;
  }
  if (param_8 != (float *)0x0) {
    pfVar3 = local_40 + 6;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_8 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      param_8 = param_8 + 1;
    }
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = local_80;
  }
  if (param_11 != (int *)0x0) {
    *param_11 = local_94;
  }
  return 1;
}

