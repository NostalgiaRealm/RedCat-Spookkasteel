/*
 * FUN_100031c0 at 100031c0
 * undefined FUN_100031c0(void)
 * Address ranges: 100031c0-10003395
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100031c0(int param_1,float param_2,undefined4 param_3,int *param_4,undefined4 *param_5,
                int *param_6)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  float10 fVar7;
  float local_14;
  int local_8;
  
  *param_4 = 0;
  *param_5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    pcVar6 = (char *)(param_1 + 0x34);
    do {
      if ((float)*(int *)(pcVar6 + -4) == param_2) {
        return 6 - (uint)(*pcVar6 != '\0');
      }
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x14;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  iVar4 = FUN_10002e90(param_1 + 4,param_1 + 0x10,&DAT_1003fdf8 + (int)param_2 * 5);
  if (iVar4 == 3) {
    piVar5 = (int *)(param_1 + 0x2c);
    local_14 = 0.0;
    param_2 = 0.0;
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x28)) {
      do {
        if (((*(byte *)(piVar5 + 4) & 0x10) == 0) && ((*(byte *)(piVar5 + 4) & 4) != 0)) {
          piVar1 = (int *)*piVar5;
          bVar2 = false;
          if (piVar1 != (int *)0x0) {
            iVar4 = 0;
            bVar3 = false;
            if (0 < *piVar1) {
              do {
                fVar7 = (float10)FUN_10002c00();
                if (fVar7 <= (float10)param_2) {
                  if (fVar7 < (float10)local_14) {
                    local_14 = (float)fVar7;
                  }
                }
                else {
                  param_2 = (float)fVar7;
                }
                if (fVar7 <= (float10)0.1) {
                  if (fVar7 < (float10)-0.1) {
                    bVar3 = true;
                  }
                }
                else {
                  bVar2 = true;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < *piVar1);
              if (((bVar2) && (bVar3)) &&
                 (*param_4 = *param_4 + 1, (*(byte *)(piVar5 + 4) & 1) != 0)) {
                *param_5 = 1;
              }
            }
          }
        }
        local_8 = local_8 + 1;
        piVar5 = piVar5 + 5;
      } while (local_8 < *(int *)(param_1 + 0x28));
    }
    if (((0.0 < param_2) && (param_2 < 1.0)) || ((local_14 < 0.0 && (-1.0 < local_14)))) {
      *param_6 = *param_6 + 1;
    }
    iVar4 = 3;
  }
  return iVar4;
}

