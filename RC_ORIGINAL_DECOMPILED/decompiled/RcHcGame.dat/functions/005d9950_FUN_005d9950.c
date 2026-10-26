/*
 * FUN_005d9950 at 005d9950
 * undefined FUN_005d9950(void)
 * Address ranges: 005d9950-005d9b58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005d9950(int param_1,undefined4 param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 local_54 [4];
  double local_50;
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  bVar2 = true;
  fVar1 = *(float *)(param_1 + 0xbc);
  if (fVar1 <= 0.1) {
    return true;
  }
  local_50 = (double)fVar1;
  if (ABS(fVar1 - 1.0) < 0.1) {
    return true;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if ((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    if (*(int *)(param_1 + 0xac) == 0) {
      return true;
    }
    if (DAT_0070f828 != fVar1) {
      FUN_005da3f0(local_50);
    }
    iVar3 = FUN_005c6a90();
    if (iVar3 == 0) {
      iVar5 = *(int *)(param_1 + 0x94) + 1;
      iVar3 = FUN_005c0530(0,*(int *)(param_1 + 0x94));
      if (iVar3 == 0) {
        uVar6 = 0x80;
      }
      else {
        if (0 < iVar5) {
          do {
            iVar3 = FUN_005c3350(0);
            if (iVar3 == 0) {
              uVar6 = 0x8a;
              goto LAB_005d9a9b;
            }
            uVar6 = FUN_005c0d90();
            iVar3 = FUN_005d9b60(uVar6,local_24,param_2);
            if (iVar3 == 0) {
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b072c,0x93
                           ,&DAT_006b3f70,0);
              bVar2 = false;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar5);
        }
        iVar4 = FUN_005c0b70(local_48,iVar5);
        if (iVar4 != 0) {
          return bVar2;
        }
        uVar6 = 0x9a;
      }
LAB_005d9a9b:
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006b072c,uVar6,
                   &DAT_006b3f70,0);
    }
    else {
      iVar4 = FUN_005c4d80(&local_50,local_54);
      if (iVar4 != 0) {
        FUN_005c4f90();
        iVar4 = FUN_005d9b60(fVar1,local_48,param_2);
        FUN_005c4e50();
        return iVar4 != 0;
      }
    }
  }
  return false;
}

