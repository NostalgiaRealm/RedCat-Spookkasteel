/*
 * FUN_00459d40 at 00459d40
 * undefined FUN_00459d40(void)
 * Address ranges: 00459d40-00459e45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00459d40(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  undefined1 local_c [12];
  
  param_2 = *(int *)(param_1 + 0x508) + param_2;
  *(int *)(param_1 + 0x508) = param_2;
  if (((float)*(int *)(param_1 + 0x50c) != 0.0) && (*(int *)(param_1 + 0x50c) < param_2)) {
    FUN_00458fd0(5);
    return;
  }
  if (*(int *)(param_1 + 0x450) == 8) {
    piVar1 = *(int **)(param_1 + 0x480);
    if ((piVar1 == (int *)0x0) || ((char)piVar1[0x1f] == '\0')) {
      iVar3 = **(int **)(param_1 + 0x360);
    }
    else {
      iVar3 = *piVar1;
    }
    puVar2 = (undefined4 *)(**(code **)(iVar3 + 0x48))(local_c);
    *(undefined4 *)(param_1 + 0x470) = *puVar2;
    *(undefined4 *)(param_1 + 0x474) = puVar2[1];
    *(undefined4 *)(param_1 + 0x478) = puVar2[2];
  }
  puVar2 = (undefined4 *)(param_1 + 0x464);
  *(undefined4 *)(param_1 + 0x3b8) = *puVar2;
  *(undefined4 *)(param_1 + 0x3bc) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x46c);
  fVar4 = (float10)FUN_00459d00(puVar2,param_1 + 0x470);
  fVar4 = (float10)FUN_005b1630((float)fVar4);
  *(float *)(param_1 + 0x3c4) = (float)fVar4;
  fVar4 = (float10)FUN_005b1600(puVar2,param_1 + 0x470);
  fVar4 = (float10)FUN_005b1630((float)(fVar4 - (float10)1.5707964));
  *(float *)(param_1 + 0x3c8) = (float)fVar4;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  return;
}

