/*
 * FUN_1000df70 at 1000df70
 * undefined FUN_1000df70(void)
 * Address ranges: 1000df70-1000e19a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000df70(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_4c;
  float local_48;
  int local_40;
  int local_38;
  int local_34;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  
  if ((*(int *)(param_2 + 0x44) != 0) ||
     (((&DAT_10313090)[*(int *)(param_2 + 0x14) * 0x10] & 0x8000) != 0)) {
    return;
  }
  local_40 = 0;
  do {
    local_4c = 999999.0;
    local_48 = -999999.0;
    FUN_100145d0();
    iVar2 = 0;
    if (0 < **(int **)(param_2 + 8)) {
      do {
        fVar3 = (float10)FUN_100143d0();
        if (fVar3 < (float10)local_4c) {
          local_4c = (float)fVar3;
        }
        if ((float10)local_48 < fVar3) {
          local_48 = (float)fVar3;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < **(int **)(param_2 + 8));
    }
    FUN_1002776f((double)(local_4c * 0.0625));
    FUN_1002802f((double)(local_48 * 0.0625));
    fVar1 = _DAT_100389c8;
    if (_DAT_100389c8 < local_48 - local_4c) {
      FUN_1000d6a0(*(undefined4 *)(param_2 + 8),local_2c);
      DAT_10312fec = DAT_10312fec + 1;
      fVar3 = (float10)FUN_100144b0();
      local_1c = local_28;
      local_18 = local_24;
      local_14 = local_20;
      local_c = 6;
      local_10 = (float)((float10)((fVar1 + local_4c) - 16.0) / fVar3);
      FUN_1000cbb0();
      if ((local_38 != 0) && (local_34 != 0)) {
        iVar2 = FUN_1000df30();
        *(int *)(param_2 + 0x3c) = iVar2;
        *(int *)(iVar2 + 8) = local_38;
        **(undefined4 **)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x3c);
        iVar2 = FUN_1000df30(param_2);
        *(int *)(param_2 + 0x40) = iVar2;
        *(int *)(iVar2 + 8) = local_34;
        **(undefined4 **)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x40);
        FUN_1000df70(param_1,*(undefined4 *)(param_2 + 0x3c));
        FUN_1000df70(param_1,*(undefined4 *)(param_2 + 0x40));
        return;
      }
      (*DAT_1014e35c)(s__WARNING__SubdivideFace__didn_t_s_10038bdc,(double)local_4c,(double)local_48
                      ,(double)fVar1);
    }
    local_40 = local_40 + 1;
    if (1 < local_40) {
      return;
    }
  } while( true );
}

