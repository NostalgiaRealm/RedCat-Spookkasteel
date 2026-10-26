/*
 * FUN_10003f60 at 10003f60
 * undefined4 __stdcall FUN_10003f60(void)
 * Address ranges: 10003f60-100040e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003f60(void)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  int *piStack_9c;
  undefined1 *puStack_98;
  undefined4 *puStack_94;
  undefined *puStack_8c;
  undefined1 *puStack_88;
  uint *puStack_84;
  undefined4 local_7c [14];
  int iStack_44;
  uint auStack_34 [8];
  undefined4 uStack_14;
  
  puStack_84 = (uint *)0x10003f6d;
  FUN_100020f0(s_____D3DMain_CreateZBuffer_____10014f6c);
  if (DAT_100274b8 != (int *)0x0) {
    puStack_84 = (uint *)0x10003f7f;
    (**(code **)(*DAT_100274b8 + 8))();
    DAT_100274b8 = (int *)0x0;
  }
  puVar1 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_7c[2] = DAT_10027078;
  puStack_84 = auStack_34;
  local_7c[0] = 0x7c;
  local_7c[1] = 0x1007;
  uStack_14 = 0x24000;
  local_7c[3] = DAT_10027074;
  auStack_34[1] = 0x400;
  puStack_88 = &LAB_100040f0;
  puStack_8c = &DAT_1002b2f0 + DAT_10030624 * 0x938;
  puStack_94 = (undefined4 *)0x10003ff8;
  (**(code **)(*DAT_100274ac + 0x28))();
  puStack_98 = (undefined1 *)&puStack_8c;
  if (iStack_44 != 0x20) {
    puStack_94 = (undefined4 *)0x1000400c;
    FUN_100020f0(s_CreateZBuffer__No_zbuffer_found_f_10014f38);
    return 0;
  }
  puStack_94 = &DAT_100274b8;
  piStack_9c = DAT_100274a8;
  iVar2 = (**(code **)(*DAT_100274a8 + 0x18))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*DAT_100274b4 + 0xc))(DAT_100274b4,DAT_100274b8);
    if (iVar2 == 0) {
      iVar2 = FUN_10002d10(&piStack_9c,DAT_100274b8);
      if (iVar2 == 0) {
        _DAT_100274c4 = auStack_34[0] >> 0xe & 1;
        return 1;
      }
      FUN_10001000(iVar2);
      pcVar3 = s_CreateZBuffer__Failed_to_get_sur_10014df0;
    }
    else {
      FUN_10001000(iVar2);
      pcVar3 = s_CreateZBuffer__AddAttachedBuffer_10014e38;
    }
  }
  else {
    if ((iVar2 == -0x7ff8fff2) || (iVar2 == -0x7789fe84)) {
      FUN_100020f0(s_CreateZBuffer__There_was_not_eno_10014e78);
      goto LAB_100040b1;
    }
    FUN_10001000(iVar2);
    pcVar3 = s_CreateZBuffer__CreateSurface_for_10014efc;
  }
  FUN_100020f0(pcVar3);
LAB_100040b1:
  if (DAT_100274b8 != (int *)0x0) {
    (**(code **)(*DAT_100274b8 + 8))(DAT_100274b8);
    DAT_100274b8 = (int *)0x0;
  }
  return 0;
}

