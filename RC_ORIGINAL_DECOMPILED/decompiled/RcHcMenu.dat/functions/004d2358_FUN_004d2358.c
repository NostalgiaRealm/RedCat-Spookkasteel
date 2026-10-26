/*
 * FUN_004d2358 at 004d2358
 * undefined __register FUN_004d2358(int * param_1, int * param_2, undefined4 param_3, byte param_4)
 * Address ranges: 004d2358-004d24cd;004d2517-004d2698;004d2721-004d276e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d2358(int *param_1,int *param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *in_FS_OFFSET;
  int local_168;
  undefined4 *local_164;
  int local_160;
  int local_15c [2];
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  byte local_144 [256];
  int local_44;
  int local_40;
  byte local_3c [4];
  uint uStackY_38;
  char *pcStackY_34;
  char *pcStackY_30;
  char *pcStackY_2c;
  char *pcVar9;
  char *pcVar10;
  
  pcVar10 = &stack0xfffffffc;
  iVar8 = 0x2c;
  do {
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  LOCK();
  UNLOCK();
  *in_FS_OFFSET = (uint)&stack0xffffffd8;
  pcStackY_2c = (char *)0x4d2392;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 == '\0') {
    pcStackY_2c = (char *)0x4d23a6;
    FUN_00402fe0(*param_1,local_144);
    pcStackY_2c = (char *)0x4d23b4;
    FUN_00403fd4(&local_44,local_144);
    pcStackY_2c = (char *)local_44;
    pcStackY_30 = ".UpdateAppObj: ";
    pcStackY_34 = " Connection must be open";
    uStackY_38 = 0x4d23ce;
    FUN_004040f0(&local_40,3);
    uStackY_38 = 0x4d23e0;
    FUN_00403d94(local_40);
  }
  pcStackY_2c = (char *)0x4d23e8;
  piVar3 = (int *)FUN_004949bc(param_2);
  pcStackY_2c = (char *)0x4d23ed;
  cVar1 = (**(code **)(*piVar3 + 0x4c))();
  if (cVar1 == '\0') {
    pcStackY_2c = (char *)0x4d2401;
    FUN_00402fe0(*param_1,local_144);
    pcStackY_2c = (char *)0x4d2412;
    FUN_00403fd4(&local_14c,local_144);
    pcStackY_2c = (char *)local_14c;
    pcStackY_30 = ".UpdateAppObj: ";
    pcStackY_34 = "PrimaryKey is not initialized.";
    uStackY_38 = 0x4d2432;
    FUN_004040f0(&local_148,3);
    uStackY_38 = 0x4d2447;
    FUN_00403d94(local_148);
  }
  pcStackY_2c = (char *)0x4d244f;
  iVar8 = FUN_00494858(param_2);
  pcStackY_2c = (char *)0x4d2454;
  bVar2 = FUN_004918fc(iVar8);
  if (!bVar2) {
    pcStackY_2c = (char *)0x4d2468;
    FUN_00402fe0(*param_1,local_144);
    pcStackY_2c = (char *)0x4d2479;
    FUN_00403fd4(&local_154,local_144);
    pcStackY_2c = (char *)local_154;
    pcStackY_30 = ".UpdateAppObj: ";
    pcStackY_34 = "The object does not have a corresponding table in the database";
    uStackY_38 = 0x4d2499;
    FUN_004040f0(&local_150,3);
    uStackY_38 = 0x4d24ae;
    FUN_00403d94(local_150);
  }
  pcStackY_30 = &LAB_004d24ce;
  pcStackY_34 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&pcStackY_34;
  uStackY_38 = 0x4d24c4;
  pcStackY_2c = &stack0xfffffffc;
  FUN_0045fa7c(param_2);
  *in_FS_OFFSET = (uint)pcStackY_34;
  pcStackY_2c = (char *)0x4d252c;
  bVar2 = FUN_004940cc(param_2,local_3c);
  if (bVar2) {
    do {
      pcStackY_2c = (char *)0x4d253f;
      piVar3 = (int *)FUN_00494c5c(param_2,local_3c);
      pcStackY_2c = (char *)0x4d254d;
      iVar8 = FUN_00493e2c(param_2,local_3c);
      if (piVar3 == (int *)0x0) {
        pcStackY_2c = (char *)0x4d2566;
        FUN_00402fe0(*param_1,local_144);
        pcStackY_2c = (char *)0x4d2577;
        FUN_00403fd4(&local_160,local_144);
        pcStackY_2c = (char *)local_160;
        pcStackY_30 = ".UpdateAppObj: ";
        pcStackY_34 = *(char **)(iVar8 + 0x24);
        local_3c[0] = 0x9d;
        local_3c[1] = 0x25;
        local_3c[2] = 0x4d;
        local_3c[3] = 0;
        FUN_004040f0(local_15c,4);
        local_3c[0] = 0xb2;
        local_3c[1] = 0x25;
        local_3c[2] = 0x4d;
        local_3c[3] = 0;
        FUN_00403d94(local_15c[0]);
      }
      pcStackY_2c = (char *)0x4d25ba;
      cVar1 = FUN_00496c8c(piVar3);
      if (cVar1 != '\0') {
        pcStackY_2c = (char *)0x4d25c6;
        piVar4 = (int *)FUN_00494858(param_2);
        pcStackY_2c = (char *)0x4d25ce;
        uVar5 = FUN_004917c4(piVar4,local_3c);
        if ((char)uVar5 != '\0') {
          pcStackY_2c = (char *)0x4d25da;
          cVar1 = (**(code **)(*piVar3 + 0x4c))();
          if (cVar1 == '\0') {
            pcStackY_2c = (char *)0x4d25e9;
            FUN_004b632c((int)piVar3,(int *)&stack0xffffffe0);
            pcStackY_30 = pcVar10;
            pcStackY_2c = ".UpdateAppObj: ";
            uStackY_38 = 0x4d2606;
            pcVar9 = pcStackY_30;
            pcVar10 = pcStackY_30;
            FUN_00402fe0(*param_1,local_144);
            uStackY_38 = 0x4d2617;
            FUN_00403fd4((int *)&local_164,local_144);
            uStackY_38 = 0x4d2629;
            uVar5 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_164,(undefined4 *)pcVar9,
                                 (undefined4 *)pcStackY_30,(undefined4 *)pcStackY_2c);
            uStackY_38 = 0x4d262e;
            FUN_0040382c(uVar5);
          }
        }
      }
      pcStackY_2c = (char *)0x4d2639;
      cVar1 = FUN_004940f4(param_2,local_3c);
    } while (cVar1 != '\0');
  }
  pcStackY_30 = &LAB_004d2699;
  pcStackY_34 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&pcStackY_34;
  uStackY_38 = (uint)param_4;
  local_3c[0] = 0x61;
  local_3c[1] = 0x26;
  local_3c[2] = 0x4d;
  local_3c[3] = 0;
  pcStackY_2c = &stack0xfffffffc;
  iVar8 = (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
  if ((char)param_1[3] != '\0') {
    local_3c[0] = 0x75;
    local_3c[1] = 0x26;
    local_3c[2] = 0x4d;
    local_3c[3] = 0;
    iVar6 = FUN_004d0424((int)param_1);
    local_3c[0] = 0x7d;
    local_3c[1] = 0x26;
    local_3c[2] = 0x4d;
    local_3c[3] = 0;
    FUN_004b1200(iVar6,param_2);
    local_3c[0] = 0x85;
    local_3c[1] = 0x26;
    local_3c[2] = 0x4d;
    local_3c[3] = 0;
    puVar7 = (undefined4 *)FUN_004d0424((int)param_1);
    local_3c[0] = 0x8c;
    local_3c[1] = 0x26;
    local_3c[2] = 0x4d;
    local_3c[3] = 0;
    (**(code **)*puVar7)(puVar7,param_2);
  }
  *in_FS_OFFSET = uStackY_38;
  if (0 < iVar8) {
    pcStackY_30 = (char *)0x4d272f;
    iVar8 = FUN_00402fdc(param_2);
    pcStackY_30 = (undefined1 *)0x4d273c;
    FUN_004ced38((int *)param_1[1],iVar8);
  }
  *in_FS_OFFSET = (uint)pcStackY_2c;
  FUN_00403dd4(&local_168,9);
  FUN_00403dd4(&local_44,2);
  FUN_00403db0((int *)&stack0xffffffe0);
  return;
}

