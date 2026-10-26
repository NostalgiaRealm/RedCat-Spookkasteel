/*
 * FUN_006112be at 006112be
 * undefined FUN_006112be(void)
 * Address ranges: 006112be-006113d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_006112be(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [16];
  undefined1 local_c [4];
  uint local_8;
  
  FUN_00614dc3();
  FUN_00614dc3();
  if (DAT_00710058 == (char *)0x0) goto LAB_00611350;
  if (*DAT_00710058 == '?') {
    if (DAT_00710058[1] == '@') {
      DAT_00710054 = DAT_00710054 + 2;
      uVar1 = FUN_006113d2(local_24);
      puVar2 = local_2c;
      FUN_00614e92(&DAT_00652410);
      uVar1 = FUN_006151fc(puVar2,uVar1);
      FUN_00614df0(uVar1);
      puVar2 = local_1c;
    }
    else {
      if (DAT_00710058[1] != '$') goto LAB_00611338;
      puVar2 = (undefined1 *)FUN_00611e27(local_34);
    }
  }
  else {
LAB_00611338:
    puVar2 = (undefined1 *)FUN_006113d2(local_34);
  }
  FUN_006154c8(puVar2);
LAB_00611350:
  if ((local_8 & 0xf) == 3) {
    return 0;
  }
  if (((*DAT_00710054 == '\0') || ((DAT_00710064._1_1_ & 0x10) != 0)) && ((local_8 & 0xf) != 1)) {
    FUN_006154c8(local_c);
  }
  else {
    FUN_006154a5(DAT_00710058);
  }
  if (DAT_0071005c == 0) {
    iVar3 = FUN_00615087();
    DAT_00710060 = iVar3 + 1;
    DAT_0071005c = FUN_00614d0f(DAT_00710060,1);
    if (DAT_0071005c == 0) {
      return 0;
    }
  }
  FUN_006150e8(DAT_0071005c,DAT_00710060);
  return DAT_0071005c;
}

