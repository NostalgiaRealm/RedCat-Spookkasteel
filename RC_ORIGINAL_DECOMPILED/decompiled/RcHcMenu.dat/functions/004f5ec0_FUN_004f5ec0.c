/*
 * FUN_004f5ec0 at 004f5ec0
 * undefined __register FUN_004f5ec0(int * param_1, int * param_2)
 * Address ranges: 004f5ec0-004f5fc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5ec0(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  WPARAM WVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar5;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar6;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  
  if (param_2 != (int *)param_1[0x91]) {
    piVar3 = FUN_0044879c(param_1);
    uVar5 = extraout_ECX;
    uVar6 = extraout_EDX;
    if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) &&
       (bVar1 = thunk_FUN_0043554d(param_1[0x91],piVar3[0x82]), uVar5 = extraout_ECX_00,
       uVar6 = extraout_EDX_00, bVar1)) {
      FUN_0044c24c(piVar3,(int *)param_1[0x91],extraout_ECX_00);
      uVar5 = extraout_ECX_01;
      uVar6 = extraout_EDX_01;
      if (param_1[0x91] != piVar3[0x82]) {
        WVar4 = FUN_004f5a64(param_1[0x91]);
        FUN_004f5300(param_1,WVar4);
        return;
      }
    }
    if (param_2 != (int *)0x0) {
      FUN_00432958(param_2,uVar6,uVar5);
      FUN_0043262c(param_2,CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_02);
      uVar5 = extraout_ECX_03;
      if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) && (piVar3[0x82] == param_1[0x91])) {
        cVar2 = FUN_00403270(param_2,extraout_EDX_03,extraout_ECX_03);
        if (cVar2 == '\0') {
          FUN_0044c24c(piVar3,param_1,extraout_ECX_04);
          uVar5 = extraout_ECX_06;
        }
        else {
          FUN_0044c24c(piVar3,param_2,extraout_ECX_04);
          uVar5 = extraout_ECX_05;
        }
      }
    }
    if ((int *)param_1[0x91] != (int *)0x0) {
      FUN_0043262c((int *)param_1[0x91],0,uVar5);
    }
    param_1[0x91] = (int)param_2;
    if (((piVar3 != (int *)0x0) && (param_1[0x91] != 0)) && (piVar3[0x82] == param_1[0x91])) {
      FUN_00438ed8((int *)param_1[0x91]);
    }
  }
  return;
}

