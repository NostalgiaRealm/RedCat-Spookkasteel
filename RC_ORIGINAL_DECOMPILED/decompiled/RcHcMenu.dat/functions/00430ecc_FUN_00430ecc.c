/*
 * FUN_00430ecc at 00430ecc
 * undefined __register FUN_00430ecc(char param_1)
 * Address ranges: 00430ecc-004310f1;00431126-0043112a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00430ecc(char param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int local_14;
  undefined3 uVar7;
  
  puStack_20 = &stack0xfffffffc;
  puStack_2c = &stack0xfffffffc;
  piVar8 = (int *)0x0;
  if ((DAT_00573760 == (int *)0x0) || ((char)DAT_00573760[0xc] != '\0')) {
    return;
  }
  puStack_24 = &LAB_0043111f;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  piVar1 = DAT_00573760;
  puStack_30 = &LAB_004310f2;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  *(undefined1 *)(DAT_00573760 + 0xc) = 1;
  FUN_0042fe60(DAT_00573760,DAT_00573768);
  if (DAT_0057377c == '\x02') {
    piVar8 = (int *)FUN_00403224(DAT_00573760,(int)&PTR_FUN_0042dc04);
    (**(code **)(*piVar8 + 0x30))();
    *(bool *)(piVar8 + 0x1b) = piVar8[1] == 0;
  }
  if (DAT_00573760[1] == 0) {
LAB_00430f9b:
    local_18 = DAT_00573760[3];
    local_14 = DAT_00573760[4];
  }
  else {
    uVar4 = FUN_0040320c((int *)DAT_00573760[1],(int)&PTR_FUN_0042e674);
    if ((char)uVar4 == '\0') goto LAB_00430f9b;
    local_18 = DAT_00573760[5];
    local_14 = DAT_00573760[6];
  }
  cVar2 = FUN_00430e5c();
  if (cVar2 != '\0') {
    if ((DAT_0057377c == '\x02') && ((char)piVar8[0x1b] != '\0')) {
LAB_00430fda:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_00430fe6;
      }
    }
    else if (DAT_0057377c != '\0') {
      bVar3 = FUN_00430780(CONCAT31(extraout_var,1));
      if (bVar3) goto LAB_00430fda;
    }
  }
  cVar2 = '\0';
LAB_00430fe6:
  if (DAT_0057377c == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar8[0x1b] != '\0')) {
      piVar5 = FUN_0044879c((int *)piVar8[0xe]);
      if ((piVar5 != (int *)0x0) && (piVar5[0x82] == piVar8[0xe])) {
        FUN_0044c24c(piVar5,(int *)0x0,extraout_ECX);
      }
      FUN_00433700(DAT_0057375c,0xb03a,0,DAT_00573760);
    }
  }
  else if (DAT_00573780 == 0) {
    SetCursor(DAT_00573774);
  }
  else {
    FUN_0043a2e8(DAT_00573780);
  }
  DAT_0057375c = 0;
  DAT_00573760 = (int *)0x0;
  if (piVar1[1] != 0) {
    uVar7 = (undefined3)((uint)piVar1 >> 8);
    uVar6 = CONCAT31(uVar7,3);
    if (cVar2 == '\0') {
      uVar6 = CONCAT31(uVar7,4);
      piVar1[3] = 0;
      piVar1[4] = 0;
      local_18 = 0;
      local_14 = 0;
    }
    FUN_00430688((HWND)piVar1[2],uVar6,piVar1,piVar1 + 3,piVar1[1]);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004310f9;
  puStack_30 = (undefined1 *)0x4310c4;
  FUN_00403094(DAT_00573788);
  DAT_00573788 = (int *)0x0;
  *(undefined1 *)(piVar1 + 0xc) = 0;
  puStack_30 = (undefined1 *)local_14;
  uStack_34 = CONCAT31((int3)((uint)local_14 >> 8),cVar2);
  (**(code **)*piVar1)(piVar1,piVar1[1],local_18);
  DAT_00573760 = (int *)0x0;
  return;
}

