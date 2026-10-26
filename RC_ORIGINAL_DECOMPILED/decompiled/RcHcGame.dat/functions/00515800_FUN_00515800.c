/*
 * FUN_00515800 at 00515800
 * undefined FUN_00515800(void)
 * Address ranges: 00515800-0051589d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00515800(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1 != param_2) {
    piVar4 = param_2 + 5;
    piVar5 = param_3 + 5;
    do {
      iVar2 = param_3[-9];
      piVar1 = param_2 + -9;
      param_2 = param_2 + -9;
      param_3 = param_3 + -9;
      if (iVar2 != *piVar1) {
        if ((iVar2 != 0) &&
           (iVar3 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar3, iVar3 == 0)) {
          FUN_005abfc0(0);
        }
        iVar2 = *param_2;
        *param_3 = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        }
      }
      piVar5[-0xd] = piVar4[-0xd];
      piVar5[-0xc] = piVar4[-0xc];
      piVar5[-0xb] = piVar4[-0xb];
      piVar5[-10] = piVar4[-10];
      piVar5[-9] = piVar4[-9];
      piVar5[-8] = piVar4[-8];
      piVar5[-7] = piVar4[-7];
      piVar5[-6] = piVar4[-6];
      piVar4 = piVar4 + -9;
      piVar5 = piVar5 + -9;
    } while (param_2 != param_1);
    return param_3;
  }
  return param_3;
}

