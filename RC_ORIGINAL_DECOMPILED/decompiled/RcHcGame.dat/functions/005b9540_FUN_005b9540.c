/*
 * FUN_005b9540 at 005b9540
 * undefined FUN_005b9540(void)
 * Address ranges: 005b9540-005b9691
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b9540(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float local_1c;
  float local_18 [6];
  
  iVar3 = param_1;
  local_1c = 0.0;
  if (0 < *(int *)(param_1 + 0x168)) {
    param_1 = 0;
    pfVar4 = (float *)(iVar3 + 0x27c);
    do {
      iVar5 = *(int *)(*(int *)(iVar3 + 0x110) + param_1);
      if (-1 < iVar5) {
        iVar5 = *(int *)(iVar3 + 0x114) + iVar5 * 0x2c;
        local_18[3] = *(float *)(iVar5 + 0x14);
        local_18[4] = *(float *)(iVar5 + 0x18);
        local_18[5] = *(float *)(iVar5 + 0x1c);
        local_18[0] = *(float *)(iVar5 + 0x20);
        local_18[1] = *(float *)(iVar5 + 0x24);
        local_18[2] = *(float *)(iVar5 + 0x28);
        pfVar4[5] = (float)(*(int *)(iVar3 + 0x110) + param_1);
        iVar5 = 0;
        pfVar6 = pfVar4;
        do {
          pfVar1 = (float *)((int)local_18 + iVar5);
          iVar2 = iVar5 + 0xc;
          iVar5 = iVar5 + 4;
          *pfVar6 = (*pfVar1 + *(float *)((int)local_18 + iVar2)) * 0.5;
          pfVar6 = pfVar6 + 1;
        } while (iVar5 < 0xc);
        pfVar6 = (float *)(*(int *)(iVar3 + 0x110) + 0x20 + param_1);
        pfVar4[-3] = *pfVar6;
        pfVar4[-2] = pfVar6[1];
        pfVar4[-1] = pfVar6[2];
        pfVar4[-0x1c] = local_1c;
        pfVar4[-0xf] = local_18[3];
        pfVar4[-0xe] = local_18[4];
        pfVar4[-0xd] = local_18[5];
        pfVar4[-0xc] = local_18[0];
        pfVar4[-0xb] = local_18[1];
        pfVar4[-10] = local_18[2];
        pfVar4[-9] = local_18[3];
        pfVar4[-8] = local_18[4];
        pfVar4[-7] = local_18[5];
        pfVar4[-6] = local_18[0];
        pfVar4[-5] = local_18[1];
        pfVar4[-4] = local_18[2];
        pfVar4[7] = 4.2039e-45;
        pfVar4[8] = 1.4013e-45;
      }
      local_1c = (float)((int)local_1c + 1);
      param_1 = param_1 + 0x50;
      pfVar4 = pfVar4 + 0x35;
    } while ((int)local_1c < *(int *)(iVar3 + 0x168));
  }
  return;
}

