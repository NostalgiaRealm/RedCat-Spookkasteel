/*
 * FUN_005d0300 at 005d0300
 * undefined FUN_005d0300(void)
 * Address ranges: 005d0300-005d05eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005d0300(float *param_1,float *param_2,float *param_3,undefined4 *param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float local_18;
  float local_14;
  float local_10;
  
  pfVar1 = param_3;
  FUN_005b2fe0(&local_18);
  if (param_4 == (undefined4 *)0x0) {
    param_4 = &param_4;
  }
  if (local_18 <= 0.0) {
    if ((((local_18 < 0.0) && (*pfVar1 <= param_1[3])) &&
        (param_5 = param_1[3], param_5 <= *param_2)) &&
       (iVar2 = FUN_005d05f0(param_1,&param_3,param_5), iVar2 != 0)) {
      FUN_005b2e20(0x3f800000,0,0);
      *param_4 = param_3;
      return 1;
    }
  }
  else if (((*param_2 <= *param_1) && (param_5 = *param_1, param_5 <= *pfVar1)) &&
          (iVar2 = FUN_005d05f0(param_1,&param_3,param_5), iVar2 != 0)) {
    FUN_005b2e20(0xbf800000,0,0);
    *param_4 = param_3;
    return 1;
  }
  if (local_14 <= 0.0) {
    if (((local_14 < 0.0) && (pfVar1[1] <= param_1[4])) &&
       ((param_5 = param_1[4], param_5 <= param_2[1] &&
        (iVar2 = FUN_005d0660(param_1,&param_3,param_5), iVar2 != 0)))) {
      FUN_005b2e20(0,0x3f800000,0);
      *param_4 = param_3;
      return 1;
    }
  }
  else if (((param_2[1] <= param_1[1]) && (param_5 = param_1[1], param_5 <= pfVar1[1])) &&
          (iVar2 = FUN_005d0660(param_1,&param_3,param_5), iVar2 != 0)) {
    uVar4 = 0;
    uVar3 = 0xbf800000;
    goto LAB_005d05be;
  }
  if (local_10 <= 0.0) {
    if (((local_10 < 0.0) && (pfVar1[2] <= param_1[5])) &&
       ((param_5 = param_1[5], param_5 <= param_2[2] &&
        (iVar2 = FUN_005d06d0(param_1,&param_3,param_5), iVar2 != 0)))) {
      uVar4 = 0x3f800000;
      uVar3 = 0;
LAB_005d05be:
      FUN_005b2e20(0,uVar3,uVar4);
      *param_4 = param_3;
      return 1;
    }
  }
  else if (((param_2[2] <= param_1[2]) && (param_5 = param_1[2], param_5 <= pfVar1[2])) &&
          (iVar2 = FUN_005d06d0(param_1,&param_3,param_5), iVar2 != 0)) {
    FUN_005b2e20(0,0,0xbf800000);
    *param_4 = param_3;
    return 1;
  }
  return 0;
}

