/*
 * FUN_004d1dc8 at 004d1dc8
 * undefined __register FUN_004d1dc8(int * param_1, int * param_2)
 * Address ranges: 004d1dc8-004d1f2b;004d1f75-004d20f6;004d217f-004d21cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d1dc8(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  int local_168;
  undefined4 *local_164;
  undefined4 *local_160;
  int local_15c;
  int local_158 [2];
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  byte local_140 [252];
  undefined4 uStackY_44;
  int local_40;
  undefined4 *local_3c;
  char *local_38;
  char *pcStackY_34;
  char *pcStackY_30;
  char *pcStackY_2c;
  char *pcVar8;
  
  iVar7 = 0x2c;
  do {
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pcVar8 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  pcStackY_2c = (char *)0x4d1dfb;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    pcStackY_2c = (char *)0x4d1e0f;
    FUN_00402fe0(*param_1,local_140);
    pcStackY_2c = (char *)0x4d1e1d;
    FUN_00403fd4(&local_40,local_140);
    pcStackY_2c = (char *)local_40;
    pcStackY_30 = ".InsertAppObj: ";
    pcStackY_34 = " Connection must be open";
    local_38 = (char *)0x4d1e37;
    FUN_004040f0((int *)&local_3c,3);
    local_38 = (char *)0x4d1e49;
    FUN_00403d94(local_3c);
  }
  if (param_2 == (int *)0x0) {
    pcStackY_2c = (char *)0x4d1e5f;
    FUN_00402fe0(*param_1,local_140);
    pcStackY_2c = (char *)0x4d1e70;
    FUN_00403fd4(&local_148,local_140);
    pcStackY_2c = (char *)local_148;
    pcStackY_30 = ".InsertAppObj: ";
    pcStackY_34 = " Parameter cannot be nil";
    local_38 = (char *)0x4d1e90;
    FUN_004040f0(&local_144,3);
    local_38 = (char *)0x4d1ea5;
    FUN_00403d94(local_144);
  }
  pcStackY_2c = (char *)0x4d1ead;
  iVar7 = FUN_00494858(param_2);
  pcStackY_2c = (char *)0x4d1eb2;
  bVar2 = FUN_004918fc(iVar7);
  if (!bVar2) {
    pcStackY_2c = (char *)0x4d1ec6;
    FUN_00402fe0(*param_1,local_140);
    pcStackY_2c = (char *)0x4d1ed7;
    FUN_00403fd4(&local_150,local_140);
    pcStackY_2c = (char *)local_150;
    pcStackY_30 = ".InsertAppObj: ";
    pcStackY_34 = "The object does not have a corresponding table in the database";
    local_38 = (char *)0x4d1ef7;
    FUN_004040f0(&local_14c,3);
    local_38 = (char *)0x4d1f0c;
    FUN_00403d94(local_14c);
  }
  pcStackY_30 = &LAB_004d1f2c;
  pcStackY_34 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStackY_34;
  local_38 = (char *)0x4d1f22;
  pcStackY_2c = &stack0xfffffffc;
  FUN_0045fa7c(param_2);
  *in_FS_OFFSET = pcStackY_34;
  pcStackY_2c = (char *)0x4d1f80;
  bVar2 = FUN_004940cc(param_2,(byte *)&local_38);
  if (bVar2) {
    do {
      pcStackY_2c = (char *)0x4d1f93;
      piVar3 = (int *)FUN_00494c5c(param_2,(byte *)&local_38);
      pcStackY_2c = (char *)0x4d1fa1;
      iVar7 = FUN_00493e2c(param_2,(byte *)&local_38);
      if (piVar3 == (int *)0x0) {
        pcStackY_2c = (char *)0x4d1fba;
        FUN_00402fe0(*param_1,local_140);
        pcStackY_2c = (char *)0x4d1fcb;
        FUN_00403fd4(&local_15c,local_140);
        pcStackY_2c = (char *)local_15c;
        pcStackY_30 = ".InsertAppObj: ";
        pcStackY_34 = *(char **)(iVar7 + 0x24);
        pcVar8 = " is not allocated.";
        local_3c = (undefined4 *)0x4d1ff1;
        FUN_004040f0(local_158,4);
        local_3c = (undefined4 *)0x4d2006;
        FUN_00403d94(local_158[0]);
      }
      pcStackY_2c = (char *)0x4d200e;
      piVar4 = (int *)FUN_00494858(param_2);
      pcStackY_2c = (char *)0x4d2016;
      uVar5 = FUN_004917c4(piVar4,(byte *)&local_38);
      if (((char)uVar5 != '\0') && ((*(byte *)(iVar7 + 0x18) & 8) == 0)) {
        pcStackY_2c = (char *)0x4d202f;
        cVar1 = (**(code **)(*piVar3 + 0x4c))();
        if (cVar1 == '\0') {
          pcStackY_2c = (char *)0x4d203e;
          FUN_004b632c((int)piVar3,(int *)&stack0xffffffe4);
          pcStackY_2c = ".InsertAppObj: ";
          pcStackY_34 = "\r\n";
          local_38 = "Tip: is TAppObj.SetPropsToDefault called?";
          local_3c = (undefined4 *)0x4d2060;
          pcStackY_30 = unaff_EDI;
          FUN_004040f0((int *)&local_160,3);
          local_3c = local_160;
          uStackY_44 = 0x4d207b;
          pcVar8 = unaff_EDI;
          FUN_00402fe0(*param_1,local_140);
          uStackY_44 = 0x4d208c;
          FUN_00403fd4((int *)&local_164,local_140);
          uStackY_44 = 0x4d209e;
          uVar5 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_164,(undefined4 *)pcVar8,
                               local_3c,(undefined4 *)local_38);
          uStackY_44 = 0x4d20a3;
          FUN_0040382c(uVar5);
        }
      }
      pcStackY_2c = (char *)0x4d20ae;
      cVar1 = FUN_004940f4(param_2,(byte *)&local_38);
    } while (cVar1 != '\0');
  }
  pcStackY_30 = &LAB_004d20f7;
  pcStackY_34 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStackY_34;
  local_38 = (char *)0x4d20cf;
  pcStackY_2c = &stack0xfffffffc;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  if ((char)param_1[3] != '\0') {
    local_38 = (char *)0x4d20e3;
    puVar6 = (undefined4 *)FUN_004d0424((int)param_1);
    local_38 = (char *)0x4d20ea;
    (**(code **)*puVar6)(puVar6,param_2);
  }
  *in_FS_OFFSET = pcStackY_34;
  if (cVar1 != '\0') {
    pcStackY_2c = (char *)0x4d218d;
    iVar7 = FUN_00402fdc(param_2);
    pcStackY_2c = (undefined1 *)0x4d219a;
    FUN_004ced38((int *)param_1[1],iVar7);
  }
  *in_FS_OFFSET = pcVar8;
  FUN_00403dd4(&local_168,10);
  FUN_00403dd4(&local_40,2);
  FUN_00403db0((int *)&stack0xffffffe4);
  return;
}

