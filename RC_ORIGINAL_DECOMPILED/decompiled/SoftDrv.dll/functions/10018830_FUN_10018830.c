/*
 * FUN_10018830 at 10018830
 * undefined FUN_10018830(void)
 * Address ranges: 10018830-10018b7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018830(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_stack_00000010;
  
  iVar1 = __ftol();
  iVar2 = __ftol();
  uVar3 = FUN_10018b80();
  param_1[0x19] = uVar3;
  iVar4 = FUN_10018b80();
  param_1[0x1a] = iVar4 - param_1[0x19];
  if (iVar4 - param_1[0x19] != 0) {
    if (iVar2 - iVar1 < 1) {
      param_1[1] = 0;
      uVar3 = __ftol();
      *param_1 = uVar3;
    }
    else {
      __ftol();
      __ftol();
      FUN_100187e0(param_1,param_1 + 6);
      FUN_100187e0(param_1 + 1,param_1 + 4);
      param_1[5] = (iVar2 - iVar1) * 0x10;
    }
    if (in_stack_00000010 != 0) {
      if ((DAT_1020e4e0 & 0x101) != 0) {
        uVar3 = __ftol();
        param_1[7] = uVar3;
        uVar3 = __ftol();
        param_1[8] = uVar3;
        param_1[0x13] = *(undefined4 *)(param_2 + 0x60);
      }
      if ((DAT_1020e4e0 & 1) != 0) {
        uVar3 = __ftol();
        param_1[9] = uVar3;
        uVar3 = __ftol();
        param_1[10] = uVar3;
        param_1[0x14] = *(undefined4 *)(param_2 + 100);
        uVar3 = __ftol();
        param_1[0xb] = uVar3;
        uVar3 = __ftol();
        param_1[0xc] = uVar3;
        param_1[0x15] = *(undefined4 *)(param_2 + 0x68);
      }
      if ((DAT_1020e4e0 & 2) != 0) {
        uVar3 = __ftol();
        param_1[0xd] = uVar3;
        uVar3 = __ftol();
        param_1[0xe] = uVar3;
        param_1[0x16] = *(undefined4 *)(param_2 + 0x6c);
        uVar3 = __ftol();
        param_1[0xf] = uVar3;
        uVar3 = __ftol();
        param_1[0x10] = uVar3;
        param_1[0x17] = *(undefined4 *)(param_2 + 0x70);
        uVar3 = __ftol();
        param_1[0x11] = uVar3;
        uVar3 = __ftol();
        param_1[0x12] = uVar3;
        param_1[0x18] = *(undefined4 *)(param_2 + 0x74);
      }
      if (*(int *)(param_2 + 0x44) != 0) {
        if ((DAT_1020e4e0 & 0x101) != 0) {
          param_1[7] = ((int)param_1[7] >> 10) * (*(int *)(param_2 + 0x7c) >> 8);
          param_1[8] = ((int)param_1[8] >> 10) * (*(int *)(param_2 + 0x7c) >> 8);
        }
        if ((DAT_1020e4e0 & 1) != 0) {
          param_1[9] = (int)param_1[9] >> 4;
          param_1[10] = (int)param_1[10] >> 4;
          param_1[0xb] = (int)param_1[0xb] >> 4;
          param_1[0xc] = (int)param_1[0xc] >> 4;
        }
      }
    }
  }
  return;
}

