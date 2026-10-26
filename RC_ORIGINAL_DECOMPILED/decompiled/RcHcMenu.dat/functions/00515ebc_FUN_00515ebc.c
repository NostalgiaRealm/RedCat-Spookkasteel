/*
 * FUN_00515ebc at 00515ebc
 * undefined __register FUN_00515ebc(int * param_1, undefined4 * param_2)
 * Address ranges: 00515ebc-0051617a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515ebc(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  int local_250;
  int local_24c;
  byte local_248 [256];
  char *local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  byte local_134 [244];
  undefined4 uStack_40;
  char *pcStack_3c;
  char *pcStack_38;
  char *local_34;
  int local_30;
  undefined1 local_2c [12];
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  int *local_18;
  
  local_18 = (int *)&stack0xfffffffc;
  iVar4 = 0x49;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  puStack_1c = &LAB_0051617b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_2c._8_4_ = 0x515efd;
  FUN_00402fe0(*param_1,local_134);
  local_2c._8_4_ = 0x515f0b;
  FUN_00403fd4((int *)&local_34,local_134);
  local_2c._8_4_ = local_34;
  local_2c._4_4_ = ".LoadAppObjFromList: ";
  local_2c._0_4_ = "aAppObjList not assigned.";
  local_30 = 0x515f25;
  FUN_004040f0(&local_30,3);
  iVar4 = local_30;
  local_30 = 0x515f37;
  FUN_00403d94(iVar4);
  if (cRam00000018 == '\0') {
    local_30 = 0x515f50;
    FUN_00402fe0(*param_1,local_134);
    local_30 = 0x515f61;
    FUN_00403fd4(&local_13c,local_134);
    local_30 = local_13c;
    local_34 = ".LoadAppObjFromList: ";
    pcStack_38 = "aAppObjList not open.";
    pcStack_3c = (char *)0x515f81;
    FUN_004040f0(&local_138,3);
    pcStack_3c = (char *)0x515f96;
    FUN_00403d94(local_138);
  }
  local_30 = 0x515fa0;
  piVar2 = (int *)FUN_004949bc((int *)*param_2);
  local_30 = 0x515fb1;
  uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_0048b6c0);
  if ((char)uVar3 == '\0') {
    local_30 = 0x515fd6;
    uVar3 = FUN_0040320c(piVar2,(int)&PTR_FUN_004897ec);
    if ((char)uVar3 == '\0') {
      local_30 = 0x515ffa;
      FUN_00402fe0(*param_1,local_134);
      local_30 = 0x51600b;
      FUN_00403fd4(&local_144,local_134);
      local_30 = local_144;
      local_34 = ".LoadAppObjFromList: ";
      pcStack_38 = (char *)0x516026;
      FUN_00402fe0(*piVar2,local_248);
      pcStack_38 = (char *)0x516037;
      FUN_00403fd4((int *)&local_148,local_248);
      pcStack_38 = local_148;
      pcStack_3c = " as primary key not supported yet.";
      uStack_40 = 0x516052;
      FUN_004040f0(&local_140,4);
      uStack_40 = 0x516067;
      FUN_00403d94(local_140);
    }
    else {
      local_30 = 0x515fe8;
      FUN_004054ac((VARIANTARG *)local_2c,(undefined4 *)param_1[3]);
    }
  }
  else {
    local_30 = 0x515fc3;
    FUN_004053dc((VARIANTARG *)local_2c,param_1[2]);
  }
  local_30 = 0x516071;
  piVar2 = (int *)FUN_004949bc((int *)*param_2);
  local_30 = 0x516079;
  FUN_004964d0(piVar2,(undefined4 *)local_2c);
  local_30 = 0x516085;
  local_18 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX);
  local_30 = 0x516090;
  iVar4 = FUN_00549b48(0);
  local_30 = 0x51609b;
  FUN_0048ed90(local_18,*(int **)(iVar4 + 0x14));
  local_30 = 0x5160a3;
  iVar4 = FUN_00549b48(0);
  local_30 = 0x5160ae;
  FUN_0048ed90(local_18,*(int **)(iVar4 + 0x10));
  local_30 = 0x5160b6;
  iVar4 = FUN_00549b48(0);
  local_30 = 0x5160c1;
  FUN_0048ed90(local_18,*(int **)(iVar4 + 0x18));
  local_30 = 0x5160c9;
  piVar2 = (int *)(**(code **)(iRam00000000 + 0xc))();
  local_30 = 0x5160d6;
  cVar1 = FUN_004d28c0(piVar2,(int *)*param_2,local_18);
  if (cVar1 == '\0') {
    local_30 = 0x5160ea;
    FUN_00402fe0(*param_1,local_134);
    local_30 = 0x5160fb;
    FUN_00403fd4(&local_250,local_134);
    local_30 = local_250;
    local_34 = ".LoadAppObjFromList: ";
    pcStack_38 = "Item not found.";
    pcStack_3c = (char *)0x51611b;
    FUN_004040f0(&local_24c,3);
    pcStack_3c = (char *)0x516130;
    FUN_00403d94(local_24c);
  }
  local_30 = 0x516138;
  FUN_00403094(local_18);
  *in_FS_OFFSET = local_2c._0_4_;
  local_2c._8_4_ = &LAB_00516182;
  local_2c._4_4_ = 0x516155;
  FUN_00403dd4(&local_250,2);
  local_2c._4_4_ = 0x516165;
  FUN_00403dd4((int *)&local_148,5);
  local_2c._4_4_ = 0x516172;
  FUN_00403dd4((int *)&local_34,2);
  local_2c._4_4_ = 0x51617a;
  FUN_00405bcc((VARIANTARG *)local_2c);
  return;
}

