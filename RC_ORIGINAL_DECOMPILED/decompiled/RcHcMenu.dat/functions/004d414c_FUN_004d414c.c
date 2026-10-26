/*
 * FUN_004d414c at 004d414c
 * undefined __register FUN_004d414c(int * param_1, int * param_2, char * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char * param_7)
 * Address ranges: 004d414c-004d430a;004d4326-004d4379;004d43c0-004d43e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d414c(int *param_1,int *param_2,char *param_3,int param_4,int *param_5,int *param_6,
                 char *param_7)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_FS_OFFSET;
  int iVar7;
  int iStack_170;
  undefined1 *puStack_16c;
  undefined1 *puStack_168;
  int local_158;
  undefined *local_154;
  byte local_150 [256];
  int local_50;
  byte local_4c [28];
  int local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined1 local_11;
  char *local_10;
  int *local_c;
  int *local_8;
  
  puStack_168 = &stack0xfffffffc;
  local_158 = 0;
  local_154 = (undefined *)0x0;
  local_50 = 0;
  puStack_16c = &LAB_004d43e6;
  iStack_170 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_170;
  local_11 = 0;
  iVar7 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&stack0xfffffe84;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  piVar3 = (int *)FUN_004949bc(param_2);
  cVar1 = (**(code **)(*piVar3 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_150);
    FUN_00403fd4(&local_50,local_150);
    FUN_00404038(&local_50,(undefined4 *)".DoRecursiveDeleteAppObj: PrimaryKey is not initialized.")
    ;
    FUN_00403d94(local_50);
  }
  iVar4 = FUN_00494858(local_c);
  local_18 = *(int **)(iVar4 + 8);
  iVar4 = FUN_004905c0((int)local_18);
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_30 = uVar5 + 1;
    local_2c = 0;
    local_1c = (int *)0x0;
    iVar7 = *in_FS_OFFSET;
    *in_FS_OFFSET = (int)&stack0xfffffe78;
    local_24 = (int *)FUN_00490590((int)local_18,0);
    bVar2 = FUN_004918fc((int)local_24);
    if (bVar2) {
      local_1c = (int *)FUN_0049206c(local_24);
      bVar2 = FUN_004940cc(local_1c,local_4c);
      if (bVar2) {
        do {
          local_28 = (int *)FUN_00493e2c(local_1c,local_4c);
          uVar6 = FUN_0040320c(local_28,(int)&PTR_FUN_0048cd88);
          if (((char)uVar6 != '\0') && ((*(byte *)(local_28 + 6) & 0x40) == 0)) {
            iVar4 = FUN_00403224(local_28,(int)&PTR_FUN_0048cd88);
            local_20 = FUN_00490354(local_18,*(int *)(iVar4 + 0x30));
            iVar4 = FUN_00494858(local_c);
            if (iVar4 == local_20) {
              iVar7 = param_4;
              FUN_004d3910(local_8,local_c,local_1c,param_4,param_5,param_6,local_10,param_7,
                           (undefined4 *)local_4c);
            }
            if (*param_7 != '\0') break;
          }
          cVar1 = FUN_004940f4(local_1c,local_4c);
        } while (cVar1 != '\0');
      }
    }
    *in_FS_OFFSET = iVar7;
    FUN_00403094(local_1c);
    return;
  }
  if (*param_7 == '\0') {
    if ((*local_10 != '\0') && (DAT_00574604 < 1)) {
      FUN_004cd7c0(local_c,(int *)&local_154);
      uVar6 = FUN_004579dc(local_154,'\0');
      if ((char)uVar6 != '\x06') goto LAB_004d4370;
    }
    iVar4 = FUN_004d4718(local_8,local_c,'\0');
    local_11 = iVar4 == 1;
  }
LAB_004d4370:
  *in_FS_OFFSET = iVar7;
  *in_FS_OFFSET = iStack_170;
  puStack_168 = &LAB_004d43ed;
  puStack_16c = (undefined1 *)0x4d43dd;
  FUN_00403dd4(&local_158,2);
  puStack_16c = (undefined1 *)0x4d43e5;
  FUN_00403db0(&local_50);
  return;
}

