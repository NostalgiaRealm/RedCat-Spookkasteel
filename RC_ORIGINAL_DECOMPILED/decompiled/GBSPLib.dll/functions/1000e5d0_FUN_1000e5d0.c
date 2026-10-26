/*
 * FUN_1000e5d0 at 1000e5d0
 * undefined FUN_1000e5d0(void)
 * Address ranges: 1000e5d0-1000e7b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000e5d0(undefined4 param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_94;
  int local_90 [6];
  float local_78 [30];
  
  iVar6 = 0;
  puVar9 = DAT_10312ffc;
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  pfVar7 = local_78;
  for (iVar4 = 0x1e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = 0.0;
    pfVar7 = pfVar7 + 1;
  }
  *DAT_10312ffc = 0xffffffff;
  DAT_10312ffc[2] = 1;
  DAT_10312ffc[0xd] = 0;
  DAT_10312ffc[0x19] = 0;
  iVar4 = 0;
  do {
    if ((*(float *)((int)&DAT_10313010 + iVar4) - 128.0 <= -15192.0) ||
       (15192.0 <= *(float *)((int)&DAT_10313000 + iVar4) + 128.0)) {
      (*DAT_1014e358)(s_CreateAllOutsidePortals__World_B_10038df8);
      return 0;
    }
    iVar5 = iVar4 + 4;
    *(float *)((int)&DAT_10313010 + iVar4) = *(float *)((int)&DAT_10313010 + iVar4) - 128.0;
    *(float *)((int)&DAT_10313000 + iVar4) = *(float *)((int)&DAT_10313000 + iVar4) + 128.0;
    iVar4 = iVar5;
  } while (iVar5 < 0xc);
  do {
    iVar4 = 0;
    do {
      iVar5 = iVar6 + iVar4 * 3;
      FUN_100145f0();
      if (iVar4 == 0) {
        fVar1 = (float)(&DAT_10313010)[iVar6];
        local_78[iVar5 * 5 + iVar6] = 1.0;
      }
      else {
        fVar1 = (float)(&DAT_10313000)[iVar6];
        local_78[iVar5 * 5 + iVar6] = -1.0;
        fVar1 = -fVar1;
      }
      local_78[iVar5 * 5 + 3] = fVar1;
      iVar3 = FUN_1000e540(local_78 + iVar5 * 5,param_1);
      local_90[iVar5] = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  piVar8 = local_90;
  local_94 = 0;
  do {
    iVar4 = 0;
    pfVar7 = local_78;
    do {
      if (iVar4 != local_94) {
        piVar2 = (int *)*piVar8;
        iVar6 = FUN_1000c570(*piVar2,pfVar7,0,piVar2);
        if (iVar6 == 0) {
          (*DAT_1014e358)(s_CreateAllOutsidePortals__There_w_10038db4);
          return 0;
        }
        if (*piVar2 == 0) {
          (*DAT_1014e358)(s_CreateAllOutsidePortals__Portal_w_10038d80);
          return 0;
        }
      }
      iVar4 = iVar4 + 1;
      pfVar7 = pfVar7 + 5;
    } while (iVar4 < 6);
    local_94 = local_94 + 1;
    piVar8 = piVar8 + 1;
    if (5 < local_94) {
      return 1;
    }
  } while( true );
}

