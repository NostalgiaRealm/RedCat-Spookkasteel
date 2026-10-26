/*
 * FUN_0053f5f4 at 0053f5f4
 * undefined __register FUN_0053f5f4(int * param_1)
 * Address ranges: 0053f5f4-0053faf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053f5f4(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *in_FS_OFFSET;
  byte local_160 [28];
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  byte local_11c [228];
  undefined4 uStack_38;
  char *pcStack_34;
  char *pcStack_30;
  int iStack_2c;
  char *pcStack_28;
  char *pcStack_24;
  undefined1 *puStack_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_14 = &stack0xfffffffc;
  local_10 = 0x2b;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = &LAB_0053fafa;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_1c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x84] == 0) {
    puStack_20 = (undefined1 *)0x53f631;
    FUN_00402fe0(*param_1,local_11c);
    puStack_20 = (undefined1 *)0x53f63f;
    FUN_00403fd4(&local_1c,local_11c);
    puStack_20 = (undefined1 *)local_1c;
    pcStack_24 = ".TryOpenList: ";
    pcStack_28 = "No AppObjDesc assigned.";
    iStack_2c = 0x53f659;
    FUN_004040f0((int *)&local_18,3);
    iStack_2c = 0x53f66b;
    FUN_00403d94(local_18);
    puVar1 = local_14;
  }
  local_14 = puVar1;
  if (local_8[0x87] == 0) {
    iStack_2c = 0x53f687;
    FUN_00402fe0(*local_8,local_11c);
    iStack_2c = 0x53f698;
    FUN_00403fd4(&local_124,local_11c);
    iStack_2c = local_124;
    pcStack_30 = ".TryOpenList: ";
    pcStack_34 = "No DatabaseConnection assigned.";
    uStack_38 = 0x53f6b8;
    FUN_004040f0(&local_120,3);
    uStack_38 = 0x53f6cd;
    FUN_00403d94(local_120);
  }
  if (local_8[0xf0] == 0) {
    iStack_2c = 0x53f6e9;
    FUN_00402fe0(*local_8,local_11c);
    iStack_2c = 0x53f6fa;
    FUN_00403fd4(&local_12c,local_11c);
    iStack_2c = local_12c;
    pcStack_30 = ".TryOpenList: ";
    pcStack_34 = "No TAppSortOrder assigned.";
    uStack_38 = 0x53f71a;
    FUN_004040f0(&local_128,3);
    uStack_38 = 0x53f72f;
    FUN_00403d94(local_128);
  }
  if (local_8[0xf1] != 0) {
    iStack_2c = 0x53f755;
    uVar3 = FUN_0040320c((int *)local_8[0xf1],*(int *)(local_8[0x84] + 0x34));
    if ((char)uVar3 == '\0') {
      iStack_2c = 0x53f769;
      FUN_00402fe0(*local_8,local_11c);
      iStack_2c = 0x53f77a;
      FUN_00403fd4(&local_134,local_11c);
      iStack_2c = local_134;
      pcStack_30 = ".TryOpenList: ";
      pcStack_34 = "Incompatible Artifact ObjTtype.";
      uStack_38 = 0x53f79a;
      FUN_004040f0(&local_130,3);
      uStack_38 = 0x53f7af;
      FUN_00403d94(local_130);
    }
  }
  if ((local_8[0xf1] != 0) && (*(char *)((int)local_8 + 0x3b9) != '\0')) {
    iStack_2c = 0x53f7d7;
    FUN_00402fe0(*local_8,local_11c);
    iStack_2c = 0x53f7e8;
    FUN_00403fd4(&local_13c,local_11c);
    iStack_2c = local_13c;
    pcStack_30 = ".TryOpenList: ";
    pcStack_34 = "Artifact AppObjs only allowed on LT_MEMORY ListTypes.";
    uStack_38 = 0x53f808;
    FUN_004040f0(&local_138,3);
    uStack_38 = 0x53f81d;
    FUN_00403d94(local_138);
  }
  iStack_2c = 0x53f82b;
  FUN_00403094((int *)local_8[0x85]);
  cVar2 = *(char *)((int)local_8 + 0x3b9);
  if (cVar2 == '\0') {
    iStack_2c = 0x53f855;
    piVar6 = FUN_005471e0((int *)&PTR_FUN_0052b7f4,'\x01',local_8[0xf0]);
    local_8[0x85] = (int)piVar6;
  }
  else if (cVar2 == '\x01') {
    iStack_2c = 0x53f878;
    piVar6 = FUN_005471e0((int *)&PTR_FUN_0054580c,'\x01',local_8[0xf0]);
    local_8[0x85] = (int)piVar6;
  }
  else if (cVar2 == '\x02') {
    iStack_2c = 0x53f898;
    piVar6 = FUN_005471e0((int *)&LAB_0053b55c,'\x01',local_8[0xf0]);
    local_8[0x85] = (int)piVar6;
  }
  else {
    iStack_2c = 0x53f8b3;
    FUN_00402fe0(*local_8,local_11c);
    iStack_2c = 0x53f8c4;
    FUN_00403fd4(&local_144,local_11c);
    iStack_2c = local_144;
    pcStack_30 = ".TryOpenList: ";
    pcStack_34 = "Unsupported list type.";
    uStack_38 = 0x53f8e4;
    FUN_004040f0(&local_140,3);
    uStack_38 = 0x53f8f9;
    FUN_00403d94(local_140);
  }
  iStack_2c = 0x53f907;
  iVar4 = FUN_0048ec24(local_8[0xef]);
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    iStack_2c = 0x53f911;
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_14 = (undefined1 *)(uVar5 + 1);
    local_10 = 0;
    do {
      iStack_2c = 0x53f937;
      FUN_0048f02c((int *)local_8[0xef],local_10,(undefined4 *)local_160);
      iStack_2c = 0x53f94e;
      cVar2 = FUN_0048ef44(*(int **)(local_8[0xf0] + 0x10),local_160);
      if (cVar2 == '\0') {
        iStack_2c = 0x53f969;
        FUN_0048f02c((int *)local_8[0xef],local_10,(undefined4 *)local_160);
        iStack_2c = 0x53f980;
        (**(code **)(**(int **)(local_8[0xf0] + 0x10) + 0xc))
                  (*(int **)(local_8[0xf0] + 0x10),local_160);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != (undefined1 *)0x0);
  }
  iStack_2c = 0x53f990;
  FUN_0053e970((int)local_8);
  iStack_2c = 0x53f998;
  uVar3 = FUN_0053ebd0(local_8);
  iStack_2c = 0x53f9a8;
  FUN_00549bfc(local_8[0x85],uVar3);
  iStack_2c = 0x53f9bf;
  FUN_0054a14c((int *)local_8[0x85],(int *)local_8[0x86]);
  iStack_2c = 0x53f9c7;
  iVar4 = FUN_0053ed48(local_8);
  iStack_2c = 0x53f9d7;
  FUN_00549c18((int *)local_8[0x85],iVar4);
  iStack_2c = 0x53f9ee;
  FUN_0054a030((int *)local_8[0x85],(char)local_8[0xee]);
  iStack_2c = 0x53f9fc;
  FUN_00549a28((int *)local_8[0x85]);
  if (local_8[0xf1] != 0) {
    iStack_2c = 0x53fa20;
    uVar3 = FUN_0040320c((int *)local_8[0x85],(int)&PTR_FUN_0052b7f4);
    if ((char)uVar3 != '\0') {
      iStack_2c = 0x53fa32;
      piVar6 = (int *)FUN_00494858((int *)local_8[0xf1]);
      iStack_2c = 0x53fa37;
      local_c = (int *)FUN_0049206c(piVar6);
      iStack_2c = 0x53fa4b;
      FUN_00493768(local_c,(int *)local_8[0xf1]);
      iStack_2c = 0x53fa5f;
      iVar4 = FUN_00403224((int *)local_8[0x85],(int)&PTR_FUN_0052b7f4);
      iStack_2c = 0x53fa69;
      FUN_0052e700(iVar4,local_c,0);
      iStack_2c = 0x53fa7d;
      iVar4 = FUN_00403224((int *)local_8[0x85],(int)&PTR_FUN_0052b7f4);
      iStack_2c = 0x53fa82;
      FUN_0052be28(iVar4);
      iStack_2c = 0x53fa96;
      piVar6 = (int *)FUN_00403224((int *)local_8[0x85],(int)&PTR_FUN_0052b7f4);
      iStack_2c = 0x53fa9b;
      FUN_00547a58(piVar6);
    }
  }
  iStack_2c = 0x53faa3;
  iVar4 = FUN_0053eb74((int)local_8);
  iStack_2c = 0x53fab1;
  FUN_0053e340(iVar4,local_8[0x85]);
  iStack_2c = 0x53fab9;
  iVar4 = FUN_0053eb74((int)local_8);
  iStack_2c = 0x53fac7;
  FUN_0053e35c(iVar4,local_8[0xef]);
  iStack_2c = 0x53facf;
  FUN_0053fc3c(local_8);
  *in_FS_OFFSET = (int)pcStack_28;
  puStack_20 = &LAB_0053fb01;
  pcStack_24 = (char *)0x53faec;
  FUN_00403dd4(&local_144,10);
  pcStack_24 = (char *)0x53faf9;
  FUN_00403dd4(&local_1c,2);
  return;
}

