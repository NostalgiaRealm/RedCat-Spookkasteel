/*
 * FUN_10003060 at 10003060
 * undefined4 __stdcall FUN_10003060(void)
 * Address ranges: 10003060-1000338d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003060(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_e0 [29];
  undefined4 auStack_6c [27];
  
  if (DAT_1001bcb8 != (int *)0x0) {
    piVar2 = local_e0;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    local_e0[0] = 0x7c;
    iVar1 = (**(code **)(*DAT_1001bcb8 + 0x58))(DAT_1001bcb8,local_e0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_ClearBuffers__Failure_ge_100173c4);
      return 0;
    }
    puVar3 = auStack_6c;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    auStack_6c[0] = 100;
    SetRect((LPRECT)&stack0xffffff08,0,0,local_e0[1],local_e0[0]);
    iVar1 = (**(code **)(*DAT_1001bcb8 + 0x14))
                      (DAT_1001bcb8,&stack0xffffff08,0,0,0x1000400,auStack_6c);
    if (iVar1 != 0) {
      if (iVar1 != -0x7789fe3e) {
        FUN_10001000(iVar1);
        FUN_10002700(s_D3DMain_ClearBuffers__Clearing_t_10017470);
        return 0;
      }
      if (DAT_1001bcb0 != (int *)0x0) {
        iVar1 = FUN_10004960(DAT_1001b3f0,DAT_1001b47c,DAT_1001b480,DAT_1001b484,DAT_1001eee0);
        if (iVar1 == 0) goto LAB_100031c0;
        iVar1 = (**(code **)(*DAT_1001bcb0 + 100))(DAT_1001bcb0);
        if (iVar1 != 0) {
          FUN_10001000(iVar1);
          FUN_10002700(s_D3DMain_RestoreAllSurfaces__AppI_10016d9c);
          FUN_10002700(s_D3DMain_ClearBuffers__D3DMain_Re_10017430);
          return 0;
        }
      }
      if (((DAT_100ec088 != 0) && (iVar1 = FUN_10005340(DAT_100ec088), iVar1 == 0)) ||
         ((DAT_100ec0f4 != 0 && (iVar1 = FUN_10005340(DAT_100ec0f4), iVar1 == 0)))) {
LAB_100031c0:
        FUN_10002700(s_D3DMain_ClearBuffers__D3DMain_Re_10017430);
        return 0;
      }
    }
  }
  if (DAT_1001bcbc != (int *)0x0) {
    piVar2 = local_e0;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = 0;
      piVar2 = piVar2 + 1;
    }
    local_e0[0] = 0x7c;
    iVar1 = (**(code **)(*DAT_1001bcbc + 0x58))(DAT_1001bcbc,local_e0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_ClearBuffers__Failure_wh_100174b0);
      return 0;
    }
    puVar3 = auStack_6c;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    auStack_6c[0] = 100;
    SetRect((LPRECT)&stack0xffffff08,0,0,local_e0[1],local_e0[0]);
    iVar1 = (**(code **)(*DAT_1001bcbc + 0x14))
                      (DAT_1001bcbc,&stack0xffffff08,0,0,0x1000400,auStack_6c);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 != -0x7789fe3e) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_ClearBuffers__Clearing_t_1001755c);
      return 0;
    }
    if (DAT_1001bcb0 != (int *)0x0) {
      iVar1 = FUN_10004960(DAT_1001b3f0,DAT_1001b47c,DAT_1001b480,DAT_1001b484,DAT_1001eee0);
      if (iVar1 == 0) goto LAB_10003349;
      iVar1 = (**(code **)(*DAT_1001bcb0 + 100))(DAT_1001bcb0);
      if (iVar1 != 0) {
        FUN_10001000(iVar1);
        FUN_10002700(s_D3DMain_RestoreAllSurfaces__AppI_10016d9c);
        FUN_10002700(s_D3DMain_ClearBuffers__D3DMain_Re_10017520);
        return 0;
      }
    }
    if (((DAT_100ec088 != 0) && (iVar1 = FUN_10005340(DAT_100ec088), iVar1 == 0)) ||
       ((DAT_100ec0f4 != 0 && (iVar1 = FUN_10005340(DAT_100ec0f4), iVar1 == 0)))) {
LAB_10003349:
      FUN_10002700(s_D3DMain_ClearBuffers__D3DMain_Re_10017520);
      return 0;
    }
  }
  return 1;
}

