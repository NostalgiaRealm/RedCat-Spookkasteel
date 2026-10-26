/*
 * FUN_10002500 at 10002500
 * undefined4 __stdcall FUN_10002500(void)
 * Address ranges: 10002500-100026c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10002500(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_10002700(s_____D3DMain_ShutdownD3D_____10017014);
  FUN_100070b0();
  DAT_10028934 = 0;
  if (DAT_1001bcd0 != (int *)0x0) {
    (**(code **)(*DAT_1001bcd0 + 8))(DAT_1001bcd0);
    DAT_1001bcd0 = (int *)0x0;
  }
  if (DAT_1001bcc0 != (int *)0x0) {
    (**(code **)(*DAT_1001bcbc + 0x20))(DAT_1001bcbc,0,DAT_1001bcc0);
    if (DAT_1001bcc0 != (int *)0x0) {
      (**(code **)(*DAT_1001bcc0 + 8))(DAT_1001bcc0);
      DAT_1001bcc0 = (int *)0x0;
    }
  }
  if (DAT_1001bcb8 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb8 + 0x70))(DAT_1001bcb8,0);
  }
  if (DAT_1001bcc4 != (int *)0x0) {
    (**(code **)(*DAT_1001bcc4 + 8))(DAT_1001bcc4);
    DAT_1001bcc4 = (int *)0x0;
  }
  if (DAT_1001bcbc != (int *)0x0) {
    (**(code **)(*DAT_1001bcbc + 8))(DAT_1001bcbc);
    DAT_1001bcbc = (int *)0x0;
  }
  if (DAT_1001bcb8 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb8 + 8))(DAT_1001bcb8);
    DAT_1001bcb8 = (int *)0x0;
  }
  if (DAT_1001b4ac == 0) goto LAB_1000267d;
  DAT_1001b4ac = 0;
  if (DAT_1001eee0 != 0) {
    iVar1 = (**(code **)(*DAT_1001bcb0 + 0x4c))(DAT_1001bcb0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_D3DMain_RestoreDisplayMode__Rest_10018534);
      goto LAB_1000267d;
    }
    iVar1 = (**(code **)(*DAT_1001bcb0 + 0x50))(DAT_1001bcb0,DAT_1001b3f0,8);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10002700(s_SetCooperativeLevel_to_normal_fa_10018574);
      goto LAB_1000267d;
    }
  }
  SetWindowLongA(DAT_1001b3f0,-0x10,DAT_1001b4a8);
  SetWindowPos(DAT_1001b3f0,(HWND)0x0,DAT_1001b498,DAT_1001b49c,DAT_1001b4a0 - DAT_1001b498,
               DAT_1001b4a4 - DAT_1001b49c,0x104);
  ShowWindow(DAT_1001b3f0,1);
LAB_1000267d:
  if (DAT_1001bcb4 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb4 + 8))(DAT_1001bcb4);
    DAT_1001bcb4 = (int *)0x0;
  }
  if (DAT_1001bcb0 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb0 + 8))(DAT_1001bcb0);
    DAT_1001bcb0 = (int *)0x0;
  }
  puVar2 = &DAT_1001b3f0;
  for (iVar1 = 0x3557; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_10002700(s_Shutdown_was_successful____10017034);
  return 1;
}

