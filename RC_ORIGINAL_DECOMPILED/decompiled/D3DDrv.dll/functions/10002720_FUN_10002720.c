/*
 * FUN_10002720 at 10002720
 * undefined4 __stdcall FUN_10002720(void)
 * Address ranges: 10002720-100028f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002720(void)

{
  float fVar1;
  int iVar2;
  int **ppiVar3;
  float *pfVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piStack_90;
  int local_84;
  int iStack_80;
  undefined4 uStack_7c;
  float afStack_78 [19];
  undefined4 uStack_2c;
  int iStack_10;
  int iStack_c;
  
  piStack_90 = (int *)0x10002731;
  FUN_100020f0(s_____D3DMain_CreateViewPort_____100141a0);
  piStack_90 = &local_84;
  iVar2 = (**(code **)(*DAT_100274ac + 0x18))();
  if (iVar2 != 0) {
    FUN_10001000(iVar2);
    FUN_100020f0(s_Create_D3D_viewport_failed___s_1001417c);
    return 0;
  }
  piVar6 = piStack_90;
  iVar2 = (**(code **)(*DAT_100274c8 + 0x14))();
  if (iVar2 != 0) {
    FUN_10001000(iVar2);
    FUN_100020f0(s_Add_D3D_viewport_failed___s_1001415c);
    return 0;
  }
  fVar1 = (float)iStack_c;
  ppiVar3 = &piStack_90;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar3 = (int *)0x0;
    ppiVar3 = ppiVar3 + 1;
  }
  afStack_78[2] = (fVar1 + fVar1) / (float)iStack_10;
  local_84 = iStack_10;
  iStack_80 = iStack_c;
  ppiVar3 = &piStack_90;
  piStack_90 = (int *)0x2c;
  uStack_7c = 0xbf800000;
  afStack_78[1] = 2.0;
  afStack_78[3] = 0.0;
  afStack_78[4] = 1.0;
  afStack_78[0] = afStack_78[2] * 0.5;
  iVar2 = (**(code **)(*piVar6 + 0x44))();
  if (iVar2 != 0) {
    FUN_10001000(iVar2);
    FUN_100020f0(s_SetViewport_failed___s_10014140);
    return 0;
  }
  DAT_100274cc = ppiVar3;
  iVar2 = (**(code **)(*DAT_100274ac + 0x14))();
  if (iVar2 != 0) {
    FUN_10001000(iVar2);
    FUN_100020f0(s_D3DMain_CreateViewPort__CreateMa_10014108);
    return 0;
  }
  pfVar4 = afStack_78;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  afStack_78[5] = 0.0;
  afStack_78[1] = 0.0;
  afStack_78[6] = 0.0;
  afStack_78[2] = 0.0;
  afStack_78[7] = 0.0;
  afStack_78[3] = 0.0;
  afStack_78[0] = 1.12104e-43;
  uStack_2c = 0x10;
  (**(code **)(*DAT_100274d0 + 0xc))(DAT_100274d0,afStack_78);
  puVar5 = &stack0xffffff50;
  (**(code **)(*DAT_100274d0 + 0x14))(DAT_100274d0,DAT_100274c8,puVar5);
  (*(code *)(*DAT_100274cc)[8])(DAT_100274cc,puVar5);
  return 1;
}

