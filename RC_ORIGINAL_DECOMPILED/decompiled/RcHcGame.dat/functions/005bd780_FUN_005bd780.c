/*
 * FUN_005bd780 at 005bd780
 * undefined FUN_005bd780(void)
 * Address ranges: 005bd780-005bd8c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005bd780(int param_1,float param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float local_38 [3];
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [32];
  
  pfVar2 = param_4;
  if (*(int *)(param_1 + 0xc) == 1) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_005b3070();
      FUN_005b5fd0();
      return;
    }
    FUN_005bd780((param_2 - (*(float **)(param_1 + 0x18))[1]) * **(float **)(param_1 + 0x18),param_3
                 ,param_4);
    iVar3 = 1;
    if (1 < *(int *)(param_1 + 0x10)) {
      param_4 = (float *)0x44;
      do {
        fVar1 = (param_2 - *(float *)(*(int *)(param_1 + 0x18) + 4 + (int)param_4)) *
                *(float *)(*(int *)(param_1 + 0x18) + (int)param_4);
        FUN_005bd780(fVar1,local_20,&local_2c);
        FUN_005c5890(fVar1,local_38);
        FUN_005b59f0(local_38[0],param_3);
        iVar3 = iVar3 + 1;
        param_4 = (float *)((int)param_4 + 0x44);
        *pfVar2 = (local_2c - *pfVar2) * local_38[0] + *pfVar2;
        pfVar2[1] = (local_28 - pfVar2[1]) * local_38[0] + pfVar2[1];
        pfVar2[2] = (local_24 - pfVar2[2]) * local_38[0] + pfVar2[2];
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
  }
  else if (*(int *)(param_1 + 0xc) == 2) {
    FUN_005c5890(param_2,param_4);
    return;
  }
  return;
}

