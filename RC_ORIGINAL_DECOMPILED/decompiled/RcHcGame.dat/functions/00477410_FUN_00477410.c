/*
 * FUN_00477410 at 00477410
 * undefined FUN_00477410(void)
 * Address ranges: 00477410-004775a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00477410(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if ((0xe < *(int *)(param_1 + 0x14d0)) && (*(char *)(param_1 + 0x13d4) == '\0')) {
      FUN_00502350(0);
      return;
    }
    if (*(int *)(param_1 + 0x14d0) < 0xf) {
      iVar4 = *(int *)(param_1 + 0x14c0);
      cVar3 = '\x01';
      if (iVar4 != -1) {
        iVar1 = *(int *)(param_1 + 0x14c4);
        if (iVar1 == -1) {
          *(undefined4 *)(param_1 + 0x14c8) = 0x3f800000;
          *(int *)(param_1 + 0x14c4) = iVar4 + param_2;
        }
        else if (iVar1 < param_2) {
          *(undefined4 *)(param_1 + 0x14c8) = 0;
          cVar3 = '\0';
        }
        else if (iVar4 < 1) {
          *(undefined4 *)(param_1 + 0x14c8) = 0;
        }
        else {
          *(float *)(param_1 + 0x14c8) = (float)(iVar1 - param_2) / (float)iVar4;
        }
      }
      *(char *)(param_1 + 0x14cc) = cVar3;
      if (cVar3 == '\0') {
        if (*(char *)(*(int *)(param_1 + 0x14d0) * 0x150 + 0x174 + param_1) == '\0') {
          FUN_0047e710();
        }
        else {
          FUN_0047e780();
        }
        *(int *)(param_1 + 0x14d0) = *(int *)(param_1 + 0x14d0) + 1;
        uVar2 = __ftol();
        FUN_004041b0(uVar2);
      }
    }
    *(float *)(param_1 + 0x14ec) = (float)param_3 * 0.003;
    if (*(char *)(param_1 + 0x14bc) == '\0') {
      *(float *)(param_1 + 0x14ec) = (float)param_3 * 0.003 * -1.0;
    }
    pfVar5 = (float *)(param_1 + 300);
    iVar4 = 0xf;
    do {
      pfVar5[-0xb] = *(float *)(param_1 + 0x14d8) * *pfVar5 +
                     (1.0 - *pfVar5) * *(float *)(param_1 + 0x14e4);
      pfVar5[0x3d] = pfVar5[-0xc];
      pfVar5[0x3e] = pfVar5[-0xb];
      pfVar5[0x3f] = pfVar5[-10];
      (**(code **)((int)pfVar5[-9] + 4))(param_2,param_3);
      pfVar5 = pfVar5 + 0x54;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

