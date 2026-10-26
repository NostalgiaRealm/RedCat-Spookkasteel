/*
 * FUN_1000e8b0 at 1000e8b0
 * undefined FUN_1000e8b0(void)
 * Address ranges: 1000e8b0-1000ec96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000e8b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  int *local_4;
  
  FUN_1000e840(param_1);
  if (*param_1 == -1) {
    return true;
  }
  if ((DAT_10312ff8 != 0) && (param_1[0x14] != 0)) {
    return true;
  }
  local_1c = param_1[5];
  local_20 = param_1[4];
  local_8 = &DAT_1003fdf8 + *param_1 * 5;
  iVar2 = FUN_1000e3f0(param_1,&local_24);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_PartitionPortals_r__CreatePolyOn_10039004);
    return false;
  }
  for (iVar2 = param_1[0xd]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc + iVar6 * 4)) {
    if (local_24 == 0) goto LAB_1000ea7e;
    if (*(int **)(iVar2 + 4) == param_1) {
      iVar6 = 0;
    }
    else {
      if (*(int **)(iVar2 + 8) != param_1) goto LAB_1000e9f8;
      iVar6 = 1;
    }
    iVar3 = FUN_1000c890(local_24,0x3a83126f,&DAT_1003fdf8 + *(int *)(iVar2 + 0x14) * 5,iVar6,
                         &local_24);
    if (iVar3 == 0) {
      (*DAT_1014e358)(s_PartitionPortals_r__There_was_an_10038fc8);
      return false;
    }
    if (local_24 == 0) {
      (*DAT_1014e35c)(s_PartitionPortals_r__Portal_was_c_10038f9c);
      break;
    }
  }
  if (local_24 != 0) {
    iVar2 = FUN_1000d860(local_24);
    if (iVar2 == 0) {
      if (local_24 != 0) {
        piVar4 = (int *)FUN_1000ed40();
        if (piVar4 == (int *)0x0) {
LAB_1000ea1f:
          (*DAT_1014e358)(s_PartitionPortals_r__Out_of_memor_10038f30);
          return false;
        }
        *piVar4 = local_24;
        piVar4[5] = *param_1;
        piVar4[6] = (int)param_1;
        iVar2 = FUN_1000e7c0(piVar4);
        if (iVar2 == 0) {
          (*DAT_1014e358)(s_PartiionPortals_r__Check_Portal_f_10038f04);
          return false;
        }
        FUN_1000eca0(piVar4,local_20,local_1c);
      }
    }
    else {
      FUN_1000c2e0(local_24);
      local_24 = 0;
    }
  }
LAB_1000ea7e:
  piVar4 = (int *)param_1[0xd];
joined_r0x1000ea83:
  do {
    piVar1 = piVar4;
    if (piVar1 == (int *)0x0) {
      if (param_1[0xd] != 0) {
        (*DAT_1014e35c)(s__WARNING__PartitionPortals_r__Po_10038eb8);
      }
      iVar2 = FUN_1000e8b0(local_20);
      if (iVar2 == 0) {
        return false;
      }
      iVar2 = FUN_1000e8b0(local_1c);
      return iVar2 != 0;
    }
    if ((int *)piVar1[1] == param_1) {
      iVar2 = 0;
      local_10 = 0;
    }
    else {
      if ((int *)piVar1[2] != param_1) {
LAB_1000e9f8:
        (*DAT_1014e358)(s_PartitionPortals_r__Portal_does_n_10038f60);
        return false;
      }
      local_10 = 1;
      iVar2 = 1;
    }
    local_4 = (int *)piVar1[iVar2 + 3];
    iVar6 = piVar1[(iVar2 == 0) + 1];
    local_c = iVar6;
    FUN_1000ecf0(piVar1,(int *)piVar1[1]);
    FUN_1000ecf0(piVar1,piVar1[2]);
    iVar3 = FUN_1000d070(*piVar1,0x3a83126f,local_8,&local_18,&local_14,0);
    if (iVar3 == 0) {
      (*DAT_1014e358)(s_PartitionPortals_r__Could_not_sp_10038e88);
      return false;
    }
    if ((local_18 != 0) && (iVar3 = FUN_1000d860(local_18), iVar3 != 0)) {
      FUN_1000c2e0(local_18);
      local_18 = 0;
    }
    if ((local_14 != 0) && (iVar3 = FUN_1000d860(local_14), iVar3 != 0)) {
      FUN_1000c2e0(local_14);
      local_14 = 0;
    }
    if (local_18 == 0) {
      piVar4 = local_4;
      if (local_14 != 0) {
        *piVar1 = local_14;
        if (iVar2 == 0) {
          FUN_1000eca0(piVar1,local_1c,iVar6);
          piVar4 = local_4;
        }
        else {
          FUN_1000eca0(piVar1,iVar6,local_1c);
          piVar4 = local_4;
        }
      }
      goto joined_r0x1000ea83;
    }
    if (local_14 == 0) {
      *piVar1 = local_18;
      if (iVar2 == 0) {
        FUN_1000eca0(piVar1,local_20,iVar6);
        piVar4 = local_4;
      }
      else {
        FUN_1000eca0(piVar1,iVar6,local_20);
        piVar4 = local_4;
      }
    }
    else {
      piVar4 = (int *)FUN_1000ed40();
      iVar2 = local_c;
      if (piVar4 == (int *)0x0) goto LAB_1000ea1f;
      *piVar1 = local_18;
      piVar5 = piVar1;
      piVar7 = piVar4;
      for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      *piVar4 = local_14;
      if (local_10 == 0) {
        FUN_1000eca0(piVar1,local_20,local_c);
        iVar6 = local_1c;
      }
      else {
        FUN_1000eca0(piVar1,local_c,local_20);
        iVar6 = iVar2;
        iVar2 = local_1c;
      }
      FUN_1000eca0(piVar4,iVar6,iVar2);
      piVar4 = local_4;
    }
  } while( true );
}

