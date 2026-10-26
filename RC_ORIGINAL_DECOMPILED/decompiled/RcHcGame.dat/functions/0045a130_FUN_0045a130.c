/*
 * FUN_0045a130 at 0045a130
 * undefined FUN_0045a130(void)
 * Address ranges: 0045a130-0045a3dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0045a130(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  float10 fVar4;
  int unaff_retaddr;
  undefined4 uVar5;
  undefined4 local_10;
  undefined1 local_c [12];
  
  iVar2 = *(int *)(param_1 + 0x508) + param_2;
  *(int *)(param_1 + 0x508) = iVar2;
  if ((*(int *)(param_1 + 0x50c) < iVar2) || (*(char *)(param_1 + 0x504) == '\0')) {
    FUN_00458fd0(5);
    *(undefined1 *)(param_1 + 0x504) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x454) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x3b8);
    *(undefined1 *)(param_1 + 0x454) = 0;
    iVar2 = param_1 + 0x488 + *(int *)(param_1 + 0x510) * 0xc;
    *puVar1 = *(undefined4 *)(param_1 + 0x488 + *(int *)(param_1 + 0x510) * 0xc);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(iVar2 + 8);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x480) + 0x48))(local_c);
    fVar4 = (float10)FUN_00459d00(puVar1,uVar5);
    fVar4 = (float10)FUN_005b1630((float)fVar4);
    *(float *)(param_1 + 0x3c4) = (float)fVar4;
    uVar5 = (**(code **)(**(int **)(param_1 + 0x480) + 0x48))(&local_10);
    fVar4 = (float10)FUN_005b1600(puVar1,uVar5);
    *(float *)(unaff_retaddr + 4) = (float)fVar4;
    fVar4 = (float10)FUN_005b1630((float)(fVar4 - (float10)1.5707964));
    *(float *)(param_1 + 0x3c8) = (float)fVar4;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x510);
  iVar3 = param_1 + iVar2 * 0xc;
  if (((*(float *)(param_1 + 0x410) == *(float *)(iVar3 + 0x488)) &&
      (*(float *)(param_1 + 0x414) == *(float *)(param_1 + (iVar2 * 3 + 0x123) * 4))) &&
     (*(float *)(param_1 + 0x418) == *(float *)(iVar3 + 0x490))) {
    iVar3 = *(int *)(param_1 + 0x500) + -1;
    if (iVar2 == iVar3) {
      *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x410);
      *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x414);
      *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x418);
      goto LAB_0045a26b;
    }
    iVar2 = iVar2 + 1;
    *(int *)(param_1 + 0x510) = iVar2;
    puVar1 = (undefined4 *)(param_1 + 0x488 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0x3b8) = *puVar1;
    *(undefined4 *)(param_1 + 0x3bc) = puVar1[1];
    *(undefined4 *)(param_1 + 0x3c0) = puVar1[2];
    if (iVar2 == iVar3) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(iVar3 + 0x488);
    *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(iVar3 + 0x48c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(iVar3 + 0x490);
    if (iVar2 == *(int *)(param_1 + 0x500) + -1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  FUN_0045a470(param_2,uVar5);
LAB_0045a26b:
  local_10 = *(undefined4 *)(param_1 + 0x39c);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x480) + 0x48))(local_c);
  fVar4 = (float10)FUN_005b1600(param_1 + 0x3b8,uVar5);
  *(float *)(param_2 + 4) = (float)fVar4;
  FUN_00458900(0,0x3f800000,0,*(undefined4 *)(param_1 + 0x378),&stack0x00000000,unaff_EBX,param_2);
  fVar4 = (float10)FUN_005b1630((float)fVar4 - 1.5707964);
  *(float *)(param_1 + 0x3c8) = (float)fVar4;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x480) + 0x48))(&local_10);
  fVar4 = (float10)FUN_00459d00(param_1 + 0x3b8,uVar5);
  fVar4 = (float10)FUN_005b1630((float)fVar4);
  *(float *)(param_1 + 0x3c4) = (float)fVar4;
  return;
}

