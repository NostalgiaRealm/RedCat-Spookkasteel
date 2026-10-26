/*
 * FUN_10001a30 at 10001a30
 * undefined FUN_10001a30(void)
 * Address ranges: 10001a30-10001b1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_10001a30(int param_1)

{
  int iVar1;
  float10 fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float local_2c;
  float local_14 [5];
  
  if (param_1 == 0) {
    return (float10)0.0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    piVar4 = (int *)(param_1 + 0x2c);
    do {
      if (*piVar4 != 0) {
        FUN_100145d0();
        local_2c = 0.0;
        if (iVar6 < *(int *)(param_1 + 0x28)) {
          piVar4 = (int *)(param_1 + 0x30 + iVar6 * 0x14);
          do {
            iVar1 = piVar4[-1];
            if (iVar1 != 0) {
              iVar3 = piVar4[1];
              pfVar7 = (float *)(&DAT_1003fdf8 + *piVar4 * 5);
              pfVar8 = local_14;
              for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar8 = *pfVar7;
                pfVar7 = pfVar7 + 1;
                pfVar8 = pfVar8 + 1;
              }
              if ((char)iVar3 != '\0') {
                FUN_10002b30(local_14);
              }
              fVar9 = (float10)FUN_100143d0();
              fVar2 = (float10)local_14[3];
              fVar10 = (float10)FUN_1000d610(iVar1);
              local_2c = (float)(fVar10 * (float10)(float)-(fVar9 - fVar2) + (float10)local_2c);
            }
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + 5;
          } while (iVar6 < *(int *)(param_1 + 0x28));
        }
        return (float10)local_2c * (float10)0.33333334;
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 5;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  return (float10)0.0;
}

