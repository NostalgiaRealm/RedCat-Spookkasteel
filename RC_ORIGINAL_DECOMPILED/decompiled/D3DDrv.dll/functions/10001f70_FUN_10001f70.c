/*
 * FUN_10001f70 at 10001f70
 * undefined4 __stdcall FUN_10001f70(void)
 * Address ranges: 10001f70-100020b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10001f70(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_100020f0(s_____D3DMain_ShutdownD3D_____10014014);
  FUN_10007270();
  DAT_10038e64 = 0;
  if (DAT_100274cc != (int *)0x0) {
    (**(code **)(*DAT_100274c8 + 0x18))(DAT_100274c8,DAT_100274cc);
    if (DAT_100274cc != (int *)0x0) {
      (**(code **)(*DAT_100274cc + 8))(DAT_100274cc);
      DAT_100274cc = (int *)0x0;
    }
  }
  if (DAT_100274c8 != (int *)0x0) {
    (**(code **)(*DAT_100274c8 + 8))(DAT_100274c8);
    DAT_100274c8 = (int *)0x0;
  }
  if (DAT_100274d0 != (int *)0x0) {
    (**(code **)(*DAT_100274d0 + 8))(DAT_100274d0);
    DAT_100274d0 = (int *)0x0;
  }
  if (DAT_100274b8 != (int *)0x0) {
    (**(code **)(*DAT_100274b4 + 0x20))(DAT_100274b4,0,DAT_100274b8);
    if (DAT_100274b8 != (int *)0x0) {
      (**(code **)(*DAT_100274b8 + 8))(DAT_100274b8);
      DAT_100274b8 = (int *)0x0;
    }
  }
  if (DAT_100274b0 != (int *)0x0) {
    (**(code **)(*DAT_100274b0 + 0x70))(DAT_100274b0,0);
  }
  if (DAT_100274bc != (int *)0x0) {
    (**(code **)(*DAT_100274bc + 8))(DAT_100274bc);
    DAT_100274bc = (int *)0x0;
  }
  if (DAT_100274b4 != (int *)0x0) {
    (**(code **)(*DAT_100274b4 + 8))(DAT_100274b4);
    DAT_100274b4 = (int *)0x0;
  }
  if (DAT_100274b0 != (int *)0x0) {
    (**(code **)(*DAT_100274b0 + 8))(DAT_100274b0);
    DAT_100274b0 = (int *)0x0;
  }
  FUN_10004130();
  if (DAT_100274ac != (int *)0x0) {
    (**(code **)(*DAT_100274ac + 8))(DAT_100274ac);
    DAT_100274ac = (int *)0x0;
  }
  if (DAT_100274a8 != (int *)0x0) {
    (**(code **)(*DAT_100274a8 + 8))(DAT_100274a8);
    DAT_100274a8 = (int *)0x0;
  }
  puVar2 = &DAT_10026fe8;
  for (iVar1 = 0x47ac; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_100020f0(s_Shutdown_was_successful____10013ff4);
  return 1;
}

