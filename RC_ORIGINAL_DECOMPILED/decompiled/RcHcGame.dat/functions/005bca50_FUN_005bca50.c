/*
 * FUN_005bca50 at 005bca50
 * undefined FUN_005bca50(void)
 * Address ranges: 005bca50-005bcd65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005bca50(int param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  LARGE_INTEGER LStack_10;
  int aiStack_8 [2];
  
  *(undefined4 *)(param_1 + 0x390d0) = 0;
  if (*(int *)(param_1 + 0x33668) == 0) {
    FUN_005cf220(5,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x690,&DAT_006b3f70,0);
    return 0;
  }
  FUN_005bcdd0(param_1);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x5c))();
  if (iVar4 != 0) {
    QueryPerformanceCounter(&LStack_10);
    FUN_005bcee0(param_1 + 0x336b8,&LStack_10,aiStack_8);
    if (aiStack_8[0] == 0) {
      fVar2 = 100.0;
    }
    else {
      fVar2 = (float)*(int *)(param_1 + 0x3367c) / (float)aiStack_8[0];
    }
    if (*(int *)(param_1 + 0x39050) == 1) {
      _DAT_006cc424 = 0x14;
      iVar4 = DAT_006cc484 % 0x14;
      DAT_006cc484 = DAT_006cc484 + 1;
      pfVar5 = (float *)&DAT_006cc428;
      (&DAT_006cc428)[iVar4] = fVar2;
      fVar3 = 0.0;
      do {
        fVar3 = fVar3 + *pfVar5;
        pfVar5 = pfVar5 + 1;
      } while ((int)pfVar5 < 0x6cc478);
      *(undefined4 *)(param_1 + 0x33688) = *(undefined4 *)(*(int *)(param_1 + 0x33678) + 0x90);
      FUN_005bcfb0(param_1,2,0x72,s_Fps____2_2f____2_2f_006a96e8,(double)fVar2,
                   (double)(fVar3 * 0.05));
      FUN_005bcfb0(param_1,2,0x80,s_Polys____t__4i__s__4i__r__4i__tr_006a96ac,
                   *(undefined4 *)(param_1 + 0x33680),*(undefined4 *)(param_1 + 0x33684),
                   *(undefined4 *)(param_1 + 0x33688),*(undefined4 *)(param_1 + 0x3368c),
                   *(undefined4 *)(param_1 + 0x336a8),*(undefined4 *)(param_1 + 0x336ac));
      FUN_005bcfb0(param_1,2,0x8e,s_Mirrors___3i_006a969c,*(undefined4 *)(param_1 + 0x33694));
      puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x33678) + 0x94);
      pcVar1 = *(code **)(*(int *)(param_1 + 0x33678) + 0xb4);
      iVar4 = param_1;
      if (pcVar1 != (code *)0x0) {
        iVar4 = (*pcVar1)();
      }
      DAT_006cc478 = iVar4 / 0x51ec;
      if (puVar7 != (undefined4 *)0x0) {
        FUN_005bcfb0(param_1,2,0x8e,s_Cache__Full__4i_Remove__4i_Flush_006a9660,*puVar7,puVar7[1],
                     puVar7[2],puVar7[3],puVar7[4]);
      }
      FUN_005bcfb0(param_1,2,0x9c,s_Actors____3i__polys___4i___Model_006a9638,
                   *(undefined4 *)(param_1 + 0x33698),*(undefined4 *)(param_1 + 0x3369c),
                   *(undefined4 *)(param_1 + 0x33690));
      FUN_005bcfb0(param_1,2,0xaa,s_DLights___3i_Fog___3i_LMap1_2____006a960c,
                   *(undefined4 *)(param_1 + 0x336a0),*(undefined4 *)(param_1 + 0x336a4),
                   *(undefined4 *)(param_1 + 0x336b0),*(undefined4 *)(param_1 + 0x336b4));
      if (*(int *)(param_1 + 0x35028) != 0) {
        iVar4 = *(int *)(param_1 + 0x3502c);
        FUN_005bcfb0(param_1,2,0xb8,s_Nodes___3i__3i__Leafs___3i__3i__U_006a95dc,
                     *(undefined4 *)(iVar4 + 0xbcc),*(undefined4 *)(iVar4 + 0xbd0),
                     *(undefined4 *)(iVar4 + 0xbd4),*(undefined4 *)(iVar4 + 0xbd8),
                     *(undefined4 *)(iVar4 + 0xbdc),*(undefined4 *)(iVar4 + 0xbe0));
        FUN_005bcfb0(param_1,2,0xc6,s_Cast___3i__3i__GetC___3i_006a95c0,DAT_00720828,DAT_00720830,
                     DAT_0072082c);
        FUN_005bcfb0(param_1,2,0xd4,s_Texture_cache_used___4i_006a95a8,DAT_006cc478);
        puVar7 = (undefined4 *)(iVar4 + 0xbcc);
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        DAT_00720828 = 0;
        DAT_00720830 = 0;
        DAT_0072082c = 0;
      }
    }
    FUN_005bcd70();
    return 1;
  }
  FUN_005cf220(8,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x69d,&DAT_006b3f70,0);
  return 0;
}

