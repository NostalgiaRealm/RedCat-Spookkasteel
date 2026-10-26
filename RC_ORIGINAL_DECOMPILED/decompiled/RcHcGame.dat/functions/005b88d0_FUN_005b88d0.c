/*
 * FUN_005b88d0 at 005b88d0
 * undefined FUN_005b88d0(void)
 * Address ranges: 005b88d0-005b8b3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b88d0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iStack_fe4;
  int iStack_fe0;
  int iStack_fdc;
  undefined1 auStack_fd8 [36];
  undefined1 local_fb4 [1540];
  undefined4 local_9b0 [620];
  
  iVar3 = DAT_00722f24;
  if (DAT_00722f24 < 1) {
    iVar2 = DAT_00722f24 * 4;
    *(undefined4 *)(&DAT_00722840 + iVar2) = 0;
    *(undefined4 *)(&DAT_00722910 + iVar2) = 0;
  }
  else {
    iVar2 = DAT_00722f24 * 4;
    *(undefined4 *)(&DAT_00722840 + iVar2) = *(undefined4 *)(&DAT_00747b3c + iVar2);
    *(undefined4 *)(&DAT_00722910 + iVar2) = *(undefined4 *)(&DAT_00747b44 + iVar2);
  }
  *(undefined4 *)(&DAT_00747b40 + iVar3 * 4) = 0;
  *(undefined4 *)(&DAT_00747b48 + iVar3 * 4) = 0;
  puVar4 = local_9b0;
  for (iVar3 = 0x26c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_005ba160(param_2 + 7,param_3,param_4,local_9b0);
  iVar3 = FUN_005b8b40(param_3,param_4,local_9b0);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = FUN_005b90d0(param_3,param_4,local_9b0);
  if (iVar3 == 0) {
    return false;
  }
  FUN_005d0ab0(param_4,param_3,local_fb4);
  iVar3 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x68))();
  if (iVar3 == 0) {
    FUN_005cf220(0x1a,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x3b5,&DAT_006b3f70,
                 0);
    return false;
  }
  iVar3 = param_2[0xef];
  iStack_fe4 = 0;
  if (0 < param_2[0xee]) {
    do {
      if (DAT_00722f24 == 0) {
        bVar1 = *(byte *)(iVar3 + 4) & 5;
joined_r0x005b8a1d:
        if (bVar1 != 0) goto LAB_005b8a23;
      }
      else {
        if (0 < DAT_00722f24) {
          bVar1 = *(byte *)(iVar3 + 4) & 6;
          goto joined_r0x005b8a1d;
        }
LAB_005b8a23:
        FUN_005b4930(&iStack_fe0);
        if (((iStack_fe0 != 1) || (FUN_005d0280(), (*(byte *)(iVar3 + 4) & 4) != 0)) ||
           (FUN_005b9be0(param_2,auStack_fd8,&iStack_fdc),
           *(int *)(*(int *)(param_2[6] + 0xd5cc) + iStack_fdc * 0xc) == *param_2)) {
          if (DAT_00722f24 == 0) {
            FUN_005b5430(param_2,param_3);
          }
          else {
            FUN_005b5390(param_2,param_3,local_fb4);
            *(int *)(param_1 + 0x33698) = *(int *)(param_1 + 0x33698) + 1;
          }
        }
      }
      iStack_fe4 = iStack_fe4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iStack_fe4 < param_2[0xee]);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x33678) + 0x6c))();
  if (iVar3 == 0) {
    FUN_005cf220(0x1b,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,999,&DAT_006b3f70,0)
    ;
    return false;
  }
  FUN_005c91e0(param_3);
  iVar3 = FUN_005b62b0(param_1,param_2,param_3,param_4);
  if (iVar3 == 0) {
    return false;
  }
  iVar3 = FUN_005b7ed0(param_1,param_3);
  return iVar3 != 0;
}

