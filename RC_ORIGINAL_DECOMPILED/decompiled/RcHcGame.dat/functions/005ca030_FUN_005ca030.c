/*
 * FUN_005ca030 at 005ca030
 * undefined FUN_005ca030(void)
 * Address ranges: 005ca030-005ca43d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005ca030(int param_1,undefined4 param_2,undefined4 param_3,byte param_4,undefined4 *param_5,
            float *param_6,int *param_7,undefined4 *param_8,int *param_9,undefined4 param_10,
            code *param_11,undefined4 param_12)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  int local_ac;
  float local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  float local_88 [4];
  undefined4 uStack_78;
  undefined1 auStack_74 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  float local_38 [6];
  undefined1 auStack_20 [12];
  float local_14 [5];
  
  DAT_006cc590 = *(int *)(param_1 + 0x18) + 200;
  iVar4 = *(int *)(param_1 + 0x18);
  iVar3 = iVar4 + 0x1cc;
  if (param_7 != (int *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  local_a8 = 99999.0;
  local_8c = 0;
  local_a4 = 0;
  if (((param_4 & 4) != 0) &&
     (local_9c = FUN_005ca440(param_1,0,0,param_2,param_3,&local_68,local_14,param_10,param_11,
                              param_12,&local_a8), local_9c != 0)) {
    local_90 = local_60;
    local_98 = local_68;
    local_94 = local_64;
    local_a4 = 1;
    pfVar2 = local_14;
    pfVar5 = local_88;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar5 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      pfVar5 = pfVar5 + 1;
    }
  }
  if ((param_4 & 2) != 0) {
    FUN_005cb6a0(s_Eclipse__006aa428 + 8,&DAT_006aa440,param_2,param_3,local_38 + 3,local_38);
    local_a0 = 0;
    if (0 < *(int *)(DAT_006cc590 + 0xa0)) {
      iVar4 = iVar4 + 0x270;
      local_ac = 0;
      do {
        if ((param_11 == (code *)0x0) || (iVar1 = (*param_11)(iVar3,0,param_12), iVar1 != 0)) {
          iVar1 = 0;
          pfVar2 = (float *)(iVar4 + -0xc);
          do {
            if ((local_38[iVar1] < pfVar2[-3]) || (*pfVar2 < local_38[iVar1 + 3])) break;
            iVar1 = iVar1 + 1;
            pfVar2 = pfVar2 + 1;
          } while (iVar1 < 3);
          if (iVar1 == 3) {
            FUN_005b2fe0(auStack_5c);
            FUN_005b2fe0(auStack_74);
            FUN_005b3730(auStack_50);
            FUN_005b3730(auStack_20);
            FUN_005b3000(auStack_5c);
            FUN_005b3000(auStack_74);
            DAT_006cc5ac = 0;
            iVar1 = FUN_005ca810(auStack_5c,auStack_74,
                                 *(undefined4 *)(*(int *)(DAT_006cc590 + 0x48) + local_ac));
            if (iVar1 != 0) {
              FUN_005b35b0(&DAT_006cc530);
              FUN_005b2fe0(&DAT_006cc560);
              FUN_005b3470(&DAT_006cc560);
              FUN_005b3000(&DAT_006cc560);
              fVar6 = (float10)FUN_005b2e40();
              _DAT_006cc53c = (float)fVar6;
              FUN_005b2fe0(auStack_44);
              fVar6 = (float10)FUN_005b2fd0();
              if (fVar6 < (float10)local_a8) {
                local_98 = DAT_006cc560;
                local_94 = DAT_006cc564;
                local_a8 = (float)fVar6;
                local_90 = DAT_006cc568;
                pfVar2 = (float *)&DAT_006cc530;
                pfVar5 = local_88;
                for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *pfVar5 = *pfVar2;
                  pfVar2 = pfVar2 + 1;
                  pfVar5 = pfVar5 + 1;
                }
                if (DAT_006cc594 != 0) {
                  FUN_005b3080();
                  local_88[3] = -local_88[3];
                  uStack_78 = 6;
                }
                local_9c = 0;
                local_a4 = 1;
                local_8c = iVar3;
              }
            }
            if ((param_4 & 8) != 0) break;
          }
        }
        local_ac = local_ac + 0x50;
        local_a0 = local_a0 + 1;
        iVar3 = iVar3 + 0xd4;
        iVar4 = iVar4 + 0xd4;
      } while (local_a0 < *(int *)(DAT_006cc590 + 0xa0));
    }
  }
  if (local_a4 == 0) {
    return 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_98;
    param_5[1] = local_94;
    param_5[2] = local_90;
  }
  if (param_6 != (float *)0x0) {
    pfVar2 = local_88;
    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_6 = *pfVar2;
      pfVar2 = pfVar2 + 1;
      param_6 = param_6 + 1;
    }
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_8c;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = local_9c;
  }
  return 1;
}

