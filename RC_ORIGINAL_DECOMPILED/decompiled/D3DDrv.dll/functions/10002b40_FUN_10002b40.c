/*
 * FUN_10002b40 at 10002b40
 * undefined4 __stdcall FUN_10002b40(void)
 * Address ranges: 10002b40-10002d0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002b40(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  tagRECT local_f0;
  undefined4 local_e0 [25];
  undefined4 local_7c [2];
  int local_74;
  int local_70;
  
  if (DAT_100274b0 != (int *)0x0) {
    iVar1 = FUN_10002d10(local_7c,DAT_100274b0);
    iVar2 = local_70;
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_100020f0(s_D3DMain_ClearBuffers__Failure_ge_100143bc);
      return 0;
    }
    puVar3 = local_e0;
    for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_e0[0] = 100;
    SetRect(&local_f0,0,0,iVar2,local_74);
    iVar2 = (**(code **)(*DAT_100274b0 + 0x14))(DAT_100274b0,&local_f0,0,0,0x1000400,local_e0);
    if (iVar2 != 0) {
      if (iVar2 != -0x7789fe3e) {
        FUN_10001000(iVar2);
        FUN_100020f0(s_D3DMain_ClearBuffers__Clearing_t_1001433c);
        return 0;
      }
      iVar2 = FUN_10001b50();
      if (iVar2 == 0) {
        FUN_100020f0(s_D3DMain_ClearBuffers__D3DMain_Re_1001437c);
        return 0;
      }
    }
  }
  if (DAT_100274b4 != (int *)0x0) {
    iVar2 = FUN_10002d10(local_7c,DAT_100274b4);
    if (iVar2 != 0) {
      FUN_10001000(iVar2);
      FUN_100020f0(s_D3DMain_ClearBuffers__Failure_wh_100142cc);
      return 0;
    }
    puVar3 = local_e0;
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_e0[0] = 100;
    SetRect(&local_f0,0,0,local_70,local_74);
    iVar2 = (**(code **)(*DAT_100274b4 + 0x14))(DAT_100274b4,&local_f0,0,0,0x1000400,local_e0);
    if (iVar2 != 0) {
      if (iVar2 != -0x7789fe3e) {
        FUN_10001000(iVar2);
        FUN_100020f0(s_D3DMain_ClearBuffers__Clearing_t_10014250);
        return 0;
      }
      iVar2 = FUN_10001b50();
      if (iVar2 == 0) {
        FUN_100020f0(s_D3DMain_ClearBuffers__D3DMain_Re_10014290);
        return 0;
      }
    }
  }
  return 1;
}

