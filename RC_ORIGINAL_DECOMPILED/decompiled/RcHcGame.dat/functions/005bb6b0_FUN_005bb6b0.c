/*
 * FUN_005bb6b0 at 005bb6b0
 * undefined FUN_005bb6b0(void)
 * Address ranges: 005bb6b0-005bb7ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005bb6b0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_1 + 0x33678);
  fVar1 = *(float *)(param_1 + 0x390b4);
  if ((iVar3 == 0) || ((**(byte **)(iVar3 + 0xa8) & 4) == 0)) {
    *(undefined4 *)(param_1 + 0x390b4) = *(undefined4 *)(param_1 + 0x390b0);
  }
  else {
    iVar3 = (**(code **)(iVar3 + 0x9c))(*(undefined4 *)(param_1 + 0x390b0));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x390b4) = *(undefined4 *)(param_1 + 0x390b0);
    }
    else {
      *(undefined4 *)(param_1 + 0x390b4) = 0x3f800000;
    }
  }
  fVar2 = *(float *)(param_1 + 0x390b4) - fVar1;
  if (0.0 <= fVar2) {
    local_4 = *(undefined4 *)(param_1 + 0x390b4);
  }
  else {
    local_4 = *(undefined4 *)(param_1 + 0x390b4);
    fVar2 = -fVar2;
  }
  if (0.1 <= fVar2) {
    iVar3 = FUN_005d6c60(*(undefined4 *)(param_1 + 0x39058),local_4);
    if (iVar3 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0xcc,
                   &DAT_006b3f70,0);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x35028)) {
      piVar5 = (int *)(param_1 + 0x3502c);
      do {
        iVar4 = FUN_005d6c60(*(undefined4 *)(*piVar5 + 0xc1c),*(undefined4 *)(param_1 + 0x390b4));
        if (iVar4 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0xd4,
                       &DAT_006b3f70,0);
        }
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x35028));
    }
    return;
  }
  *(float *)(param_1 + 0x390b4) = fVar1;
  return;
}

