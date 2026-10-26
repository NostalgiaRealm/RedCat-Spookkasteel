/*
 * FUN_00459e50 at 00459e50
 * undefined FUN_00459e50(void)
 * Address ranges: 00459e50-0045a124
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00459e50(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  float10 fVar6;
  undefined4 unaff_retaddr;
  float fVar7;
  float fStack_14;
  undefined8 uStack_10;
  float fStack_8;
  float *pfStack_4;
  
  if ((*(int *)(param_1 + 0x480) == 0) || (*(char *)(*(int *)(param_1 + 0x480) + 0x7c) == '\0')) {
    FUN_00458f90();
    return;
  }
  iVar3 = *(int *)(param_1 + 0x360);
  (**(code **)(**(int **)(iVar3 + 0xf8) + 0x24))((int)&uStack_10 + 4);
  cVar4 = (**(code **)(**(int **)(iVar3 + 0xf8) + 0x34))();
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x431) == '\0') {
      *(undefined1 *)(param_1 + 0x520) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x520) = 1;
    }
    *(undefined1 *)(param_1 + 0x431) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x431) = 1;
    *(undefined1 *)(param_1 + 0x520) = 0;
    *(undefined1 *)(param_1 + 0x521) = 0;
  }
  pfVar1 = (float *)(param_2 + 4);
  fVar6 = (float10)FUN_004d6960();
  *pfVar1 = (float)fVar6;
  if (cVar4 == '\0') {
    fVar7 = *(float *)(param_1 + 0x39c);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x3a0) * *(float *)(param_1 + 0x39c);
  }
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_00458900(0,0x3f800000,0,*(undefined4 *)(param_1 + 0x378),pfVar1,fVar7,unaff_retaddr);
  }
  fVar7 = *(float *)(param_1 + 0x3e0) * 1.5;
  pfVar2 = (float *)(param_1 + 0x3b8);
  fStack_14 = *(float *)(param_1 + 0x3e0) * 1.2;
  *pfVar2 = *(float *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0x438) = fStack_14 + *(float *)(param_1 + 0x438);
  fVar6 = (float10)FUN_004d6960();
  fVar6 = (float10)fcos(fVar6 + (float10)3.1415927);
  *(float *)(param_1 + 0x434) =
       (float)(fVar6 * (float10)fVar7 + (float10)*(float *)(param_1 + 0x434));
  uStack_10 = (double)*(float *)(param_1 + 0x43c);
  fVar6 = (float10)FUN_004d6960();
  fVar6 = (float10)fsin(fVar6 + (float10)3.1415927);
  *(float *)(param_1 + 0x43c) = (float)((float10)uStack_10 - fVar6 * (float10)fVar7);
  *(float *)(param_1 + 0x3bc) = fStack_14 + *(float *)(param_1 + 0x3bc);
  fVar6 = (float10)fcos((float10)*pfVar1 + (float10)3.1415927);
  *pfVar2 = (float)(fVar6 * (float10)fVar7 + (float10)*pfVar2);
  fVar6 = (float10)fsin((float10)*pfVar1 + (float10)3.1415927);
  *(float *)(param_1 + 0x3c0) =
       (float)((float10)*(float *)(param_1 + 0x3c0) - fVar6 * (float10)fVar7);
  FUN_0045aa40();
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_0045a470(unaff_retaddr,0);
  }
  uVar5 = (**(code **)(**(int **)(param_1 + 0x360) + 0x48))(&uStack_10);
  FUN_005b1600(pfVar2,uVar5);
  fVar6 = (float10)FUN_005b1630(*pfVar1 - 1.5707964);
  *(float *)(param_1 + 0x3c8) = (float)fVar6;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x480) + 0x48))(&fStack_14);
  fVar6 = (float10)FUN_00459d00(pfVar2,uVar5);
  pfVar1 = (float *)(param_1 + 0x3c4);
  fStack_8 = (float)fVar6;
  *pfVar1 = (float)fVar6;
  if (*(char *)(param_1 + 0x454) == '\0') {
    FUN_00458900(0x3f800000,0,0,*(undefined4 *)(param_1 + 0x374),pfVar1,unaff_ESI,unaff_retaddr);
    *pfStack_4 = *pfVar1;
    *(undefined1 *)(param_1 + 0x454) = 0;
    return;
  }
  fVar6 = (float10)FUN_005b1630(fStack_8);
  *pfVar1 = (float)fVar6;
  *pfStack_4 = *pfVar1;
  *(undefined1 *)(param_1 + 0x454) = 0;
  return;
}

